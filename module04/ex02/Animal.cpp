#include "Animal.hpp"

Animal::Animal() {
	this->type = "Some animal";
	std::cout << "Born " << this->type << std::endl;
}

Animal::Animal(std::string type) {
	this->type = type;
	std::cout << "Born " << this->type << std::endl;
}

Animal::~Animal() {
	std::cout << "Die " << this->type << std::endl;
}

Animal::Animal(Animal const &c) {
	*this = c;
}

Animal &Animal::operator=(Animal const &c) {
	this->type = c.getType();
	return (*this);
}

std::string const &Animal::getType() const {
	return (this->type);
}
