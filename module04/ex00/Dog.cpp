#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
}

Dog::Dog(Dog const &c) : Animal(c) {
}

Dog::~Dog() {
}

Dog &Dog::operator=(Dog const &c) {
	this->Animal::operator=(c);
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Bow-wow!" << std::endl;
}
