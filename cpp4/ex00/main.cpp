/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:16:30 by buryilma          #+#    #+#             */
/*   Updated: 2024/03/10 14:51:27 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void animalSound(const Animal& animal) {
	std::cout << animal.getType() << std::endl;
	animal.makeSound();
}

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		i->makeSound();
		j->makeSound();
		meta->makeSound();
		delete i;
		delete j;
		delete meta;
	}

	{
		WrongCat b;
		WrongCat a(b);
	}

	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		delete i;
		delete meta;
	}

	{
		const Animal* meta = new Animal();
		const Animal* i = new Cat();

		delete i;
		delete meta;
	}

	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		meta->makeSound();
		delete i;
		delete meta;
	}

	{
		Dog dog1;
		Cat cat1;
		Animal animal1;

		animalSound(dog1);
		animalSound(cat1);
		animalSound(animal1);
	}


return 0;
}
