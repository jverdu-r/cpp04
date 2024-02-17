#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#include "AMateria.hpp"
#include "AMateriaNode.hpp"

class LinkedList
{
    private:
        AMateriaNode* head;
        AMateriaNode* getLastNode();
    public:
        LinkedList();
        LinkedList(const LinkedList& origin);
        LinkedList& operator=(const LinkedList& origin);
        ~LinkedList();
        void addMateria(AMateria *item);
        void eraseLast();
};
#endif