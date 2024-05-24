/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:16:30 by buryilma          #+#    #+#             */
/*   Updated: 2024/03/10 14:43:41 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal {

	protected:
		std::string type;

	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal( const AAnimal& );
		AAnimal& operator=( const AAnimal& );

		std::string getType( void ) const;
		virtual Brain* getBrain( void ) const;
		virtual void makeSound( void ) const = 0;

};

#endif
