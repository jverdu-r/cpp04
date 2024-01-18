/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:04:05 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/18 19:05:05 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
    public:
        Animal(void);
        Animal(const Animal &animal);
        Animal& operator=(const Animal &animal);
        virtual ~Animal(void);
        void setType(std::string type);
        const std::string& getType(void) const;
        virtual void makeSound(void) const;
    protected:
        std::string type;
};
#endif
