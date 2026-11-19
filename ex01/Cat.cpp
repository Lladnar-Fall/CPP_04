#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
    brain = new Brain(*src.brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &src)
    {
        Animal::operator=(src);
        delete this->brain;
        this->brain = new Brain(*src.brain);
    }
    return (*this);
}

Cat::~Cat()
{
    delete  brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow!!" << std::endl;
}

void Cat::setIdea(int index, const std::string &idea)
{
    this->brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
    return (this->brain->getIdea(index));
}
