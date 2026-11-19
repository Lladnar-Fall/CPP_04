
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal	*animal = new Animal();
	const Animal	*dog = new Dog();
	const Animal	*cat = new Cat();

	std::cout << animal->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;

	animal->makeSound();
	dog->makeSound();
	cat->makeSound();

	delete animal;
	delete dog;
	delete cat;

	std::cout << std::endl;

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

	std::cout << std::endl;

	const WrongAnimal	*wani = new WrongAnimal();
	const WrongAnimal	*wcat = new WrongCat();

	std::cout << wani->getType() << " " << std::endl;
	std::cout << wcat->getType() << " " << std::endl;

    wani->makeSound();
	wcat->makeSound();

	delete wani;
	delete wcat;

	std::cout << std::endl;

	const WrongCat	realWrongCat;
	std::cout << realWrongCat.getType() << std::endl;
	realWrongCat.makeSound();

	std::cout << std::endl;

	Dog	a;
	Dog	b(a);
	Dog	c;
	c = a;

	std::cout << b.getType() << " / " << c.getType() << std::endl;
	b.makeSound();
	c.makeSound();
	return 0;
}