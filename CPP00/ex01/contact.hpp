#ifndef CONTACT_HPP 
#define CONTACT_HPP

#include <string>
#include <cstdlib>
#include "phonebook.hpp"

class Contact {
    private:
            std::string first_name;
            std::string last_name;
            std::string nick_name;
            std::string phone_num;
            std::string secret_name;
    public:
            void set_first_name();
            void set_last_name();
            void set_nick_name();
            void set_phone_num();
            void set_secret_name();

            std::string get_first_name() const;
            std::string get_last_name() const;
            std::string get_nick_name() const;
            std::string get_phone_num() const;
            std::string get_secret_name() const;
};


#endif