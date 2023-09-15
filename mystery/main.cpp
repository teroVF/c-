#include <iostream>
#include <fstream>
#include <string>



std::string print_message(std::string input, int n)
{
    std::string result = input; // Crie uma cópia da string de entrada para evitar modificá-la diretamente.

    for (int i = 0; i < result.length(); i++)
    {
        if (result[i] >= 'a' && result[i] <= 'z')
        {
            result[i] = 'a' + (result[i] - 'a' + n) % 26; // Use o módulo 26 para garantir que o resultado esteja dentro do alfabeto.
        }
        else if (result[i] >= 'A' && result[i] <= 'Z')
        {
            result[i] = 'A' + (result[i] - 'A' + n) % 26; // Use o módulo 26 para garantir que o resultado esteja dentro do alfabeto.
        }
    }

    return result;
}



int main(int argc, char *argv[])
{
    if (argc > 2)
    {
        //argv[2] its a number
        //read first line of file ola.txt
        int n = std::stoi(argv[2]);
        std::string line;
        std::ifstream myfile;
        myfile.open(argv[1]);
        if (myfile.is_open())
        {
            while (getline(myfile, line))
            {
                    std::cout << print_message(line, n) << std::endl;
            }
            myfile.close();
        }
        else
            std::cout << "Unable to open file";
    }
    else
        std::cout << "ERRO" << std::endl;
}   