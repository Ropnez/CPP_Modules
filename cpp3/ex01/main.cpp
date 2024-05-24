/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:48:56 by buryilma          #+#    #+#             */
/*   Updated: 2024/03/05 17:17:11 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main () {
	ClapTrap a;
	ClapTrap b(a);
	ClapTrap c("NamedClapTrap");

	a = c;

	ClapTrap d("ClapTrap1");
	d.attack("Enemy");
	d.beRepaired(1);
	d.takeDamage(2);
	d.takeDamage(10);
	d.attack("Enemy");
	c.attack("Enemy");

	std::cout << "################################" << std::endl;

	ScavTrap x;
	ScavTrap y(x);
	ScavTrap z("NamedScavTrap");

	x = z;

	ScavTrap h("ScavTrap1");

	h.attack("Enemy");
	h.beRepaired(1);
	h.takeDamage(2);
	h.takeDamage(10);
	h.attack("Enemy");
	z.attack("Enemy");
	z.guardGate();
}
