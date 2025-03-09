#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string _name;
        std::string _surname;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _darkestSecret;
    public:
        void        setName(std::string name);
        void        setSurName(std::string surname);
        void        setNickName(std::string nickname);
        void        setPhoneNumber(std::string phoneNumber);
        void        setDarkestSecret(std::string darkestSecret);
        std::string getName();
        std::string getSurName();
        std::string getNickName();
        std::string getPhoneNumber();
        std::string getDarkestSecret();
};
#endif