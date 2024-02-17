#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>

#ifndef MAX_SLOTS
#define MAX_SLOTS 4
#endif

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* know[MAX_SLOTS];
        int slotsUsed;
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& origin);
        MateriaSource& operator=(const MateriaSource& origin);
        virtual ~MateriaSource();
        virtual void learnMateria(AMateria *);
        virtual AMateria *createMateria(std::string const &type);
};