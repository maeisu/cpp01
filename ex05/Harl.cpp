#include "Harl.hpp"
#include <iostream>
#include <string>
#include <map>

void Harl::debug(void)
{
    std::cout << "debug" << std::endl;
}

void Harl::info(void)
{
    std::cout << "info" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "warning" << std::endl;
}

void Harl::error(void)
{
    std::cout << "error" << std::endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::complain(std::string level)
{
    typedef void (Harl::*HARL_FUNC)(void);
    std::map<std::string, HARL_FUNC> functions = {
            {"DEBUG", &Harl::debug},
            {"INFO", &Harl::info},
            {"WARNING", &Harl::warning},
            {"ERROR", &Harl::error}
        };
    if (functions.find(level) != functions.end()) {
        return;
    }
    HARL_FUNC func = functions[level];
    (this->*func)();
}
