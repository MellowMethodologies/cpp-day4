#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Character.hpp"


class MateriaSource: public IMateriaSource
{
    private:
        AMateria *MAT[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(MateriaSource const &m);
        MateriaSource &operator=(MateriaSource const &m);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif