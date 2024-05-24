/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:16:30 by buryilma          #+#    #+#             */
/*   Updated: 2024/03/10 14:42:33 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
	this->type = "ice";
}

Ice::~Ice() {
}

Ice::Ice( const Ice& ice) {
	*this = ice;
}

Ice& Ice::operator=(const Ice& ice) {
	if (this != &ice)
		this->type = ice.getType();
	return *this;
}

void Ice::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName()
			  << " *" << std::endl;
}

AMateria* Ice::clone(void) const {
	return (new Ice(*this));
}
