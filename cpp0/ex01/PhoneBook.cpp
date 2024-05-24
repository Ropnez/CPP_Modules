#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
    index = 0;
}

Contact* PhoneBook::getContacts()
{
    return contact;
}