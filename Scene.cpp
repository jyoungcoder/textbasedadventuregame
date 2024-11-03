#include "Scene.h"

Scene::Scene(std::string description, std::vector<std::string> choices)
{
    this->description = description;
    this->choices = choices;
}

void Scene::display()
{
    for (int i = 0; i < choices.size(); i++) {
        std::cout << i + 1 << ": " << choices[i] << std::endl;
    }
}

// Method to get the next scene based off of the choice index
Scene * Scene::getNextScene(int choiceIndex)
{
    if (nextScenes.find(choiceIndex) != nextScenes.end()) {
        return nextScenes[choiceIndex];
    } else {
        return nullptr;
    }
}
