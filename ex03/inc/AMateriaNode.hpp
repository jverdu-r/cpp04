#ifndef AMATERIANODE_HPP
#define AMATERIANODE_HPP
#include "AMateria.hpp"

class AMateriaNode
{
    public:
        AMateria* content;
        AMateriaNode* prev;
        AMateriaNode* next;
        AMateriaNode();
        AMateriaNode(AMateria * item);
        AMateriaNode(const AMateriaNode& origin);
        AMateriaNode& operator=(const AMateriaNode& origin);
        ~AMateriaNode();
};
#endif