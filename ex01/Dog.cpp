#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
    brain = new Brain(*src.brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& src)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &src)
    {
        Animal::operator=(src);
        delete this->brain;
        this->brain = new Brain(*src.brain);
    }
    return *this;
}

Dog::~Dog()
{
    delete  brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Bark!!" << std::endl;
}

void Dog::setIdea(int index, const std::string &idea)
{
    this->brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
    return (this->brain->getIdea(index));
}
