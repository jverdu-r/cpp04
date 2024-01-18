/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:05:27 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/18 19:05:28 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &animal);
        WrongAnimal& operator=(const WrongAnimal &animal);
        ~WrongAnimal(void);
        void setType(std::string type);
        const std::string& getType(void) const;
        void makeSound(void) const;
    protected:
        std::string type;
};
#endif
