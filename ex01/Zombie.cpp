/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:57:28 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/07/31 20:16:57 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    _name = "Alan";
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << _name << " died." << std::endl;
}

void Zombie::announce()
{
    std::cout << this->_name << " " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie *Zombie::zombieHord(int n, std::string name)
{
    Zombie *zombieHord = new Zombie[n];
    for (int i = 0; i < n; i++)
        zombieHord[i]._name = name;
    return (zombieHord);
}