#pragma once
#include<iostream>
struct Log

{

public:

    enum Level {

        LevelError = 0, LevelWarning, LevelInfo

    };

private:

    Level m_LogLevel = LevelInfo;

public:

    #include "SetLogLevel.h"

    #include "Warm.h"

    #include "Error.h"

    #include "Info.h"

};