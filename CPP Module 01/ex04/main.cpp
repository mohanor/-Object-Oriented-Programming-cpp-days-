/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 02:17:35 by matef             #+#    #+#             */
/*   Updated: 2022/10/30 09:48:14 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

using namespace std;

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "argument not valid" << std::endl;
        return 1;
    }
    string line;
    string content, sub = "", rep = "";
    std::string file_name = av[1];
    string toReplace = av[2];
    string replacestr = av[3];
    ifstream file;
    fstream replace;
    
    if (toReplace.empty())
    {
        std::cout << "to replace string should not be empty" << std::endl;
        return 1;
    }
    
    file.open(av[1], fstream::in);
    size_t pos;
    if (file.is_open())
        replace.open(file_name + ".replace", fstream::out | fstream::trunc);
    else
    {
        std::cout << "cannot open file" << std::endl;
        return (0);
    }
    while (file.is_open() && !file.eof())
    {
        getline(file, line);
        content += line + "\n";
    }
    if (file.is_open())
    {
        content = content.substr(0, content.length() - 1);
        file.close();
        pos = 0;
        while (pos < content.length())
        {
            pos = content.find(toReplace);
            if (pos < content.length())
            {
                sub = content.substr(0, pos);
                content = content.substr(sub.length() + toReplace.length(), -1);
                sub += replacestr;
                rep += sub;
            }
            pos = content.find(toReplace);
        }
        if (content.length())
            rep += content;
       replace << rep;
    }
    return 0;
}