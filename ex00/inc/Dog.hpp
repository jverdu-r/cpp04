/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:05:11 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/18 19:05:13 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : virtual public Animal
{
    public:
        Dog(void);
        Dog(const Dog &dog);
        Dog& operator=(const Dog &dog);
        ~Dog(void);
        virtual void makeSound(void) const;

};
#endif
