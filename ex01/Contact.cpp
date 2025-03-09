#include "Contact.hpp"

void    Contact::setName(std::string name)
{
	_name = name;
}

void    Contact::setSurName(std::string surname)
{
	_surname = surname;
}

void    Contact::setNickName(std::string nickname)
{
	_nickname = nickname;
}

void    Contact::setPhoneNumber(std::string phoneNumber)
{
	_phoneNumber = phoneNumber;
}

void    Contact::setDarkestSecret(std::string darkestSecret)
{
	_darkestSecret = darkestSecret;
}

std::string Contact::getName()
{
	return (_name);
}

std::string Contact::getSurName()
{
	return (_surname);
}

std::string Contact::getNickName()
{
	return (_nickname);
}

std::string Contact::getPhoneNumber()
{
	return (_phoneNumber);
}

std::string Contact::getDarkestSecret()
{
	return (_darkestSecret);
}