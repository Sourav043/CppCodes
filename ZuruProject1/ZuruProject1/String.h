#pragma once
#include<iostream>
#include<fstream>
extern std::ofstream out;
class String {
protected:
    int m_Size;
    char* m_Data;
public:
    
    String();
    String(const char* string);
    String(const String& other);
    const char* getString();
    virtual const char* display() const;
    String operator+ (const String& str) const;
    friend std::istream& operator>>(std::istream& isTream, String& str) {
        char input[1024];
        isTream >> input; 
        str = String(input); 
        return isTream;
    }
    
};

class StringFirst : public String {
public:
    StringFirst(const char* value);
    const char* display() const override;
};

class StringLast : public String {
public:
    StringLast(const char* value);
    const char* display() const override;
};

