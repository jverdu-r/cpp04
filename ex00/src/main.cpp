/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:07:07 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/18 19:07:08 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Animal.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"

void subjectTest()
{
	std::cout << std::endl << "SUBJECT TEST - START" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		std::cout << j->getType() << " " << std::endl;
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete i;
		delete j;
	}
	std::cout << "SUBJECT TEST - END" << std::endl;
}

void wrongSubjectTest()
{
	std::cout << std::endl << "WRONG SUBJECT TEST - START" << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); 
		meta->makeSound();
		delete meta;
		delete i;
	}
	std::cout << "WRONG SUBJECT TEST - END" << std::endl;
}
void testDog(){
	std::cout << std::endl << "DOG TEST - START" << std::endl;
	{
		Dog stack_dog;
		Dog *heap_dog = new Dog();

		std::cout << "stack_dog getType: " << stack_dog.getType() << std::endl;
		std::cout << "stack_dog getType: ";
		stack_dog.makeSound();

		std::cout << "heap_dog getType: " << heap_dog->getType() << std::endl;
		std::cout << "heap_dog getType: ";
		heap_dog->makeSound();
		delete heap_dog;
	}
	std::cout << "DOG TEST - END" << std::endl;
}

void testCat()
{
	std::cout << std::endl << "CAT TEST - START" << std::endl;
	{
		Cat stack_cat;
		Cat *heap_cat = new Cat();

		std::cout << "stack_cat getType: " << stack_cat.getType() << std::endl;
		std::cout << "stack_cat getType: ";
		stack_cat.makeSound();

		std::cout << "heap_cat getType: " << heap_cat->getType() << std::endl;
		std::cout << "heap_cat getType: ";
		heap_cat->makeSound();
		delete heap_cat;
	}
	std::cout << "CAT TEST - END" << std::endl;
}
void testAnimal()
{
	std::cout << std::endl << "ANIMAL TEST - START" << std::endl;
	{
		Animal stack_animal;
		Animal *heap_animal = new Animal();

		std::cout << "stack_animal getType: " << stack_animal.getType() << std::endl;
		std::cout << "stack_animal getType: ";
		stack_animal.makeSound();

		std::cout << "heap_animal getType: " << heap_animal->getType() << std::endl;
		std::cout << "heap_animal getType: ";
		heap_animal->makeSound();
		delete heap_animal;
	}
	std::cout << "ANIMAL TEST - END" << std::endl;
}
int main(void)
{
	subjectTest();
	wrongSubjectTest();
	testDog();
	testCat();
	testAnimal();
	return (0);
}
