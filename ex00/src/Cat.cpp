/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:14:16 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/22 18:14:25 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(void)
{
    std::cout << "A cat has been created. <cat constructor>" << std::endl;
    this->type = "cat";
}

Cat::Cat(const Cat &cat)
{
    std::cout << "A cat has been copied. <cat copy constructor>" << std::endl;
    *this = cat;
}

Cat& Cat::operator=(const Cat &cat)
{
    std::cout << "A cat has been copied. <cat copy assigment>" << std::endl;
    this->type = cat.type;
    return (*this);
}
Cat::~Cat(void)
{
    std::cout << "A cat has been detroyed. <cat destructor>" << std::endl;
    }

void Cat::makeSound(void) const
{
    std::cout << "The " << this->type << " mews." << std::endl; 
}
