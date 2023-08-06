/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:45:11 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/08/03 18:45:17 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"
#include <string>

class HumanB {
private:
    std::string name;
    Weapon* weapon;

public:
    HumanB(std::string name);
    void setWeapon(Weapon& newWeapon);
    void attack() const;
};

#endif // HUMANB_H
