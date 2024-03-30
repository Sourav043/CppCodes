
void Warn(const char* message)

{

    if (m_LogLevel >= LevelWarning)

        std::cout << "[Warning]: " << message << std::endl;

}