#include "Animal.hpp"

Animal::Animal()
{
    this->type = "";
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
    this->type = src.type;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &src)
    {
        this->type = src.type;
    }
    return (*this);
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->type);
}

void Animal::makeSound(void) const
{
    std::cout << "Some generic animal sound" << std::endl;
}