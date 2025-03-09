#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    PhoneBook phoneBook;
    std::string command;
    
    while (true)
    {
        std::cout << "Enter a command: ";
        std::getline(std::cin, command);
        
        if (command == "ADD")
        {
            Contact newContact;
            newContact.setName(getinput("Enter the name: "));
            newContact.setSurName(getinput("Enter the surname: "));
            newContact.setNickName(getinput("Enter the nickname: "));
            newContact.setPhoneNumber(getinput("Enter the phone number: "));
            newContact.setDarkestSecret(getinput("Enter the darkest secret: "));
            phoneBook.addContact(newContact);
        }
        else if (command == "SEARCH")
            phoneBook.searchContact();
        else if (command == "EXIT")
            break;
        else
            std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
    }
    return (0);
}