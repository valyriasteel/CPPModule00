#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

std::string getinput(std::string prompt);

class PhoneBook
{
	private:
		Contact _contacts[8];
		int		_nbContacts;
		int		oldContactIndex;
	public:
		void		addContact(Contact contact);
		void		searchContact();
		void		displayContact(int index);
		std::string	cuttoten(std::string str);
		PhoneBook();
};
#endif