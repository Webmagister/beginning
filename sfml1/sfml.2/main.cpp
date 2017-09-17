#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "title");

    window.clear();

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

    // sf::CircleShape shape2(30);
    // shape2.setPosition({30, 35});
    // shape2.setFillColor(sf::Color(0x0, 0xFF, 0x0));
    // window.draw(shape2);

    window.display();

    sf::sleep(sf::seconds(5));
}