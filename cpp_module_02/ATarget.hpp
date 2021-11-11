#ifndef ATARGET_HPP
# define ATARGET_HPP
# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget {
	public:

		std::string const& getType() const;

		virtual ATarget* clone() const = 0;

		ATarget(std::string const& type);

		ATarget(ATarget const& src);

		ATarget& operator=(ATarget const& rhs);

		void getHitBySpell(ASpell const& spell) const;
	protected:
		std::string type;
};
#endif
