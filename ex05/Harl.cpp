#include "Harl.hpp"
#include <iostream>
#include <string>
#include <map>

void Harl::debug(void)
{
    std::cout << "debug: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "info: I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "warning: I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "error: This is unacceptable! I want to speak to the manager now." << std::endl;
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
    std::map<std::string, HARL_FUNC> functions;
    functions.insert(std::pair<std::string, HARL_FUNC>("DEBUG", &Harl::debug));
    functions.insert(std::pair<std::string, HARL_FUNC>("INFO", &Harl::info));
    functions.insert(std::pair<std::string, HARL_FUNC>("WARNING", &Harl::warning));
    functions.insert(std::pair<std::string, HARL_FUNC>("ERROR", &Harl::error));
    if (functions.find(level) == functions.end()) {
        return;
    }
    HARL_FUNC func = functions[level];
    (this->*func)();
}
