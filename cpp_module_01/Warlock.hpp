#ifndef WARLOCK_HPP
# define WARLOCK_HPP
# include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {
	public:
		Warlock(std::string const& name, std::string const& title);
		std::string const& getName() const;

		std::string const& getTitle() const;

		void setTitle(std::string const& title);

		~Warlock();

		void introduce() const;

		void learnSpell(ASpell* s) {
			std::vector<ASpell*>::iterator it = spells.begin();
			while (it != spells.end()) {
				if ((*it)->getName() == s->getName()) {
					return;
				}
				it++;
			}
			spells.push_back(s);
		}

		void forgetSpell(std::string const& name) {
			std::vector<ASpell*>::iterator it = spells.begin();
			while (it != spells.end()) {
				if ((*it)->getName() == name) {
					spells.erase(it);
					return;
				}
				it++;
			}
		}

		void launchSpell(std::string const& name, ATarget const& t) {
			std::vector<ASpell*>::iterator it = spells.begin();
			while (it != spells.end()) {
				if ((*it)->getName() == name) {
					(*it)->launch(t);
					return;
				}
				it++;
			}
		}

	private:
		std::string name;
		std::string title;

		std::vector<ASpell*> spells;

		Warlock();
		Warlock(Warlock const& src);
		Warlock& operator=(Warlock const& rhs);
};
#endif
