/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:16:30 by buryilma          #+#    #+#             */
/*   Updated: 2024/03/10 14:43:38 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "Animal default constructor called." << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "Animal default destructor called." << std::endl;
}

AAnimal::AAnimal( const AAnimal& animal ) {
	std::cout << "Animal copy constructor called." << std::endl;
	*this = animal;
}

AAnimal& AAnimal::operator=( const AAnimal& animal ) {
	std::cout << "Animal copy assingment called." << std::endl;
	if (this != &animal)
		this->type = animal.type;
	return *this;
}

std::string AAnimal::getType( void ) const {
	return this->type;
}

Brain* AAnimal::getBrain() const {
	return NULL;
}


