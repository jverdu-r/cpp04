/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:12:57 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/22 18:12:58 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(void): Animal(), brain(new Brain())
{
    std::cout << "A cat has been created. <cat constructor>" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->brain->ideas[i] = "cat likes to scrath the couch";
    }
    this->type = "cat";
}

Cat::Cat(const Cat &cat): Animal(), brain(new Brain())
{
    std::cout << "A cat has been copied. <cat copy constructor>" << std::endl;
    *this = cat;
}

Cat& Cat::operator=(const Cat &cat)
{
    std::cout << "A cat has been copied. <cat copy assigment>" << std::endl;
    *this->brain = *cat.brain;
    this->type = cat.type;
    return (*this);
}
Cat::~Cat(void)
{
    std::cout << "A cat has been detroyed. <cat destructor>" << std::endl;
    delete this->brain;
}

void Cat::makeSound(void) const
{
    std::cout << "The " << this->type << " mews." << std::endl; 
}

Brain& Cat::getBrain(void)
{
    return (*this->brain);
}
