/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 02:03:27 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/08/01 02:05:49 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    std::string str = "HI THIS IS BRAIN"; // строковая переменная
    std::string* stringPTR = &str;       // указатель на строковую переменную
    std::string& stringREF = str;        // ссылка на строковую переменную

    // Вывод адресов переменных
    std::cout << "Адрес переменной str: " << &str << std::endl;
    std::cout << "Адрес, хранящийся в stringPTR: " << stringPTR << std::endl;
    std::cout << "Адрес, хранящийся в stringREF: " << &stringREF << std::endl;

    // Вывод значений переменных
    std::cout << "Значение переменной str: " << str << std::endl;
    std::cout << "Значение, на которое указывает stringPTR: " << *stringPTR << std::endl;
    std::cout << "Значение, на которое указывает stringREF: " << stringREF << std::endl;

    return 0;
}
