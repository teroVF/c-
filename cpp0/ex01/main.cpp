#include "phonebook.hpp"
#include "contact.hpp"

using namespace std;

int main(void)
{
    string command = "";
    while(command != "EXIT")
    {
        cout << "Enter a command: ";
        cin >> command;
        if (command == "ADD")
            ADD();
        else if (command == "SEARCH")
            SEARCH();
        else
            cout << "Invalid command" << endl;
    }
}