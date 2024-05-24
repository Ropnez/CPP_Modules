/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:16:30 by buryilma          #+#    #+#             */
/*   Updated: 2024/03/10 14:51:08 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called." << std::endl;
	this->type = "Cat";
}

Cat::~Cat() {
	std::cout << "Cat default destructor called." << std::endl;
}

Cat::Cat( const Cat& cat ) {
	std::cout << "Cat copy constructor called." << std::endl;
	*this = cat;
}

Cat& Cat::operator=( const Cat& cat ) {
	std::cout << "Cat copy assingment called." << std::endl;
	if (this != &cat)
		this->type = cat.type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "MEAOW" << std::endl;
}
