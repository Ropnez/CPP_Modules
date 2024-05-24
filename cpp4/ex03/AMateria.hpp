/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:16:30 by buryilma          #+#    #+#             */
/*   Updated: 2024/03/10 14:42:58 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria {

	protected:
		std::string type;

	public:
		AMateria();
		virtual ~AMateria();
		AMateria( const AMateria& );
		AMateria( const std::string& );
		AMateria& operator=( const AMateria& );

		const std::string& getType() const;

		virtual void use( ICharacter& target );

		virtual AMateria* clone() const = 0;

};

#endif
