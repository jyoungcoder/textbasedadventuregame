#include <vector>
#include <iostream>
#include <memory>
#include <unordered_map>

#include "Scene.h"
#include "Player.h"


class Game {
public:
    Game();
    void start();
private: 
    std::unordered_map<int, Scene> scenes;
    int currentRoom;
};