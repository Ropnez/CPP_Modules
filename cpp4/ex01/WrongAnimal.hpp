/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:16:30 by buryilma          #+#    #+#             */
/*   Updated: 2024/03/10 14:50:07 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class WrongAnimal {

	protected:
		std::string type;

	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal( const WrongAnimal& );
		WrongAnimal& operator=( const WrongAnimal& );

		std::string getType( void ) const;
		void makeSound( void ) const;
		Brain* getBrain( void ) const;

};

#endif
