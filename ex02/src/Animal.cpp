/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:12:34 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/22 18:12:36 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal(void) : type("Default")
{
    std::cout << "A default animal has been created. <default constructor>" << std::endl;
}
Animal::Animal(const Animal &animal)
{
    std::cout << "A default animal has been copied. <copy constructor>" << std::endl;
    *this = animal;
}
Animal &Animal::operator=(const Animal &animal)
{
    std::cout << "A default animal has been copied. <copy assigment>" << std::endl;
    this->type = animal.type;
    return (*this);
}
Animal::~Animal(void)
{
    std::cout << "A default animal has been destroyed. <default destructor>" << std::endl;
}
void Animal::setType(std::string type)
{
    (void)type;
    this->type = "";
}
void Animal::makeSound(void) const
{
    std::cout << "A default animal can't make sounds." << std::endl;
}

const std::string &Animal::getType(void) const
{
	return (this->type);
};
