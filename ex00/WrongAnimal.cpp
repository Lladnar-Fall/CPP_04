#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "";
    std::cout << "WrongAnimal created without type" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
    std::cout << "WrongAnimal created with type: " << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    this->type = src.type;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if (this != &src)
    {
        this->type = src.type;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong Animal sound" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}