#include<iostream>
#include<cstring>
#include "string.h"


String::String(): m_Data(nullptr), m_Size(0) {}

String::String(const char* string) {
    m_Size = strlen(string);
    m_Data = new char[m_Size + 1];
    //strcpy(m_Data, string);
    memcpy(m_Data, string, m_Size);
    m_Data[m_Size] = 0;
}

String::String(const String& other) {
    m_Size = other.m_Size;
    m_Data = new char[m_Size + 1];
    memcpy(m_Data, other.m_Data, m_Size);
    m_Data[m_Size] = 0;
}
String::~String() {
    delete m_Data;
};
const char* String::getString() {
    return m_Data;
}
const char* String::display() const {
    return m_Data;
}

String String::operator+(const String& str) const {
    int newSize = m_Size + str.m_Size;
    char* newData = new char[newSize + 1];
    memcpy(newData, m_Data, m_Size);
    memcpy(newData + m_Size, str.m_Data, newSize);
    newData[newSize] = '\0';
    String s{ newData };
    return s;
}
String String::operator>>(const char* string) {
    m_Size = strlen(string);
    m_Data = new char[m_Size + 1];
    //strcpy(m_Data, string);
    memcpy(m_Data, string, m_Size);
    m_Data[m_Size] = 0;
    return m_Data;
}
/*
String std::istream& String::operator>>(const char* string) {
    m_Size = strlen(string);
    m_Data = new char[m_Size + 1];
    //strcpy(m_Data, string);
    memcpy(m_Data, string, m_Size);
    m_Data[m_Size] = 0;
    return m_Data;
}*/
/*
String String:: operator+(const String& other) const {
    int newSize = m_Size + other.m_Size;
    char* newData = new char[newSize + 1];

    memcpy(newData, m_Data, m_Size);
    memcpy(newData + m_Size, other.m_Data, other.m_Size);
    newData[newSize] = '\0';
    String result(newData);
    delete[] newData;

    return result;
}*/



StringFirst::StringFirst(const char* value) : String(value) {}

const char* StringFirst::display() const {
    const char* prefix = "First: ";
    int prefixLength = strlen(prefix);
    int valueLength = strlen(m_Data);
    char* result = new char[prefixLength + valueLength + 1]; // "First: " + actual value + null terminator

    memcpy(result, prefix, prefixLength + 1);
    memcpy(result + prefixLength, m_Data, static_cast<size_t>(valueLength) + 1); // +1 to copy null terminator

    return result;
}

StringLast::StringLast(const char* value) : String(value) {}

const char* StringLast::display() const {
    const char* prefix = "Last: ";
    int prefixLength = strlen(prefix);
    int valueLength = strlen(m_Data);
    char* result = new char[prefixLength + valueLength + 1]; // "Last: " + actual value + null terminator

    memcpy(result, prefix, prefixLength + 1);
    memcpy(result + prefixLength, m_Data, static_cast<size_t>(valueLength) + 1); // +1 to copy null terminator

    return result;
}

/*
*
* #include <ctime>
#include <sstream>
#include <iomanip>
#include<time.h>
const char*  String::toString(){
    struct tm timeStruct;
    localtime_s(&timeStruct, &Date::timestamp);

    String formattedDate("YYYY-MM-DD"); // Create a String object

    char buffer[11]; // Enough space for "YYYY-MM-DD\0"
    strftime(buffer, sizeof(buffer), "%Y-%m-%d", &timeStruct);

    // Assign the formatted C-string to the String object
    formattedDate = buffer;

    return formattedDate; // Return the String object
}*/
