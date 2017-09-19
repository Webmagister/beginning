#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 4;

    sf::RenderWindow window(sf::VideoMode({800, 600}), "My home", sf::Style::Default, settings);

    window.clear();

    sf::RectangleShape wall;
    wall.setSize({473, 250});
    wall.setPosition({178, 296});
    wall.setFillColor(sf::Color(0x8c, 0x6d, 0x4c));
    window.draw(wall);

    sf::RectangleShape door;
    door.setSize({73, 173});
    door.setPosition({224, 368});
    door.setFillColor(sf::Color(0x0, 0x0, 0x0));
    window.draw(door);

    sf::ConvexShape roof;
    roof.setFillColor(sf::Color(0x5d, 0x1e, 0x17));
    roof.setPointCount(4);
    roof.setPoint(0, {128, 296});
    roof.setPoint(1, {310, 178});
    roof.setPoint(2, {520, 178});
    roof.setPoint(3, {700, 296});
    window.draw(roof);

    sf::RectangleShape pipe1;
    pipe1.setSize({35, 64});
    pipe1.setPosition({473, 170});
    pipe1.setFillColor(sf::Color(0x3B, 0x38, 0x38));
    window.draw(pipe1);

    sf::RectangleShape pipe2;
    pipe2.setSize({58, 41});
    pipe2.setPosition({460, 134});
    pipe2.setFillColor(sf::Color(0x3B, 0x38, 0x38));
    window.draw(pipe2);

    sf::CircleShape smoke1(10);
    smoke1.setPosition({490, 120});
    smoke1.setFillColor(sf::Color(0xBF, 0xBF, 0xBF));
    window.draw(smoke1);

    sf::CircleShape smoke2(14);
    smoke2.setPosition({502, 100});
    smoke2.setFillColor(sf::Color(0xBF, 0xBF, 0xBF));
    window.draw(smoke2);

    sf::CircleShape smoke3(20);
    smoke3.setPosition({510, 70});
    smoke3.setFillColor(sf::Color(0xBF, 0xBF, 0xBF));
    window.draw(smoke3);

    sf::CircleShape smoke4(32);
    smoke4.setPosition({516, 20});
    smoke4.setFillColor(sf::Color(0xBF, 0xBF, 0xBF));
    window.draw(smoke4);

    window.display();

    sf::sleep(sf::seconds(5));
}