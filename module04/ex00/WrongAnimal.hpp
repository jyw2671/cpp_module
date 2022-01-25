#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal {

	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &c);
		WrongAnimal &operator=(const WrongAnimal &c);

		std::string const &getType() const;
		void makeSound() const;
};

#endif
