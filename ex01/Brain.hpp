# ifndef _BRAIN_HPP
#define _BRAIN_HPP

#include <iostream>

/* *the diference between shallow and deep copy:
    shallow: create a copy of the instance if the have a pointer value once changed in the first it change in the second
    deep: same but create a complete copy that is seperated from the copied from
*/

class Brain
{
    public:
        Brain();
        Brain(const Brain &a);
        ~Brain();
        Brain& operator=( const Brain& src );
    protected:
        std::string idea[100];
};

#endif