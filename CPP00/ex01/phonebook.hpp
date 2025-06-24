#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "contact.hpp"


class   Phonebook {
    private:
            int contact_lists;
            Contact obj[8];

    public:
            Phonebook();
    	    ~Phonebook();
            void    get_all_contact();
            void    set_members(int i);
            void	my_cout(int ind);

};
    
    int			check_only_letter(std::string str);
    int			check_only_digit(std::string str);
    int			len_contact_member(std::string str);
    std::string	check_first_name(std::string first_name);
    std::string	check_last_name(std::string last_name);
    std::string	check_nick_name(std::string nickname);
    std::string	check_phone_num(std::string phone_num);
    std::string	check_secret_name(std::string secret_name);

#endif