#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
    _nbContacts = 0;
    oldContactIndex = 0;
}

void    PhoneBook::addContact(Contact contact)
{
    if (_nbContacts < 8)
        _contacts[_nbContacts++] = contact;
    else
        _contacts[oldContactIndex++] = contact;
};

std::string    PhoneBook::cuttoten(std::string str)
{
    if (str.length() > 9)
    {
        str.resize(9);
        str.append(".");
    }
    return (str);
}

void    PhoneBook::searchContact()
{
    std::cout << "|" << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "first name" << "|";
    std::cout << std::setw(10) << "last name" << "|";
    std::cout << std::setw(10) << "nickname" << "|" << std::endl;
    for (int i = 0; i < _nbContacts; ++i)
    {
        
        std::cout << "|" << std::setw(10) << i << "|";
        std::cout << std::setw(10) << cuttoten(_contacts[i].getName()) << "|";
        std::cout << std::setw(10) << cuttoten(_contacts[i].getSurName()) << "|";
        std::cout << std::setw(10) << cuttoten(_contacts[i].getNickName()) << "|" <<std::endl;
    }
    std::string index;
    std::cout << "Enter the index of the contact you want to display: ";
    std::getline(std::cin, index);
    if (index.length() == 1 && index[0] >= '0' && index[0] <= '7')
        displayContact(index[0] - '0');
    else
        std::cout << "Invalid index." << std::endl;
};

void PhoneBook::displayContact(int index)
{
    std::string name = _contacts[index].getName();
    std::string surname = _contacts[index].getSurName();
    std::string nickname = _contacts[index].getNickName();
    std::string secret = _contacts[index].getDarkestSecret();
    std::string phonenumber = _contacts[index].getPhoneNumber();
    std::cout << "First Name: " << name << std::endl;
    std::cout << "Last Name: " << surname << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phonenumber << std::endl;
    std::cout << "Darkest Secret: " << secret << std::endl;
}

static bool isOnlyBlank(std::string str)
{
    for (size_t i = 0; i < str.size(); ++i)
        if (str[i] != ' ' && str[i] != '\t')
            return (false);
    return (true);
}

std::string getinput(std::string prompt)
{
    std::string input;
    while(true)
    {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (input != "" && isOnlyBlank(input) == false)
            return (input);
        else
            std::cout << "Invalid input. Please try again." << std::endl;
    }
}