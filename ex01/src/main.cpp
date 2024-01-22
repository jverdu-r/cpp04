/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:13:04 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/22 18:13:05 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Brain.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

void subjectTest(){
	std::cout << std::endl << "SUBJECT TEST - START" << std::endl << std::endl;
	{
	std::cout << std::endl << "Half/Half Animal Array" << std::endl;
		Animal *animals[4];
		animals[0] = new Dog();
		animals[1] = new Cat();
		animals[2] = new Dog();
		animals[3] = new Cat();

		std::cout << std::endl << std::endl ;
		animals[0]->makeSound();
		animals[1]->makeSound();
		animals[2]->makeSound();
		animals[3]->makeSound();
		std::cout << std::endl << std::endl ;
		for (int i = 0; i < 4; i++){
			delete animals[i];
		}
		
	}
	std::cout << std::endl << "SUBJECT TEST - pt2" << std::endl << std::endl;
	{
	std::cout << std::endl << "subject copied" << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		std::cout << j->getType() << " " << std::endl;
		j->makeSound();
		delete i;
		delete j;
	}
	std::cout << std::endl << "SUBJECT TEST - pt3" << std::endl << std::endl;
	{
		std::cout << std::endl << "Deep copy" << std::endl;
		Dog* dogs[2];
		Cat* cats[2];
		dogs[0] = new Dog();
		dogs[1] = new Dog(*dogs[0]);
		cats[0] = new Cat();
		cats[1] = new Cat(*cats[0]);

		std::cout << "dogs[0] idea address: " << &(dogs[0]->getBrain().ideas[0]) << std::endl;
		std::cout << "dogs[1] idea address: " << &(dogs[1]->getBrain().ideas[0]) << std::endl;
		std::cout << "cats[0] idea address: " << &(cats[0]->getBrain().ideas[0]) << std::endl;
		std::cout << "cats[1] idea address: " << &(cats[1]->getBrain().ideas[0]) << std::endl;

		delete dogs[0];
		delete dogs[1];
		delete cats[0];
		delete cats[1];
	}
	std::cout << "SUBJECT TEST - END" << std::endl;
}

int main(void)
{
    subjectTest();
    return (0);
}
