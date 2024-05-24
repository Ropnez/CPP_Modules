/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:16:30 by buryilma          #+#    #+#             */
/*   Updated: 2024/03/10 14:50:16 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{

// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	delete j;//should not create a leak
// 	delete i;
// }

// {
// 	Dog* dog1 = new Dog();

// 	Dog* dog2 = new Dog();

// 	dog1->getBrain()->ideas[0] = "111";
// 	dog2->getBrain()->ideas[0] = "222";

// 	std::cout << (dog1->getBrain()) << std::endl;
// 	std::cout << dog1->getBrain()->ideas[0] << std::endl;
// 	std::cout << (dog2->getBrain()) << std::endl;
// 	std::cout << dog2->getBrain()->ideas[0] << std::endl;

// 	*dog1 = *dog2;

// 	std::cout << dog1->getBrain() << std::endl;
// 	std::cout << dog1->getBrain()->ideas[0] << std::endl;
// 	std::cout << dog2->getBrain() << std::endl;
// 	std::cout << dog2->getBrain()->ideas[0] << std::endl;

// 	std::cout << std::endl;

// 	dog1->getBrain()->ideas[0] = "333";
// 	dog2->getBrain()->ideas[0] = "444";

// 	std::cout << dog1->getBrain() << std::endl;
// 	std::cout << dog1->getBrain()->ideas[0] << std::endl;
// 	std::cout << dog2->getBrain() << std::endl;
// 	std::cout << dog2->getBrain()->ideas[0] << std::endl;

// 	delete dog1;//should not create a leak
// 	delete dog2;
// }



{
	Animal *animals[10];

	int i = 0;
	int n = 4;
	while (i < n)
	{
		if (i < n / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		i++;
	}

	i = 0;
	while (i < n)
	{
		delete animals[i];
		i++;
	}
}

}
