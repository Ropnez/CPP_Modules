/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:16:30 by buryilma          #+#    #+#             */
/*   Updated: 2024/03/10 14:50:41 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain default destructor called." << std::endl;
}

Brain::Brain( const Brain& brain ) {
	std::cout << "Brain copy constructor called." << std::endl;
	*this = brain;
}

Brain& Brain::operator=( const Brain& brain ) {
	std::cout << "Brain copy assingment called." << std::endl;
	if (this != &brain) {
		int i = 0;
		while (i < 100)
		{
			this->ideas[i] = brain.ideas[i];
			i++;
		}
	}
	return *this;
}
