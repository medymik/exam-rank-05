#include "ASpell.hpp"

std::string const& ASpell::getName() const {
	return this->name;
}

std::string const& ASpell::getEffects() const {
	return this->effects;
}

ASpell::ASpell(std::string const& name, std::string const& effects) {
	this->name = name;
	this->effects = effects;
}

ASpell::ASpell(ASpell const& src) {
	*this = src;	
}

ASpell& ASpell::operator=(ASpell const& rhs) {
	if (this == &rhs)
		return *this;
	this->name = rhs.name;
	this->effects = rhs.effects;
	return *this;
}


void ASpell::launch(ATarget const& t) const {
	t.getHitBySpell(*this);
}