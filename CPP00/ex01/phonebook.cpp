#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.hpp"

int check_len_i(std::string i);

Phonebook::Phonebook()
{
    contact_lists = 0;
}

Phonebook::~Phonebook()
{
}

void Phonebook::set_members(int i)
{
    obj[i].set_first_name();
    obj[i].set_last_name();
    obj[i].set_nick_name();
    obj[i].set_phone_num();
    obj[i].set_secret_name();
    if (contact_lists < 2)
       contact_lists++;
}

int len_contact_member(std::string str)
{
    int len = str.length();
    if (len > 10)
    {
        std::cout << str.substr(0, 9) << ".";
    }
    else
    {
        int right_align = 10 - len;
        while (right_align > 0)
        {
            std::cout << " ";
            right_align--;
        }
        std::cout << str;
    }
    std::cout << "|";
    return 1;
}

void Phonebook::get_all_contact()
{
    int j = 0;
    while (j < contact_lists)
    {
        std::cout << "---------------------------------------------" << std::endl;
        std::cout << "|" << std::setw(10) << j << "|";
        len_contact_member(obj[j].get_first_name());
        len_contact_member(obj[j].get_last_name());
        len_contact_member(obj[j].get_nick_name());
        std::cout << std::endl;
        j++;
    }
    if (contact_lists != 0)
    {
        std::string i;
        int ind;
        while (1)
        {
            std::cout << "Please enter contact index -> ";
            std::getline(std::cin, i);
            if (std::cin.eof())
                exit(1);
            if (check_len_i(i) == 1 && i[0] >= '0' && i[0] <= '7')
            {
                ind = i[0] - '0';
                if (ind >= 0 && ind < contact_lists)
                {
                    my_cout(ind);
                    break;
                }
            }
            std::cout << "Invalid index. Please enter an index between 0 and" << contact_lists - 1 << " -> ";
        }
    }
    else
    {
        std::cout << "You don't have any contacts yet." << std::endl;
    }
}

int check_len_i(std::string i)
{
    int len = i.length();
    if (len == 1 && i[0] >= '0' && i[0] <= '7')
        return 1;
    return 0;
}

void Phonebook::my_cout(int ind)
{
    std::cout << "Index: " << ind << std::endl;
    std::cout << "Name: " << obj[ind].get_first_name() << std::endl;
    std::cout << "Last_name: " << obj[ind].get_last_name() << std::endl;
    std::cout << "Nick_name: " << obj[ind].get_nick_name() << std::endl;
    std::cout << "Phone_num: " << obj[ind].get_phone_num() << std::endl;
    std::cout << "secret_name : " << obj[ind].get_secret_name() << std::endl;
}
