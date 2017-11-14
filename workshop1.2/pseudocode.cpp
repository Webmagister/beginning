#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <cmath>
#include <iostream>

void pollEvents(sf::RenderWindow &window)
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        switch (event.type)
        {
        case sf::Event::Closed:
            window.close();
            break;
        default:
            break;
        }
    }
}

void initArrow(sf::ConvexShape &arrow) // Инициализация стрелки
{
}

void onMouseMove(const sf::Event::MouseMoveEvent &event, sf::Vector2f &mousePosition) // Получаем координаты мыши
{
}

void update() // Обновление состояния стрелки
{
}

float vectorNormalize() // Возвращает нормализованный вектор
{
}

void drawFrame(sf::RenderWindow &window, sf::ConvexShape &arrow) // Отрисовка стрелки
{
}

int main()
{
    constexpr unsigned WINDOW_WIDTH = 800;
    constexpr unsigned WINDOW_HEIGHT = 600;

    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(
        sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}),
        "Arrow follows mouse", sf::Style::Default, settings);

    sf::ConvexShape arrow;

    while (window.isOpen())
    {
    }
}