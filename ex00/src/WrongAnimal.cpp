/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:06:16 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/18 19:06:17 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("Default")
{
    std::cout << "A wrong animal has been created. <WrongAnimal constructor>" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
    std::cout << "A wrong animal has been copied. <WrongAnimal copy constructor>" << std::endl;
    *this = animal;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal)
{
    std::cout << "A default animal has been copied. <WrongAnimal copy assigment>" << std::endl;
    this->type = animal.type;
    return (*this);
}
WrongAnimal::~WrongAnimal(void)
{
    std::cout << "A wrong animal has been destroyed. <WrongAnimal destructor>" << std::endl;
}
void WrongAnimal::setType(std::string type)
{
    (void)type;
    this->type = "";
}
void WrongAnimal::makeSound(void) const
{
    std::cout << "A wrong animal can't make sounds." << std::endl;
}

const std::string &WrongAnimal::getType(void) const
{
	return (this->type);
};
