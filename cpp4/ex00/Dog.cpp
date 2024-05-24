/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:16:30 by buryilma          #+#    #+#             */
/*   Updated: 2024/03/10 14:51:26 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called." << std::endl;
	this->type = "Dog";
}

Dog::~Dog() {
	std::cout << "Dog default destructor called." << std::endl;
}

Dog::Dog( const Dog& dog ) {
	std::cout << "Dog copy constructor called." << std::endl;
	*this = dog;
}

Dog& Dog::operator=( const Dog& dog ) {
	std::cout << "Dog copy assingment called." << std::endl;
	if (this != &dog)
		this->type = dog.type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "HAVHAV" << std::endl;
}
