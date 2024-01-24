/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:12:02 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/22 18:12:04 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* brain;
    public:
        Dog(void);
        Dog(const Dog &dog);
        Dog& operator=(const Dog &dog);
        virtual ~Dog(void);
        virtual void makeSound(void) const;
        Brain& getBrain(void);
};
#endif
