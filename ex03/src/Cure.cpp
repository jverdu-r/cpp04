#include "../inc/Cure.hpp"
#include <string>

Cure::Cure(): AMateria("cure"){}
AMateria* Cure::clone() const
{
    return (new Cure());
}

Cure::~Cure(){}

void Cure::use(ICharacter& target)
{
    std::cout << "heals " << target.getName() << "'s wounds." << std::endl;
}