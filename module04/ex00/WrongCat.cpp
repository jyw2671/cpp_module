#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
}

WrongCat::WrongCat(WrongCat const &c) : WrongAnimal(c) {
}

WrongCat::~WrongCat() {
}

WrongCat &WrongCat::operator=(WrongCat const &c) {
	this->WrongAnimal::operator=(c);
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "Meow!!" << std::endl;
}
