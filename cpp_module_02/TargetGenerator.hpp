#ifndef TARGET_GENERATOR_HPP
# define TARGET_GENERATOR_HPP
#include "ATarget.hpp"
#include <iostream>
#include <vector>

class TargetGenerator {
    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget* s);

        void forgetTargetType(std::string const & s);

        ATarget* createTarget(std::string const & t);

    private:
        std::vector<ATarget*> spells;
        TargetGenerator(TargetGenerator const& t);
        TargetGenerator& operator=(TargetGenerator const& t);
};
#endif