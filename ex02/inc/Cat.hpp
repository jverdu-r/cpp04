/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:12:09 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/22 18:12:11 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* brain;
    public:
        Cat(void);
        Cat(const Cat &cat);
        Cat& operator=(const Cat &cat);
        virtual ~Cat(void);
        virtual void makeSound(void) const;
        Brain& getBrain(void);
};
#endif
