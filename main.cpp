// main.cpp
#include <SFML/Graphics.hpp>
#include "player.h"
#include <iostream>
const int FAST = 5, STILL = 0;
int main() {
    sf::Time t1 = sf::microseconds(800000);
    float sec = t1.asSeconds();
    sf::RenderWindow window(sf::VideoMode(1920/2, 1080/2), "Rustar");
    window.setFramerateLimit(60);
    sf::CircleShape player(10.f);
    player.setFillColor(sf::Color::Green);
    sf::Clock clock;
    float deltaTime = 0.f;
    float playerSpeed = 0.1f;

    while (window.isOpen()) {
	    clock.restart();

        sf::Event event;
        while (window.pollEvent(event)) {

            if (event.type == sf::Event::Closed)
                window.close();
	    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
		    player.move(0.f, -playerSpeed * deltaTime);
	    }
	    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		    player.move(0.f, playerSpeed * deltaTime);
	    }
	    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		    player.move(-playerSpeed * deltaTime, 0.f);
	    }
	    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		    player.move(playerSpeed * deltaTime, 0.f);
	    }
        }
	deltaTime = clock.getElapsedTime().asMicroseconds();

        window.clear();
        window.draw(player);
        window.display();
    }

    return 0;
}
