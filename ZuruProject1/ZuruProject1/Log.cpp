#include<iostream>
#include "Log.h"
#include "String.h"
#include "Date.h"

std::ofstream out("Log.txt", std::ofstream::out | std::ofstream::app);
void Log::SetLogLevel(const Level level)
{
	m_LogLevel = level;
}
void Log::Warn(String& message)
{
    
	if (m_LogLevel >= Level::LevelWarning)
        if (!out) {
            std::cout << "Sorry Can't Open The File";
        }
		std::cout << "[Warning]: " << message.getString() << std::endl;

}
void Log::Error(String& message)
{
	if (m_LogLevel >= Level::LevelError)
        if (!out) {
            std::cout << "Sorry Can't Open The File";
        }
		std::cout << "[Error]: " << message.getString() << std::endl;

}   
void Log::Info(String& message)
{
    Date currentDate{};
    if (m_LogLevel >= Level::LevelInfo)
        if (!out) {
            std::cout << "Sorry Can't Open The File";
        }
        out << "[User: "<< currentDate.toString() <<"] " << message.getString() << std::endl;
        std::cout << "[User: " << currentDate.toString() << "] " << message.getString() << std::endl;
}

