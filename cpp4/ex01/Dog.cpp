/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:16:30 by buryilma          #+#    #+#             */
/*   Updated: 2024/03/10 14:50:28 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called." << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Dog default destructor called." << std::endl;
}

Dog::Dog( const Dog& dog ) {
	std::cout << "Dog copy constructor called." << std::endl;
	this->brain = new Brain();
	*this = dog;
}

Dog& Dog::operator=( const Dog& dog ) {
	std::cout << "Dog copy assingment called." << std::endl;
	if (this != &dog)
	{
		this->type = dog.type;
		*this->brain = *dog.brain;
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "HAVHAV" << std::endl;
}

Brain* Dog::getBrain() const {
	return this->brain;
}
