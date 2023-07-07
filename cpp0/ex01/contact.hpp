#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

using namespace std;

class Contact
{
    private:
        string first_name;
        string last_name;
        string nickname;
        string phone_number;
    public:
        void contact(string first_name, string last_name, string nickname, string phone_number);
        void set_first_name(string first_name);
        void set_last_name(string last_name);
        void set_nickname(string nickname);
        void set_phone_number(string phone_number);

};

contact::contact(string first_name, string last_name, string nickname, string phone_number)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
}

void contact::set_first_name(string first_name)
{
    this->first_name = first_name;
}
void contact::set_last_name(string last_name)
{
    this->last_name = last_name;
}
void contact::set_nickname(string nickname)
{
    this->nickname = nickname;
}
void contact::set_phone_number(string phone_number)
{
    int i = 0;
    while (i < phone_number.length())
    {
        if (isdigit(phone_number[i]) == false)
        {
            cout << "Invalid phone number" << endl;
            return ;
        }
        i++;
    }
    if (phone_number.length() < 9)
    {
        cout << "Invalid phone number" << endl;
        return ;
    }
    this->phone_number = phone_number;

}
#endif