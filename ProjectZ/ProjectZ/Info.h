
void Info(const char* message)

{

    if (m_LogLevel >= LevelInfo)

        std::cout << "[Info]: " << message << std::endl;

}