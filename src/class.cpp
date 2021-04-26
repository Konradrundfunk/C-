class Test{
public:
    int x, y, speed;
    void Move(int xa, int ya){
        x += xa * speed;
        y += ya * speed;
    }
};
class Log{
public:
    const int LogLevelInfo = 2;
    const int LogLevelWarning = 1;
    const int LogLevelError = 0;
private:
    int m_LogLevel = LogLevelInfo;
public:
    void SetLevel(int level){
        m_LogLevel = level;
    }
    void Warn(const char *meassage){
        if (m_LogLevel >= LogLevelWarning){
            std::cout << "[Warning] " << meassage << std::endl;
        }
    }
    void Error(const char *meassage){
        if (m_LogLevel >= LogLevelError){
            std::cout << "[Error] " << meassage << std::endl;
        }
    }
    void Info(const char *meassage){
        if (m_LogLevel >= LogLevelInfo){
        std::cout << "[Info] " << meassage << std::endl;
        }
    }
};