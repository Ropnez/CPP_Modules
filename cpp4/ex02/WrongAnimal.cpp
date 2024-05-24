/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:16:30 by buryilma          #+#    #+#             */
/*   Updated: 2024/03/10 14:48:36 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal default destructor called." << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& wrongAnimal ) {
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = wrongAnimal;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& wrongAnimal ) {
	std::cout << "WrongAnimal copy assingment called." << std::endl;
	if (this != &wrongAnimal)
		this->type = wrongAnimal.type;
	return *this;
}

std::string WrongAnimal::getType( void ) const {
	return this->type;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal makes a sound." << std::endl;
}

Brain* WrongAnimal::getBrain() const {
	return NULL;
}
