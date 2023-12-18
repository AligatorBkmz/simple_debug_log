// debug.h


#ifndef DEBUG_H
#define DEBUG_H

#include <iostream>
#include <string>
#include <vector>



class Debug {

public:

    static const bool ENABLE_DEBUG_OUTPUT;
    static const bool ENABLE_NAME_CHECK;
    static std::vector<std::string> ALLOWED_AREAS;



    static void log(const std::string& area, const std::string& variableName, float value);

    static void log(const std::string& area, const std::string& variableName, int value);
    static void log(const std::string& area, const std::string& variableName, const std::string& value);

    // add to ALLOWED_AREAS

    static void addAllowedArea(const std::string& newArea);

    // remove from ALLOWED_AREAS

    static void removeAllowedArea(const std::string& areaToRemove);

private:

    static bool isAreaAllowed(const std::string& area);

};



#endif // DEBUG_H