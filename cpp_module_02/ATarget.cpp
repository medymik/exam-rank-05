#include "ATarget.hpp"


std::string const& ATarget::getType() const {
	return this->type;
}

ATarget::ATarget(std::string const& type) {
	this->type = type;
}

ATarget::ATarget(ATarget const& src) {
	*this = src;
}

ATarget& ATarget::operator=(ATarget const& rhs) {
	if (this != &rhs) {
		this->type = rhs.type;
	}
	return *this;
}

void ATarget::getHitBySpell(ASpell const& spell) const {
	std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}
