#pragma once
#include<chrono>
#include<iostream>
#include<fstream>
extern std::ofstream out;
class Timer
{
public:
    Timer()
    {
        m_startTimePoint = std::chrono::high_resolution_clock::now();
    }
    void stop()
    {
        auto  endPoint = std::chrono::high_resolution_clock::now();
        auto start = std::chrono::time_point_cast<std::chrono::microseconds>(m_startTimePoint).time_since_epoch().count();
        auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endPoint).time_since_epoch().count();
        auto duration = end - start;
        double ms = duration * 0.001;
        std::cout << duration << " Microsecond (" << ms << "ms)\n";
        //out << duration << " Microsecond (" << ms << "ms)\n";
    }
    ~Timer()
    {
        stop();
    }
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> m_startTimePoint;
};