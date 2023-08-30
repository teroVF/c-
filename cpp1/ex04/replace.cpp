/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:37:45 by anvieira          #+#    #+#             */
/*   Updated: 2023/08/29 23:48:24 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace( string filename, string s1, string s2 )
: filename(filename), s1(s1), s2(s2)
{
    get_content();
}

Replace::~Replace() {}

bool Replace::get_content( void )
{
    ifstream file;
    string line;

    file.open(this->filename.c_str());
    if (file.is_open())
    {
        while (std::getline(file, line))
        {
            this->content += line;
            this->content += '\n';
        }
        return true;
    }
    else
    {
        std::cout << "Error opening file" << std::endl;
        return false;
    }
}

void Replace::replace( void )
{
    size_t pos;

    pos = this->content.find(this->s1);

    if (pos != std::string::npos)
    {
        while (pos != std::string::npos)
        {
            this->content.erase(pos, this->s1.length());
            this->content.insert(pos, this->s2);
            pos = this->content.find(this->s1, pos + this->s2.length());
        }
    }
    else
        std::cout << "String: " << this->s1 << " not found" << std::endl;
}

void Replace::write_file ( void )
{
    ofstream file;
    string filename_new = this->filename + ".replace";

    file.open(filename_new.c_str());
    if (file.is_open())
    {
        file << this->content;
        file.close();
    }
    else
        std::cout << "Error opening file" << std::endl;
}
