#include <iostream>
#include "PhoneBook.hpp"
#include <iomanip>

int main() {
    PhoneBook pb;
    std::string input;
    int i = 0;
    while (1)
    {            
            std::getline(std::cin, input);
            if (input == "ADD")
            {
                std::cout << "Enter Name: ";
                std::getline(std::cin, input);
                pb.getContacts()[i].setName(input);
                std::cout << "Enter Surname: ";
                std::getline(std::cin, input);
                pb.getContacts()[i].setSurname(input);
                std::cout << "Enter Nickname: ";
                std::getline(std::cin, input);
                pb.getContacts()[i].setNickname(input);
                std::cout << "Enter Phone: ";
                std::getline(std::cin, input);
                pb.getContacts()[i].setPhone(input);
                std::cout << "Enter Darkest Secret: ";
                std::getline(std::cin, input);
                pb.getContacts()[i].setDarkestSecret(input);
                std::cout << "Contact added" << std::endl;
                i++;
                if (i > 7)
                    i = 0;
            }
            else if (input == "SEARCH")
            {
                std::cout << std::setw(10) << "Index" << "|";
                std::cout << std::setw(10) << "Name" << "|";
                std::cout << std::setw(10) << "Surname" << "|";
                std::cout << std::setw(10) << "Nickname" << std::endl;
                for (int j = 0; j < 8; j++)
                {
                    std::cout << std::setw(10) << j << "|";
                    std::cout << std::setw(10) << pb.getContacts()[j].getName() << "|";
                    std::cout << std::setw(10) << pb.getContacts()[j].getSurname() << "|";
                    std::cout << std::setw(10) << pb.getContacts()[j].getNickname() << std::endl;
                }
                std::cout << "Enter Index: ";
                std::getline(std::cin, input);
                if (input[0] >= '0' && input[0] <= '7')
                {
                    int index = input[0] - '0';
                    std::cout << "Name: " << pb.getContacts()[index].getName() << std::endl;
                    std::cout << "Surname: " << pb.getContacts()[index].getSurname() << std::endl;
                    std::cout << "Nickname: " << pb.getContacts()[index].getNickname() << std::endl;
                    std::cout << "Phone: " << pb.getContacts()[index].getPhone() << std::endl;
                    std::cout << "Darkest Secret: " << pb.getContacts()[index].getDarkestSecret() << std::endl;
                }
                else
                    std::cout << "Invalid index" << std::endl;
            }
            else if (input == "EXIT")
                break;
    }
    return 0;
}