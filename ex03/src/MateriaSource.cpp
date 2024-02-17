#include "../inc/MateriaSource.hpp"
#include <string>

MateriaSource::MateriaSource(): know(),slotsUsed(0){}

MateriaSource::MateriaSource(const MateriaSource& origin)
{
    *this = origin;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& origin)
{
    for (int i = 0; i < origin.slotsUsed; i++)
    {
        this->know[i] = origin.know[i]->clone();
    }
    this->slotsUsed = origin.slotsUsed;
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < this->slotsUsed; i++)
    {
        delete this->know[i];
    }
}

void MateriaSource::learnMateria(AMateria *origin)
{
    if (this->slotsUsed >= MAX_SLOTS)
    {
        if (origin != NULL)
            delete origin;
        return;
    }
    this->know[this->slotsUsed] = origin;
    this->slotsUsed++;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for(int i = 0; i < this->slotsUsed; i++)
    {
        if (this->know[i]->getType() == type)
            return (this->know[i]->clone());
    }
    return (0);
}

