/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:48:56 by buryilma          #+#    #+#             */
/*   Updated: 2024/03/05 17:17:00 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
}
