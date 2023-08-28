/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 02:53:38 by anvieira          #+#    #+#             */
/*   Updated: 2023/08/28 03:11:28 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include <fstream>

int main (int argc, char **argv)
{
    if (argc == 4)
    {
        std::string filename = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];

    }
    else
        std::cout << "Invalid number of arguments" << std::endl;
    return 0;
}