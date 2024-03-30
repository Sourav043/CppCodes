
void Error(const char* message)

{

    if (m_LogLevel >= LevelError)

        std::cout << "[Error]: " << message << std::endl;

}