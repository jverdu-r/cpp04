/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:06:24 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/18 19:06:26 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
    std::cout << "A WrongCat has been created. <WrongCat constructor>" << std::endl;
    this->type = "cat";
}

WrongCat::WrongCat(const WrongCat &cat) : WrongAnimal()
{
    std::cout << "A WrongCat has been copied. <WrongCat copy constructor>" << std::endl;
    *this = cat;
}

WrongCat& WrongCat::operator=(const WrongCat &cat)
{
    std::cout << "A WrongCat has been copied. <WrongCat copy assigment>" << std::endl;
    this->type = cat.type;
    return (*this);
}
WrongCat::~WrongCat(void)
{
    std::cout << "A WrongCat has been detroyed. <WrongCat destructor>" << std::endl;
    }

void WrongCat::makeSound(void) const
{
    std::cout << "The " << this->type << " mews." << std::endl; 
}
