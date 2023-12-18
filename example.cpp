#include "debug.h"



int main() {

    // Enable or disable debug output globally

    Debug::ENABLE_DEBUG_OUTPUT = true;



    // Enable or disable name check for debug output

    Debug::ENABLE_NAME_CHECK = true;



    // Log a float variable

    float variableFloat = 3.14f;

    Debug::log("MAIN", "variableFloat", variableFloat);



    // Log an integer variable

    int variableInt = 42;

    Debug::log("MAIN", "variableInt", variableInt);



    // Log a string variable

    std::string variableString = "Hello, Debug!";

    Debug::log("MAIN", "variableString", variableString);



    // Check if an area is allowed before logging

    if (Debug::isAreaAllowed("MAIN")) {

        // Log another float variable

        float anotherFloat = 2.718f;

        Debug::log("MAIN", "anotherFloat", anotherFloat);

    }



    // Remove an allowed area

    Debug::removeAllowedArea("MAIN");



    // Try logging after removing the area (it should not log)

    float yetAnotherFloat = 1.234f;

    Debug::log("MAIN", "yetAnotherFloat", yetAnotherFloat);



    return 0;

}