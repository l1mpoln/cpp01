/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:10:10 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/07/31 20:18:15 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombie1;
    Zombie *zombie2 = zombie1.zombieHord(5, "Brian");
    zombie1.announce();
    for (int i = 0; i < 5; i++)
        zombie2[i].announce();

    delete[] zombie2;
}