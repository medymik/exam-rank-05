#include "SpellBook.hpp"

SpellBook::SpellBook() {

}

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell* s) {
    std::vector<ASpell*>::iterator it = spells.begin();
    while (it != spells.end()) {
        if ((*it)->getName() == s->getName()) {
            return;
        }
        it++;
    }
    spells.push_back(s);
}

void SpellBook::forgetSpell(std::string const & name) {
    std::vector<ASpell*>::iterator it = spells.begin();
    while (it != spells.end()) {
        if ((*it)->getName() == name) {
            spells.erase(it);
            return;
        }
        it++;
    }
}

ASpell* SpellBook::createSpell(std::string const & name) {
    std::vector<ASpell*>::iterator it = spells.begin();
    while (it != spells.end()) {
        if ((*it)->getName() == name) {
            return (*it)->clone();
        }
        it++;
    }
    return NULL;
}