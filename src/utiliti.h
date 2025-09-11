#pragma once

#include<iostream>
#include<string>

inline void Log(const std::string& message)
{
    std::cout << "[LOG]"<< message << std::endl;
}

inline void Error(const std::string& error)
{
    std::cout << "[Error]" << error << std::endl;
}