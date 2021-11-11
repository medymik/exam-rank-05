#ifndef WARLOCK_HPP
# define WARLOCK_HPP
# include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
	public:
		Warlock(std::string const& name, std::string const& title);
		std::string const& getName() const;

		std::string const& getTitle() const;

		void setTitle(std::string const& title);

		~Warlock();

		void introduce() const;

		void learnSpell(ASpell* s) {
			sp.learnSpell(s);
		}

		void forgetSpell(std::string const& name) {
			sp.forgetSpell(name);
		}

		void launchSpell(std::string const& name, ATarget const& t) {
			ASpell* sl = sp.createSpell(name);
			if (sl) {
				sl->launch(t);
			}
		}

	private:
		std::string name;
		std::string title;

		std::vector<ASpell*> spells;

		SpellBook sp;

		Warlock();
		Warlock(Warlock const& src);
		Warlock& operator=(Warlock const& rhs);
};
#endif
