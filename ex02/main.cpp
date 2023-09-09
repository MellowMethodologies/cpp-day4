#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    AAnimal *arr[6];
    for(int i = 0; i < 3; i++)
        arr[i] = new Dog();
    for(int i = 3; i < 6; i++)
        arr[i] = new Cat();
    /*Cat sound*/
    for(int i = 0; i < 3; i++)
        arr[i]->makeSound();
    /*Dog sound*/
    for(int i = 3; i < 6; i++)
        arr[i]->makeSound();
    for (int i = 0; i < 6;i++)
        delete arr[i];
    return 0;
}