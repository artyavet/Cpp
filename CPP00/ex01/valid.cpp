#include "phonebook.hpp"

int only_letters(std::string str) {
    for (unsigned i = 0; i < str.length(); i++) {
        if(!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
            return (-1);
    }
    return (1);
}

int only_digit(std::string num) {
    for (unsigned i = 0; i < num.length(); i++) {
        if (!(num[i] >= '0' && num[i] <= '9'))
            return (-1);
    }
    return (1);
}

int only_spaces(std::string str) {
    for (unsigned i = 0; i < str.length(); i++) {
        if (str[i] != ' ')
            return (-1);
    }
    return (1);
}


std::string check_last_name(std::string last_name) {
    while ((only_spaces(last_name) == 1) || only_letters(last_name) == -1)
    {
        if (std::cin.eof())
            exit(1);
        std::cout << "Incorrect input. Enter last_name: ";
        std::getline(std::cin, last_name);
    }
    return (last_name);
}


std::string	check_first_name(std::string first_name)
{
	while (only_spaces(first_name) == 1 || only_letters(first_name) == -1)
	{
		if (std::cin.eof())
			exit(1);
		std::cout << "Incorrect input. Enter first_name: ";
    	getline(std::cin, first_name);
	}
	return (first_name);
}


std::string	check_nick_name(std::string nick_name)
{
	while (only_spaces(nick_name) == 1 || only_letters(nick_name) == -1)
	{
		if (std::cin.eof())
			exit(1);
		std::cout << "Incorrect input. Enter nick_name: ";
    	getline(std::cin, nick_name);
	}
	return (nick_name);
}


std::string	check_secret_name(std::string secret_name)
{
	while (only_spaces(secret_name) == 1 || only_letters(secret_name) == -1)
	{
		if (std::cin.eof())
			exit(1);
		std::cout << "Incorrect input. Enter secret_name: ";
    	getline(std::cin, secret_name);
	}
	return (secret_name);
}


std::string	check_phone_num(std::string phone_num)
{
	while (only_spaces(phone_num) == 1 || only_digit(phone_num) == -1)
	{
		if (std::cin.eof())
			exit(1);
		std::cout << "Incorrect input. Enter phone_num: ";
    	getline(std::cin, phone_num);
	}
	return (phone_num);
}
