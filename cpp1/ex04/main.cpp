/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 02:53:38 by anvieira          #+#    #+#             */
/*   Updated: 2023/08/29 23:48:14 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main (int argc, char **argv)
{
    if (argc == 4)
    {
        Replace new_file (argv[1], argv[2], argv[3]);
        new_file.replace();
        new_file.write_file();
    }
    else
        std::cout << "Invalid number of arguments" << std::endl;
    return 0;
}
