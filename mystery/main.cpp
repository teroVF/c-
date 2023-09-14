#include <iostream>
#include <fstream>
#include <string>

std::string print_message(std::string string)
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'm')
        {
            string[i] = string[i] + 13;
        }
        else if (string[i] >= 'n' && string[i] <= 'z')
        {
            string[i] = string[i] - 13;
        }
        else if (string[i] >= 'A' && string[i] <= 'M')
        {
            string[i] = string[i] + 13;
        }
        else if (string[i] >= 'N' && string[i] <= 'Z')
        {
            string[i] = string[i] - 13;
        }
    }
    return string;
}


int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        //read first line of file ola.txt
        std::string line;
        std::ifstream myfile;
        myfile.open(argv[1]);
        if (myfile.is_open())
        {
            while (getline(myfile, line))
            {
                    std::cout << print_message(line) << std::endl;
            }
            myfile.close();
        }
        else
            std::cout << "Unable to open file";
    }
    else
        std::cout << "ERRO" << std::endl;
}   