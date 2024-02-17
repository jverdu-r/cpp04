#include "../inc/AMateriaNode.hpp"

AMateriaNode::AMateriaNode(): content(NULL), prev(NULL), next(NULL){}

AMateriaNode::AMateriaNode(AMateria * item): content(item), prev(NULL), next(NULL){}

AMateriaNode::AMateriaNode(const AMateriaNode& origin)
{
    *this = origin;
}

AMateriaNode& AMateriaNode::operator=(const AMateriaNode& origin)
{
    this->content = origin.content;
    this->prev = origin.prev;
    this->next = origin.next;
    return (*this);
}

AMateriaNode::~AMateriaNode()
{
    if (this->content != NULL)
        delete this->content;
}
