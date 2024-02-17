#include "../inc/AMateria.hpp"
#include <string>

AMateria::AMateria(std::string const& type): type(type){}

std::string const& AMateria::getType() const
{
    return (this->type);
}

AMateria::~AMateria(){}

AMateria::AMateria(): type(""){}

AMateria::AMateria(AMateria const& origin)
{
    *this = origin;
}

AMateria& AMateria::operator=(AMateria const& origin)
{
    this->type = origin.type;
    return (*this);
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}