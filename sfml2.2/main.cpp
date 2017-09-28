#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <cmath>
#include <iostream>

constexpr unsigned WINDOW_WIDTH = 800;
constexpr unsigned WINDOW_HEIGHT = 600;

float toDegrees(float radius)
{
    return float(double(radius) * 180.0 / M_PI);
}

int main()
{
    constexpr int pointCount = 200;

    sf::ContextSettings settings;
    settings.antialiasingLevel = 4;
    sf::RenderWindow window(sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}), "Polar Rose", sf::Style::Default, settings);
    sf::Clock clock;

    sf::ConvexShape ellipse;
    ellipse.setPosition({400, 320});
    ellipse.setFillColor(sf::Color(0xFF, 0x09, 0x80));

    sf::Vector2f position = {0, 0};
    const float speed = 20.f;

    ellipse.setPointCount(pointCount);
    for (int pointNo = 0; pointNo < pointCount; ++pointNo)
    {
        float angle = float(2 * M_PI * pointNo) / float(pointCount);
        sf::Vector2f point = {
            200 * std::sin(6 * angle) * std::sin(angle),
            200 * std::sin(6 * angle) * std::cos(angle)};
        ellipse.setPoint(pointNo, point);
    }

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        const float dt = clock.restart().asSeconds();

        position = ellipse.getPosition();

        const float angle = atan2(position.y, position.x);

        position.x += dt * 20 * std::cos(toDegrees(angle));
        position.y += dt * 20 * std::sin(toDegrees(angle));

        ellipse.setPosition(position);

        window.clear();
        window.draw(ellipse);
        window.display();
    }
}