#include <iostream>
#include <vector>
#include <map>

class Scene {
    public:
    // variables
    std::string description;
    std::vector<std::string> choices;
    std::map<int, Scene*> nextScenes; // index and scene pairs

    // constructor
    Scene(std::string description, std::vector<std::string> choices);

    // functions
    void display();

    Scene* getNextScene(int choiceIndex);

};