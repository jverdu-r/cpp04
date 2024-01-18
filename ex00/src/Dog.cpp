/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:06:05 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/18 19:06:06 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(void)
{
    std::cout << "A dog has been created. <dog constructor>" << std::endl;
    this->type = "dog";
}

Dog::Dog(const Dog &dog)
{
    std::cout << "A dog has been copied. <dog copy constructor>" << std::endl;
    *this = dog;
}

Dog& Dog::operator=(const Dog &dog)
{
    std::cout << "A dog has been copied. <dog copy assigment>" << std::endl;
    this->type = dog.type;
    return (*this);
}
Dog::~Dog(void)
{
    std::cout << "A dog has been detroyed. <dog destructor>" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "The " << this->type << " barks." << std::endl; 
}
