/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:33:41 by anvieira          #+#    #+#             */
/*   Updated: 2023/08/28 16:15:54 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
# define REPLACE_H
# include <string>
# include <iostream>
# include <fstream>

class Replace
{
typedef std::string string;
typedef std::ifstream ifstream;
typedef std::ofstream ofstream;

private:
    string filename;
    string s1;
    string s2;
    string content;
public:
    Replace( string filename, string s1, string s2 );
    ~Replace();
    bool get_content( void );
    void replace( void );
    void write_file( void );
};


#endif /* REPLACE_H */
