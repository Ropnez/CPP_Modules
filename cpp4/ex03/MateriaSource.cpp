/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:16:30 by buryilma          #+#    #+#             */
/*   Updated: 2024/03/10 15:59:53 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	int i = 0;
	while (i < 4) {
		this->learnedMaterias[i] = 0;
		i++;
	}
}

MateriaSource::~MateriaSource() {
	int i = 0;
	while (i < 4) {
		if (this->learnedMaterias[i] != NULL)
			delete this->learnedMaterias[i];
		i++;
	}
}

MateriaSource::MateriaSource( const MateriaSource& materiaSource ) {
	int i = 0;
	while (i < 4) {
		this->learnedMaterias[i] = 0;
		i++;
	}
	*this = materiaSource;
}

MateriaSource& MateriaSource::operator=( const MateriaSource& materiaSource ) {
		if(this != &materiaSource) {
		int i = 0;
		while (i < 4) {
			if (this->learnedMaterias[i] != NULL){
				delete this->learnedMaterias[i];
				if (materiaSource.learnedMaterias[i] != NULL)
					this->learnedMaterias[i] = materiaSource.learnedMaterias[i]->clone();
				else
					this->learnedMaterias[i] = 0;
			}
			else
				if (materiaSource.learnedMaterias[i] != NULL)
					this->learnedMaterias[i] = materiaSource.learnedMaterias[i]->clone();
				else
					this->learnedMaterias[i] = 0;
			i++;
		}
	}
	return *this;
}

void MateriaSource::learnMateria( AMateria* materia ) {
	int i = 0;
	while (i < 4)
	{
		if (this->learnedMaterias[i] == 0) {
			this->learnedMaterias[i] = materia;
			break;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria( const std::string& type ) {
	int i = 0;
	while (i < 4)
	{
		if (this->learnedMaterias[i] != nullptr)
		{
			if (this->learnedMaterias[i]->getType() == type)
				return this->learnedMaterias[i]->clone();
		}
		i++;
	}
	return 0;
}

