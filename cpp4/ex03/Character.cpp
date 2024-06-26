/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:16:30 by buryilma          #+#    #+#             */
/*   Updated: 2024/03/10 16:00:25 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	int i = 0;
	while (i < 4) {
		this->inventory[i] = 0;
		i++;
	}
}

Character::~Character(){
	int i = 0;
	while (i < 4) {
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
		i++;
	}
}

Character::Character( const std::string& name ) {
	this->name = name;
	int i = 0;
	while (i < 4) {
		this->inventory[i] = 0;
		i++;
	}
}

Character::Character( const Character& character ) {
	int i = 0;
	while (i < 4) {
		this->inventory[i] = NULL;
		i++;
	}
	*this = character;
}

Character& Character::operator=( const Character& character ) {
	if(this != &character) {
		this->name = character.getName();
		int i = 0;
		while (i < 4) {
			if (this->inventory[i] != NULL){
				delete this->inventory[i];
				if (character.inventory[i] != NULL)
					this->inventory[i] = character.inventory[i]->clone();
				else
					this->inventory[i] = 0;
			}
			else
				if (character.inventory[i] != NULL)
					this->inventory[i] = character.inventory[i]->clone();
				else
					this->inventory[i] = 0;
			i++;
			
		}
	}
	return *this;
}

const std::string& Character::getName() const {
	return this->name;
}

void Character::equip( AMateria* m ) {
	if (!m)
		return ;
	int i = 0;
	while (i < 4) {
		if (this->inventory[i] == 0) {
			this->inventory[i] = m;
			break ;
		}
		i++;
	}
}

void Character::unequip( int idx ) {
	if (idx >= 0 && idx < 4) {
		if (this->inventory[idx] != 0) {
			this->inventory[idx] = 0;
		}
	}
}

void Character::use( int idx, ICharacter& target ) {
	if (idx >= 0 && idx < 4) {
		if (this->inventory[idx] != 0) {
			this->inventory[idx]->use(target);
		}
	}
}
