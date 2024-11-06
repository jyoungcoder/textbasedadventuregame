#include "Game.h"
#include <iostream>

Game::Game()
{
    // Creates rooms and add them to the map
    scenes[1] = Scene("You are in a dark cave. There is a faint light to the east.");
    scenes[2] = Scene("You are in a bright, open field. The sky is clear.");
    scenes[3] = Scene("You are in a mysterious forest with tall, twisting trees.");

    // Set up doors to connect rooms
    scenes[1].doors[1] = 2; // Door 1 in room 1 goes to room 2
    scenes[2].doors[1] = 1; // Door 1 in room 2 goes back to room 1
    scenes[2].doors[2] = 3; // Door 2 in room 2 goes to room 3
}

void Game::start()
{
    currentRoom = 1; // start in room 1

    while (true) {
        // show the current scene desc
        std::cout << scenes[currentRoom].description << "\n";

        //show the doors available
        for (const auto& door : scenes[currentRoom].doors) {
            std::cout << "Door " << door.first << " leads to another room.\n";
        }

        // Ask the player for a choice
        int choice;
        std::cout <<  "Choose a door: ";
        std::cin >> choice;

        // Check if the choice is a valid door
        if (scenes[currentRoom].doors.find(choice) != scenes[currentRoom].doors.end()) {
            currentRoom = scenes[currentRoom].doors[choice]; // move to the chosen room
        } else {
            std::cout << "That is not a valid door!\n";
        }
    }
}
