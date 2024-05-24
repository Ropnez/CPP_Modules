/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:16:30 by buryilma          #+#    #+#             */
/*   Updated: 2024/03/10 14:50:48 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal default destructor called." << std::endl;
}

Animal::Animal( const Animal& animal ) {
	std::cout << "Animal copy constructor called." << std::endl;
	*this = animal;
}

Animal& Animal::operator=( const Animal& animal ) {
	std::cout << "Animal copy assingment called." << std::endl;
	if (this != &animal)
		this->type = animal.type;
	return *this;
}

std::string Animal::getType( void ) const {
	return this->type;
}

void Animal::makeSound() const {
	std::cout << "Animal makes a sound." << std::endl;
}

Brain* Animal::getBrain() const {
	return NULL;
}

