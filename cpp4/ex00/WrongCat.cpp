/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:16:30 by buryilma          #+#    #+#             */
/*   Updated: 2024/03/10 14:51:59 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor called." << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat default destructor called." << std::endl;
}

WrongCat::WrongCat( const WrongCat& wrongCat ) {
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = wrongCat;
}

WrongCat& WrongCat::operator=( const WrongCat& wrongCat ) {
	std::cout << "WrongCat copy assingment called." << std::endl;
	if (this != &wrongCat)
		this->type = wrongCat.type;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat MEAOW." << std::endl;
}

