#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
}

Cat::Cat(Cat const &c) : Animal(c) {
}

Cat::~Cat() {
}

Cat &Cat::operator=(Cat const &c) {
	this->Animal::operator=(c);
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
