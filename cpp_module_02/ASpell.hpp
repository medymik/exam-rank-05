#ifndef ASPELL_HPP
# define ASPELL_HPP
# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell {
	public:

		std::string const& getName() const;

		std::string const& getEffects() const;

		virtual ASpell* clone() const = 0;

		ASpell(std::string const& name, std::string const& effects);

		ASpell(ASpell const& src);

		ASpell& operator=(ASpell const& rhs);

		void launch(ATarget const& t) const;
	
	protected:
		std::string name;
		std::string effects;
};
#endif
