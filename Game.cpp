#include "Game.h"

Game::Game(std::string playerName) : player(), currentScene() {
    this->player.name = playerName;
    this->currentScene->display();
}

void Game::setScene() {
}

void Game::run() {
    while (true) {
        int choice;
        std::cout << "Enter your choice: " << std::endl;
        std::cin >> choice;

        currentScene->getNextScene(choice);
    }
}