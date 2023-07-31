/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 03:43:02 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/07/31 05:47:29 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie = newZombie("Stupid");
    randomChump("Clever");
    delete zombie;
    randomChump("Clever");
    return (0);
}