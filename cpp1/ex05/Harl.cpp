/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:13:16 by buryilma          #+#    #+#             */
/*   Updated: 2024/02/20 18:21:00 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ) {
	std::cout << "Debug" << std::endl;
}

void Harl::info( void ) {
	std::cout << "Info" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "Warning" << std::endl;
}

void Harl::error( void ) {
	std::cout << "Error" << std::endl;
}


void Harl::complain( std::string level ) {
	std::string levels[4] = {"debug", "info", "warning", "error"};
	void (Harl::*ptr[4])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(this->*ptr[i])();
			return ;
		}
	}
	std::cout << "Harl doesn't know what to do with " << level << std::endl;
}