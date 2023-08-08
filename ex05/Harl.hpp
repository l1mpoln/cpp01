/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harlp.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:36:00 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/08/08 20:15:56 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        void complain(std::string level);
        Harl();
        ~Harl();
};

typedef void (Harl::*t_fun) (void);

#endif