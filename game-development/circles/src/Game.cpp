#include "Game.h"

Game::Game() 
    : window(sf::RenderWindow(sf::VideoMode({800u, 600u}), "Circles Experiment")) {

}

void Game::run() {
    while(window.isOpen()) {
        processEvents();
        update();
        render();
    }
}

void Game::processEvents() {
    while (const std::optional event = window.pollEvent()) {
        if (event->is<sf::Event::Closed>()) {
            window.close();
        }
    }
}

void Game::update() {

}

void Game::render() {
    window.clear();

    window.display();
}