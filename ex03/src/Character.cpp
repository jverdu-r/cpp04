#include "../inc/Character.hpp"
#include "../inc/ICharacter.hpp"
#include "../inc/LinkedList.hpp"
#include <string>
#include <iostream>

LinkedList Character::ground = LinkedList();

Character::Character(): used_slots(0), name("")
{
    this->slots = new AMateria*[MAX_SLOTS];
    for (int i = 0; i < MAX_SLOTS; i++)
        this->slots[i] = NULL;
}

Character::Character(std::string name): used_slots(0), name(name)
{
    this->slots = new AMateria*[MAX_SLOTS];
    for (int i = 0; i < MAX_SLOTS; i++)
        this->slots[i] = NULL;
}

Character::~Character()
{
    while (this->used_slots > 0)
    {
        delete this->slots[this->used_slots - 1];
        this->used_slots -= 1;
    }
    delete[] this->slots;
}

Character::Character(const Character& origin)
{
    *this = origin;
}

Character& Character::operator=(const Character& origin)
{
    this->name = origin.name;
    this->used_slots = 0;
    for (int i = origin.used_slots - 1; i >= 0; i--)
    {
        this->slots[i] = origin.slots[i];
        this->used_slots++;
    }
    return (*this);
}

std::string const& Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* materia)
{
    if (this->used_slots >= MAX_SLOTS)
    {
        if (materia)
            delete materia;
        return;
    }
    if (!materia)
        return;
    this->slots[this->used_slots] = materia;
    this->used_slots++;
}

void Character::unequip(int index)
{
    if (index >= this->used_slots)
        return;
    if (this->slots[this->used_slots - 1] != NULL)
    {
        Character::toss_to_ground(this->ground, this->slots[this->used_slots - 1]);
        this->slots[this->used_slots - 1] = NULL;
        this->used_slots--;
    }
}

void Character::use(int index, ICharacter& target)
{
    if (index >= this->used_slots || index < 0)
        return;
    this->slots[index]->use(target);
}

void Character::toss_to_ground(LinkedList& ground, AMateria *item)
{
    ground.addMateria(item);
}
