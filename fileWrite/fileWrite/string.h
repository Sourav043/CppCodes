#pragma once
#include<fstream>
class String {
protected:     // private
    char* m_Data;
    int m_Size;
public:

    String();
    String(const char* string);
    String(const String& other);
    const char* getString();

    //const char* toString();
    virtual const char* display() const;
    String operator+(const String& other) const;
    friend std::istream& operator>>(std::istream& is, String& str) {
        char buffer[1024];
        is >> buffer; // Read input into a temporary buffer
        str = String(buffer); // Assign the content of the buffer to the String object
        return is;
    }
    ~String();
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



/*
#include <cstring>
#include <string>
class String {
protected:
    char* m_Data;
    int m_Size;
public:
    String(const char* string);
    String(const String& other);
    const char* getString();
    virtual const char* display() const;
    virtual ~String();
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
};*/