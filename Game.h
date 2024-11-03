#include <vector>
#include <iostream>

#include "Scene.h"
#include "Player.h"

class Game {
private:    
    Player player;
    Scene* currentScene;

public:
    // constructor
    Game(std::string playerName);
    // functions
    void setScene();

    void run(); // runs main game loop
};