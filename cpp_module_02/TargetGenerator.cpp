#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget* s) {
    std::vector<ATarget*>::iterator it = spells.begin();
    while (it != spells.end()) {
        if ((*it)->getType() == s->getType()) {
            return;
        }
        it++;
    }
    spells.push_back(s);
}

void TargetGenerator::forgetTargetType(std::string const & s) {
        std::vector<ATarget*>::iterator it = spells.begin();
        while (it != spells.end()) {
            if ((*it)->getType() == s) {
                spells.erase(it);
                return;
            }
            it++;
        }
}

ATarget* TargetGenerator::createTarget(std::string const & t) {
    std::vector<ATarget*>::iterator it = spells.begin();
    while (it != spells.end()) {
        if ((*it)->getType() == t) {
            return (*it)->clone();
        }
        it++;
    }
    return NULL;
}