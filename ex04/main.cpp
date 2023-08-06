/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:56:28 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/08/06 17:24:28 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>

#include <iostream>
#include <iomanip>
#include <fstream>

void ft_replace(std::string &line, const std::string &to_r, const std::string &r_w)
{
    size_t start_pos = 0;

    while ((start_pos = line.find(to_r, start_pos)) != std::string::npos)
    {
        line.replace(start_pos, to_r.length(), r_w);
        start_pos += r_w.length(); // Чтобы избежать зацикливания при замене подстроки на другую, которая содержит исходную.
    }
}

int main(int argc, char **argv)
{
    if (argc != 4 || !argv[2][0] || !argv[3][0])
    {
        std::cout << "Program arguments error" << '\n';
        return -1;
    }

    std::ifstream ifs(argv[1]);
    if (!ifs.is_open())
    {
        std::cout << "Couldn't open the input file" << '\n';
        return -1;
    }

    std::string file_name = std::string(argv[1]) + ".replace";
    std::ofstream ofs(file_name.c_str());
    if (!ofs.is_open())
    {
        std::cout << "Couldn't open the output file" << '\n';
        return -1;
    }

    std::string line_read;
    std::string to_replace = argv[2];
    std::string replace_with = argv[3];

    while (getline(ifs, line_read))
    {
        ft_replace(line_read, to_replace, replace_with);
        ofs << line_read << '\n';
    }

    // Не обязательно закрывать файлы вручную, так как это произойдет автоматически при выходе из функции.

    return 0;
}
