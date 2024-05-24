#include <iostream>

#pragma once

class Contact
{
private:
    std::string name;
    std::string surname;
    std::string nickname;
    std::string phone;
    std::string darkestSecret;
public:
    void setName(std::string newName);
    void setSurname(std::string newSurname);
    void setNickname(std::string newNickname);
    void setPhone(std::string newPhone);
    void setDarkestSecret(std::string newDarkestSecret);
    std::string getName();
    std::string getSurname();
    std::string getNickname();
    std::string getPhone();
    std::string getDarkestSecret();
};