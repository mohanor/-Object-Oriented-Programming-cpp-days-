/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:09:07 by matef             #+#    #+#             */
/*   Updated: 2022/11/12 16:30:36 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <iomanip>
#include <ios>

int check_double(std::string arg)
{
    int point = 0;
    for(size_t i = 0; i < arg.length() - 1; i++)
    {
        if (arg[i] == '.')
            point++;
        if (!std::isdigit(arg[i]) && arg[i] != '.')
            return 0;
        if (!std::isdigit(arg[i]) && arg[i] == '.' && point != 1)
            return 0;
    }
    return 1;
}

int check_int(std::string arg)
{
    for(size_t i = 0; i < arg.length(); i++)
    {
        if (!std::isdigit(arg[i]))
            return 0;
    }
    return 1;
}

std::string get_type(std::string str)
{
    int _double = 0;
    std::string arg;
    if ((str[0] == '-' || str[0] == '+') && (str[1]>='0' && str[1]<='9'))
        arg = &str[1];
    else
        arg = str;
    if (arg.length() == 1)
    {
        if (std::isdigit(arg[0]))
            return "int";
        return "char";
    }
    else if (check_int(arg))
        return "int";
    else
    {
        _double = check_double(arg);
        if (_double)
        {
            if (arg[arg.length() - 1] == 'f' || arg[arg.length() - 1] == 'F')
			{
				if (strchr(arg.c_str(), '.'))
                	return "float";
				return "string";
			}
            else if (std::isdigit(arg[arg.length() - 1]))
                return "double";
        }
        return "string";
    }
}

void    handle_char(std::string arg)
{
    if (arg.length() == 1)
    {
        if (get_type(arg) == "int")
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << arg << "'" << std::endl;
    }
    else
    {
        if (get_type(arg) == "string")
            std::cout << "char: impossible" << std::endl;
        else
        {
            double nbr = strtod(arg.c_str(), NULL);
            if (nbr <= 31 || nbr >= 127)
                std::cout << "char: Non displayable" << std::endl;
            else
                std::cout << "char: '" << static_cast<char>(nbr) << "'" << std::endl;
        }
    }
}

void    handle_int(std::string arg)
{
    std::string type = get_type(arg);

    if (type == "int" || type == "float" || type == "double")
    {
        double d = strtod(arg.c_str(), NULL);
        if (d > INT_MAX || d < INT_MIN)
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(d) << std::endl;
    }
    else
    {
        if (type == "char")
            std::cout << "int: " << static_cast<int>(arg[0]) << std::endl;
        else
            std::cout << "int: impossible" << std::endl;
    }
}

void handle_float(std::string arg)
{
    std::string type = get_type(arg);

    if (type == "float" || type == "int")
    {
        float f = strtof(arg.c_str(), NULL);
        std::cout << std::fixed << std::setprecision(1) << "float: " << f  << "f";
        std::cout << std::endl;
    }
    else if (type == "double")
    {
        float d = static_cast<float>(strtod(arg.c_str(), NULL));
        std::cout << "float: " << d << "f" << std::endl;
    }
    else
    {
        if (type == "char")
            std::cout << "float: " << static_cast<int>(arg[0]) << ".0f" << std::endl;
        else
            std::cout << "float: impossible" << std::endl;
    }
}

void handle_double(std::string arg)
{
    std::string type = get_type(arg);

    if (type == "float" || type == "double" || type == "int")
    {
        double d = strtod(arg.c_str(), NULL);
        std::cout << "double: " << d << std::endl;
    }
    else
    {
        if (type == "char")
            std::cout << "double: " << static_cast<int>(arg[0]) << ".0" << std::endl;
        else
            std::cout << "double: impossible" << std::endl;
    }
}

int check_nan_inf(std::string arg)
{
	return (arg == "nan" || arg == "nanf" || arg == "inff" || arg == "inf");
}

int check_plus_inf(std::string arg)
{
	return (arg == "+inff" || arg == "+inf");
}

int check_minus_inf(std::string arg)
{
	return (arg == "-inff" || arg == "-inf");
}

int pseudo(std::string arg)
{
	if (check_nan_inf(arg) || check_plus_inf(arg) || check_minus_inf(arg))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << strtof(arg.c_str(), NULL) << "f" << std::endl;
		std::cout << "double: " << strtod(arg.c_str(), NULL) << std::endl;
		return 1;
	}
	return 0;
}

void handle_scalar(std::string arg)
{
	if (!pseudo(arg))
	{
		handle_char(arg);
		handle_int(arg);
		handle_float(arg);
		handle_double(arg);
	}
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        std::string arg = av[1];
        handle_scalar(arg);
    }
    else
        std::cout << "invalid argument" << std::endl;
    return 0;
}