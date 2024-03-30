#include<iostream>
#include<cstring>
#include "String.h"
#include "Date.h"

String::String() {
    m_Size = 0;
    m_Data = nullptr;
}

String::String(const char* string) {
    m_Size = strlen(string);
    m_Data = new char[m_Size + 1];
    memcpy(m_Data, string, m_Size);
    m_Data[m_Size] = 0;
}

String::String(const String& other) {
    m_Size = other.m_Size;
    m_Data = new char[m_Size + 1];
    memcpy(m_Data, other.m_Data, m_Size);
    m_Data[m_Size] = 0;
}

const char* String::getString() {
    return m_Data;
}

const char* String::display() const {
    return m_Data;
}

String String::operator+(const String& string) const {
    int newSize = m_Size + string.m_Size;
    char* new_Data = new char[newSize + 1];
    memcpy(new_Data, m_Data, m_Size);
    memcpy(new_Data + m_Size, string.m_Data, string.m_Size);
    new_Data[newSize] = '\0';
    String obj(new_Data);
    delete[] new_Data;
    return obj;
}

StringFirst::StringFirst(const char* value) : String(value) {}

const char* StringFirst::display() const {
    const char* prefix = "First: ";
    int prefixLength = strlen(prefix);
    int valueLength = strlen(m_Data);
    char* result = new char[prefixLength + valueLength + 1]; 

    memcpy(result, prefix, prefixLength);
    memcpy(result + prefixLength, m_Data, static_cast<size_t>(valueLength) + 1); 

    return result;
}

StringLast::StringLast(const char* value) : String(value) {}

const char* StringLast::display() const {
    const char* prefix = "Last: ";
    int prefixLength = strlen(prefix);
    int valueLength = strlen(m_Data);
    char* result = new char[prefixLength + valueLength + 1]; 
    memcpy(result, prefix, prefixLength);
    memcpy(result + prefixLength, m_Data, static_cast<size_t>(valueLength) + 1); 

    return result;
}