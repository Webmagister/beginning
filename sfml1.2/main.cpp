#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 4;

    sf::RenderWindow window(sf::VideoMode({800, 600}), "Initials", sf::Style::Default, settings);

    window.clear();

    sf::CircleShape shape5(30);
    shape5.setPosition({55, 10});
    shape5.setFillColor(sf::Color(0x43, 0x43, 0x43));
    window.draw(shape5);

    sf::RectangleShape shape6;
    shape6.setSize({30, 100});
    shape6.setPosition({50, 10});
    shape6.setFillColor(sf::Color(0x0, 0x0, 0x0));
    window.draw(shape6);

    sf::RectangleShape shape1;
    shape1.setSize({5, 100});
    shape1.setPosition({40, 10});
    shape1.setRotation(15);
    shape1.setFillColor(sf::Color(0x43, 0x43, 0x43));
    window.draw(shape1);

    sf::RectangleShape shape2;
    shape2.setSize({5, 100});
    shape2.setPosition({40, 10});
    shape2.setRotation(-15);
    shape2.setFillColor(sf::Color(0x43, 0x43, 0x43));
    window.draw(shape2);

    sf::RectangleShape shape3;
    shape3.setSize({5, 20});
    shape3.setPosition({55, 40});
    shape3.setRotation(90);
    shape3.setFillColor(sf::Color(0x43, 0x43, 0x43));
    window.draw(shape3);

    sf::RectangleShape shape4;
    shape4.setSize({5, 100});
    shape4.setPosition({80, 10});
    shape4.setFillColor(sf::Color(0x43, 0x43, 0x43));
    window.draw(shape4);

    sf::RectangleShape shape7;
    shape7.setSize({5, 100});
    shape7.setPosition({140, 10});
    shape7.setRotation(15);
    shape7.setFillColor(sf::Color(0x43, 0x43, 0x43));
    window.draw(shape7);

    sf::RectangleShape shape8;
    shape8.setSize({5, 100});
    shape8.setPosition({140, 10});
    shape8.setRotation(-15);
    shape8.setFillColor(sf::Color(0x43, 0x43, 0x43));
    window.draw(shape8);

    sf::RectangleShape shape9;
    shape9.setSize({5, 20});
    shape9.setPosition({155, 40});
    shape9.setRotation(90);
    shape9.setFillColor(sf::Color(0x43, 0x43, 0x43));
    window.draw(shape9);

    window.display();

    sf::sleep(sf::seconds(5));
}