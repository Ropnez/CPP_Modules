/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:16:30 by buryilma          #+#    #+#             */
/*   Updated: 2024/03/10 14:43:04 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
}

AMateria::~AMateria() {
}

AMateria::AMateria( const std::string& type ) {
	this->type = type;
}

AMateria::AMateria( const AMateria& materia ) {
	*this = materia;
}

AMateria& AMateria::operator=( const AMateria& materia ) {
	if (this != &materia)
		this->type = materia.type;
	return *this;
}

const std::string& AMateria::getType() const {
	return this->type;
}

void AMateria::use( ICharacter& target ) {
	( void )target;
}
