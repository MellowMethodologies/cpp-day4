#include "MateriaSource.hpp"

MateriaSource ::~MateriaSource() {
    for (int i = 0; i < 4; i++)
        delete MAT[i];
}

MateriaSource ::MateriaSource()
{
    for (int i=0; i < 4;i++)
        MAT[i] = NULL;
}

MateriaSource ::MateriaSource(MateriaSource const &m) {*this = m;}

MateriaSource &MateriaSource ::operator=(MateriaSource const &m) {
    if (this != &m)
    {
        for (int i =0; this->MAT[i]; i++)
        {
            delete MAT[i];
            MAT[i] = m.MAT[i]->clone();
        }
    }
    return *this;
}

void MateriaSource ::learnMateria(AMateria* M)
{
    for (int i = 0; i < 4; i++)
    {
        if (!MAT[i])
        {
            MAT[i] = M;
            break;
        }
    }
}

AMateria* MateriaSource ::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (MAT[i] && MAT[i]->getType() == type)
            return(MAT[i]->clone());
    }
    return (NULL);
}
