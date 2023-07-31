/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 03:43:39 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/07/31 04:29:30 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
    private:
        std::string _name;
    
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif