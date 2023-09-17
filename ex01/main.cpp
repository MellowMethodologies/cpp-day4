#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *arr[4];
    for(int i = 0; i < 2; i++)
        arr[i] = new Dog();
    std::cout << std::endl;
    for(int i = 2; i < 4; i++)
        arr[i] = new Cat();
    std::cout << std::endl;
    /*Cat sound*/
    for(int i = 0; i < 2; i++)
        arr[i]->makeSound();
    std::cout << std::endl;
    /*Dog sound*/
    for(int i = 2; i < 4; i++)
        arr[i]->makeSound();
    std::cout << std::endl;
    for (int i = 0; i < 4;i++)
        delete arr[i];
    return 0;
}