#include "Contact.hpp"
#include <iostream>

void Contact::setName(std::string newName)
{
    while (newName.empty())
    {
        std::cout << "Enter Name: ";
        std::getline(std::cin, newName);
    }
    if (newName.length() > 10)
    {
        name = newName.substr(0, 9) + ".";
    }
    else
    {
        name = newName;
    }
}
void Contact::setSurname(std::string newSurname)
{
    while (newSurname.empty())
    {
        std::cout << "Enter Surname: ";
        std::getline(std::cin, newSurname);
    }
    if (newSurname.length() > 10)
    {
        surname = newSurname.substr(0, 9) + ".";
    }
    else
    {
        surname = newSurname;
    }
}
void Contact::setNickname(std::string newNickname)
{
    while (newNickname.empty())
    {
        std::cout << "Enter Nickname: ";
        std::getline(std::cin, newNickname);
    }
    if (newNickname.length() > 10)
    {
        nickname = newNickname.substr(0, 9) + ".";
    }
    else
    {
        nickname = newNickname;
    }
}
void Contact::setPhone(std::string newPhone)
{
    while (newPhone.empty())
    {
        std::cout << "Enter Phone: ";
        std::getline(std::cin, newPhone);
    }
    if (newPhone.length() > 10)
    {
        phone = newPhone.substr(0, 9) + ".";
    }
    else
    {
        phone = newPhone;
    }
}
void Contact::setDarkestSecret(std::string newDarkestSecret)
{
    while (newDarkestSecret.empty())
    {
        std::cout << "Enter Darkest Secret: ";
        std::getline(std::cin, newDarkestSecret);
    }
    if (newDarkestSecret.length() > 10)
    {
        darkestSecret = newDarkestSecret.substr(0, 9) + ".";
    }
    else
    {
        darkestSecret = newDarkestSecret;
    }
}
std::string Contact::getName()
{
    return name;
}
std::string Contact::getSurname()
{
    return surname;
}
std::string Contact::getNickname()
{
    return nickname;
}
std::string Contact::getPhone()
{
    return phone;
}
std::string Contact::getDarkestSecret()
{
    return darkestSecret;
}