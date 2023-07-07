class phonebook
{
private:
    char *contacts[8];
    int index = 0;
    
public:
    phonebook(/* args */);
    void set_contact(int index, char *phone);
};


phonebook::set_contact(int index, char *phone)
{
    int i = 1;
    

    if (index > 7)
    {
        while (index > 7)
        {
            this->contacts[i] = this->contacts[index + 1];
        }
        
    }
    this->contacts[index] = phone;
    index++;

}
