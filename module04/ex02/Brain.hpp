#if !defined(BRAIN_HPP)
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain();
		Brain(Brain const &c);
		~Brain();
		Brain &operator=(Brain const &c);

		std::string const &getIdea(int index) const;
};

#endif
