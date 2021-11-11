#ifndef POLYMORPH
# define POLYMORPH
#include "ASpell.hpp"

class Polymorph: public ASpell {
    public:
        Polymorph();
        ~Polymorph();

        ASpell* clone() const;
    private:
};
#endif