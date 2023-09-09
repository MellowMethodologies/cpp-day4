#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        Animal* meta = new Animal();
        Animal* j = new Dog();
        Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        std::cout << meta->getType() <<"\n";
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
        delete meta;
        delete j;
        delete i;
    }

    {
        WrongAnimal* meta = new WrongAnimal();
        WrongAnimal* i = new WrongCat();
        std::cout << i->getType() << " " << std::endl;
        std::cout << meta->getType() <<"\n";
        i->makeSound(); //will output the wrong cat sound!
        meta->makeSound();
        delete meta;
        delete i;
    }
    return 0;
}