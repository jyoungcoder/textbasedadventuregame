#ifndef SCENE_H
#define SCENE_H

#include <string>
#include <unordered_map>

class Scene {
public:
    std::string description;
    std::unordered_map<int, int> doors; // Each door leads to another by it's number

    Scene(std::string desc) : description(desc) {};
};

#endif // SCENE_H