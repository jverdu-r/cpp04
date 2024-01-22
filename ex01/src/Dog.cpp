/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:12:46 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/22 18:12:50 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(void): Animal(), brain(new Brain())
{
    std::cout << "A dog has been created. <dog constructor>" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->brain->ideas[i] = "dog likes to eat new sneakers";
    }
    this->type = "dog";
}

Dog::Dog(const Dog &dog): Animal(), brain(new Brain())
{
    std::cout << "A dog has been copied. <dog copy constructor>" << std::endl;
    *this = dog;
}

Dog& Dog::operator=(const Dog &dog)
{
    std::cout << "A dog has been copied. <dog copy assigment>" << std::endl;
    *this->brain = *dog.brain;
    this->type = dog.type;
    return (*this);
}
Dog::~Dog(void)
{
    std::cout << "A dog has been detroyed. <dog destructor>" << std::endl;
    delete this->brain;
}

void Dog::makeSound(void) const
{
    std::cout << "The " << this->type << " barks." << std::endl; 
}

Brain& Dog::getBrain(void)
{
    return (*this->brain);
}
