#pragma once
#include<fstream>
#include "String.h"
extern std::ofstream out;
class Log
{
public:
    enum class Level {
        LevelError = 0, LevelWarning, LevelInfo
    };

    void SetLogLevel(Level level);
    void Warn(String& message);
    void Error(String& message);
    void Info(String& message);

private:
    Level m_LogLevel = Level::LevelInfo;

};