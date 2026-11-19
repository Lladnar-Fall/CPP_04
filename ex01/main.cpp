#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
    std::cout << "\nDeep copy: scope test from the sheet" << std::endl;
    {
        Dog basic;
        basic.setIdea(0, "Chase the ball");
        {
            Dog tmp = basic;
            tmp.setIdea(0, "Sleep");
            std::cout << "tmp:   " << tmp.getIdea(0) << std::endl;
        }
        std::cout << "basic: " << basic.getIdea(0) << std::endl;
    }

    std::cout << "\n Cat copy constructor " << std::endl;
    {
        Cat original;
        original.setIdea(0, "I want fish");
        Cat copy(original);
        std::cout << "copy right after copying: " << copy.getIdea(0) << std::endl;
        copy.setIdea(0, "I want to sleep");
        std::cout << "original: " << original.getIdea(0) << std::endl;
        std::cout << "copy:     " << copy.getIdea(0) << std::endl;
    }

    std::cout << "\n Dog assignment " << std::endl;
    {
        Dog a;
        a.setIdea(0, "Chase the ball");
        Dog b;
        b.setIdea(0, "Old idea that must disappear");
        b = a;
        std::cout << "b after assignment: " << b.getIdea(0) << std::endl;           
        b.setIdea(0, "Sleep");
        std::cout << "a: " << a.getIdea(0) << std::endl;                             
        std::cout << "b: " << b.getIdea(0) << std::endl;                           
    }

    std::cout << "\n Array test" << std::endl;
    {
        const Animal *animals[4];

        for (int i = 0; i < 2; i++)
        {
            animals[i] = new Dog();
        }
        for (int i = 2; i < 4; i++)
            animals[i] = new Cat();

        for (int j = 0; j < 4; j++)
            animals[j]->makeSound();
        
        for (int i = 0; i < 4; i++)
            delete animals[i];
    }

    std::cout << "\n Self-assignment " << std::endl;
    {
        Dog d;
        d.setIdea(0, "Still here");
        Dog &ref = d;
        d = ref;
        std::cout << d.getIdea(0) << std::endl;                                     
    }

    std::cout << "\n Subject example " << std::endl;
    {
        const Animal *j = new Dog();
        const Animal *i = new Cat();
        delete j;
        delete i;
    }
}

