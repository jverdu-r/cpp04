#include "../inc/Cat.hpp"

Cat::Cat(void)
{
    std::cout << "A cat has been created. <cat constructor>" << std::endl;
    this->type = "cat";
}

Cat::Cat(const Cat &cat)
{
    std::cout << "A cat has been copied. <cat copy constructor>" << std::endl;
    *this = cat;
}

Cat& Cat::operator=(const Cat &cat)
{
    std::cout << "A cat has been copied. <cat copy assigment>" << std::endl;
    this->type = cat.type;
    return (*this);
}
Cat::~Cat(void)
{
    std::cout << "A cat has been detroyed. <cat destructor>" << std::endl;
    }

void Cat::makeSound(void) const
{
    std::cout << "The " << this->type << " mews." << std::endl; 
}
