/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:48:56 by buryilma          #+#    #+#             */
/*   Updated: 2024/03/05 17:18:05 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->name = "ScavTrap";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( const std::string& name ) {
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap custom constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& scavTrap ) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = scavTrap;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& scavTrap ) {
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	this->name = scavTrap.name;
	this->hit_points = scavTrap.hit_points;
	this->energy_points = scavTrap.energy_points;
	this->attack_damage = scavTrap.attack_damage;
	return ( *this );
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Default destructor called" << std::endl;
}

void ScavTrap::attack( const std::string& target  ) {
		if (this->energy_points > 0 && this->hit_points > 0) {
		std::cout << "ScavTrap " << this->name << " attacks " << target \
		<< ", causing " << this->attack_damage \
		<< " points of damage!" << std::endl;
		this->energy_points -= 1;
	} else
		std::cout << "No more energy or hit points!" << std::endl;
}

void ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
