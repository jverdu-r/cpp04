/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:11:53 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/05/21 18:26:29 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
    public:
        std::string ideas[100];
        Brain(void);
        Brain(const Brain& brain);
        Brain& operator=(const Brain& brain);
        ~Brain(void);
};
#endif
