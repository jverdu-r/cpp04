#include "../inc/Ice.hpp"
#include <string>

Ice::Ice(): AMateria("ice"){}

AMateria* Ice::clone() const
{
    return (new Ice());
}

Ice::~Ice(){}

void Ice::use(ICharacter& target)
{
    std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
}