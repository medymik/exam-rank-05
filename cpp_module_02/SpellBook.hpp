#ifndef SPELL_BOOK_HPP
# define SPELL_BOOK_HPP
# include "ASpell.hpp"
# include <iostream>
#include <vector>

class SpellBook {
    public:
        SpellBook();

        ~SpellBook();

        void learnSpell(ASpell* s);

        void forgetSpell(std::string const & name);

        ASpell* createSpell(std::string const & name);
    private:
        std::vector<ASpell*> spells;

        SpellBook& operator=(SpellBook const& rhs);
        SpellBook(SpellBook const& src);
};
#endif