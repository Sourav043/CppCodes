#include<iostream>
#include <cstring>
class String {
private:
    char* m_Data;
    int m_Size;
public:

    String() {};

    String(const char* string) {
        std::cout << "Created!!" << std::endl;
        m_Size = strlen(string);
        m_Data = new char[m_Size + 1];
        memcpy(m_Data, string, m_Size);
        m_Data[m_Size] = 0;
    }

    String(const String& other) {
        std::cout << "Copied!!" << std::endl;
        m_Size = other.m_Size;
        m_Data = new char[m_Size + 1];
        memcpy(m_Data, other.m_Data, m_Size);
        m_Data[m_Size] = 0;
    }

    String(String&& other)  {
        std::cout << "Moved!!" << std::endl;
        m_Size = other.m_Size;
        m_Data = other.m_Data;
        // This is very important here
        other.m_Size = 0;
        other.m_Data = nullptr;
    }

    void Print() {
        for (int i = 0; i < strlen(m_Data); ++i)
            std::cout << m_Data[i];
    }

    ~String() {
        std::cout << "Destroyed!!" << std::endl;
        delete m_Data;
    }

};
class Entity {
private:
    String m_Name;
public:
    Entity(String& name) : m_Name(name) {}
    //Entity(String& name) {
      //  m_Name = name;  // why error
    //}
    Entity(String&& name) :m_Name((String&&)name){}
    // Entity(String&& name) :m_Name(std::move(name))
    //Entity(String&& name) : m_Name(name) {}
    void PrintName() { m_Name.Print(); std::cout << std::endl; }
};
int main() {
    Entity player(String("Joy Boro Maa"));
    player.PrintName();
    std::cin.get();
}