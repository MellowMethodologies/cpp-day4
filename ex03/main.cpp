#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

void f()
{
        system("leaks Materia");
}

int main()
{   
    {
        // atexit(f);
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp1[5];
        for(int i = 0; i < 4; i++)
        {
            tmp1[i] = src->createMateria("ice");
            me->equip(tmp1[i]);
            me->use(i, *me);
        }
        std::cout << std::endl;
        ICharacter* bob = new Character("me");
        me->unequip(0);
        me->unequip(1);
        me->unequip(2);
        me->unequip(3);
        me->use(1, *bob);
        me->use(2, *bob);
        me->use(0, *bob);
        me->use(2, *bob);
        me->use(3, *bob);
        delete bob;
        delete me;
        delete src;
    }

    return 0;
}