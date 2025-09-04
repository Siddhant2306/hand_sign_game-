#pragma once

#include<iostream>
#include<string>

inline void Log(const std::string& message)
{
    std::cout << "[LOG]"<< message << std::endl;
}