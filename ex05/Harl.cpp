/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:38:52 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/08/08 20:18:05 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level)
{
    std::string commands[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    t_fun funcs[] = {&Harl::debug, &Harl::error, &Harl::info, &Harl::warning};

    for (int i = 0; i < 4; i++)
    {
        if (level == commands[i])
        { 
            (this->*funcs[i])();
            return;
        }
    }
    std::cout << "Your command not in the list" << std::endl;
}

void	Harl::debug()
{
	std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl()
{
    
}

Harl::~Harl()
{
    
}