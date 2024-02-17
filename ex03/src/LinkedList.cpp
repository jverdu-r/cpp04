#include "../inc/LinkedList.hpp"
#include "../inc/AMateria.hpp"
#include "../inc/AMateriaNode.hpp"

LinkedList::LinkedList():head(NULL){}

LinkedList::LinkedList(const LinkedList& origin)
{
    *this = origin;
}

LinkedList& LinkedList::operator=(const LinkedList& origin)
{
    this->head = origin.head;
    return(*this);
}

LinkedList::~LinkedList()
{
    while (this->head != NULL)
    {
        this->eraseLast();
    }
}

AMateriaNode* LinkedList::getLastNode()
{
    AMateriaNode* last = this->head;
    if (last == NULL)
        return (NULL);
    while (last->next != NULL)
        last = last->next;
    return (last);
}

void LinkedList::addMateria(AMateria *item)
{
    AMateriaNode* newNode = new AMateriaNode(item);
    AMateriaNode* lastNode;
    if (this->head != NULL)
    {
        lastNode = this->getLastNode();
        lastNode->next = newNode;
        newNode->prev = lastNode;
    }
    else
        this->head = newNode;
}

void LinkedList::eraseLast()
{
    AMateriaNode* lastNode = this->getLastNode();
    AMateriaNode* retNode;
    if (lastNode->prev)
    {
        retNode = lastNode->prev;
        retNode->next = NULL;
        delete lastNode;
        return;
    }
    delete lastNode;
    this->head = NULL;
}