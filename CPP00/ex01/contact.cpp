#include "phonebook.hpp"

void    Contact::set_first_name() {
    std::string first_name;
    std::cout << "first_name = ";
    getline(std::cin, first_name);
    this->first_name = check_first_name(first_name);
}

void    Contact::set_last_name() {
    std::string last_name;
    std::cout << "last_name = ";
    getline(std::cin, last_name);
    this->last_name = check_last_name(last_name);
}

void    Contact::set_nick_name() {
    std::string nick_name;
    std::cout << "nick_name = ";
    getline(std::cin, nick_name);
    this->nick_name = check_nick_name(nick_name);
}

void    Contact::set_phone_num() {
    std::string phone_num;
    std::cout << "phone_num = ";
    getline(std::cin, phone_num);
    this->phone_num = check_phone_num(phone_num);
}

void    Contact::set_secret_name() {
    std::string secret_name;
    std::cout << "secret_name = ";
    getline(std::cin, secret_name);
    this->secret_name =  check_secret_name(secret_name);
}



std::string Contact::get_first_name() const {
    return (this->first_name);
}

std::string Contact::get_last_name() const {
    return (this->last_name);
}

std::string Contact::get_nick_name() const {
    return (this->nick_name);
}

std::string Contact::get_phone_num() const {
    return (this->phone_num);
}

std::string Contact::get_secret_name() const {
    return (this->secret_name);
}


