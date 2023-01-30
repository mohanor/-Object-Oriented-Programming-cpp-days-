
#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n" << std::endl;
}

void Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl; 
}

void Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n" << std::endl; 
}

void Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl; 
}

void Harl::complain( std::string level )
{
    std::string massages[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int check = 1;

    typedef void (Harl::*funcs)();
    funcs fun[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (int i = 0; i < 4; i++)
    {
        if (massages[i] == level)
        {
            check = 0;
            switch (i)
            {
                case 0:
                    (this->*fun[0])();
                case 1:
                    (this->*fun[1])();
                case 2:
                    (this->*fun[2])();
                case 3:
                    (this->*fun[3])();
            }
        }
    }

    if (check)
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
