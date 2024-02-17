#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(std::string const &type);
        AMateria(AMateria const &materia);
        AMateria &operator=(AMateria const &materia);
        virtual ~AMateria();
        std::string const & getType() const; // return the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};
#endif