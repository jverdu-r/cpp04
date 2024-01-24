/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:12:26 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/22 18:12:29 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain(void)
{
    std::cout << "brain created. <default constructor>." << std::endl;
}

Brain::Brain(const Brain& brain)
{
    std::cout << "brain copied. <copy contructor>." << std::endl;
    *this = brain;
}

Brain& Brain::operator=(const Brain& brain)
{
    std::cout << "A brain has been copied. <brain copy assigment>." << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = brain.ideas[i];
    }
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "A brain has been deleted. <brain default destructor>." << std::endl;
}

