#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "LinkedList.hpp"
#include <string>

#ifndef MAX_SLOTS
#define MAX_SLOTS 4
#endif

class Character: public ICharacter
{
    private:
        static LinkedList ground;
        int used_slots;
        std::string name;
        AMateria** slots;
        static void toss_to_ground(LinkedList& ground, AMateria *item);
    public:
        Character();
        Character(const Character& origin);
        Character(std::string name);
        Character& operator=(const Character& origin);
        virtual ~Character();
        virtual std::string const & getName() const;
        virtual void equip(AMateria* materia);
        virtual void unequip(int index);
        virtual void use(int index, ICharacter& target);
};