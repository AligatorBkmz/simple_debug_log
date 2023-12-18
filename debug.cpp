// debug.cpp

#include "debug.h"
#include <algorithm>

const bool Debug::ENABLE_DEBUG_OUTPUT = true;
const bool Debug::ENABLE_NAME_CHECK = true;
std::vector<std::string> Debug::ALLOWED_AREAS = {"CAMERA", "-PLAYER", "MAP", "MAIN"};



void Debug::log(const std::string& area, const std::string& variableName, float value) {
    if (ENABLE_DEBUG_OUTPUT && (ENABLE_NAME_CHECK ? isAreaAllowed(area) : true)) {
        std::cout << "[" << area << "] " << variableName << " = " << value << std::endl;
    }
}



void Debug::log(const std::string& area, const std::string& variableName, int value) {
    if (ENABLE_DEBUG_OUTPUT && (ENABLE_NAME_CHECK ? isAreaAllowed(area) : true)) {
        std::cout << "[" << area << "] " << variableName << " = " << value << std::endl;
    }
}



void Debug::log(const std::string& area, const std::string& variableName, const std::string& value) {
    if (ENABLE_DEBUG_OUTPUT && (ENABLE_NAME_CHECK ? isAreaAllowed(area) : true)) {
        std::cout << "[" << area << "] " << variableName << " = " << value << std::endl;
    }
}



bool Debug::isAreaAllowed(const std::string& area) {
    return std::find(ALLOWED_AREAS.begin(), ALLOWED_AREAS.end(), area) != ALLOWED_AREAS.end();
}



void Debug::addAllowedArea(const std::string& newArea) {
    ALLOWED_AREAS.push_back(newArea);
}



void Debug::removeAllowedArea(const std::string& areaToRemove) {
    auto it = std::find(ALLOWED_AREAS.begin(), ALLOWED_AREAS.end(), areaToRemove);
    if (it != ALLOWED_AREAS.end()) {
        ALLOWED_AREAS.erase(it);
    }
}