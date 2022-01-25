#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		srand(time(NULL));
		Animal *Animals[10];
		for (int i = 0; i < 10; ++i)
		{
			if (i % 2 == 0)
				Animals[i] = new Dog();
			else
				Animals[i] = new Cat();
		}
		std::cout << "--------    DEEP COPY    ---------" << std::endl;
		Dog copy(*(Dog *)Animals[4]);
		for (int i = 0; i < 100; ++i)
		{
			std::cout << copy.getBrain()->getIdea(i) << "    ";
			std::cout << ((Dog *)Animals[4])->getBrain()->getIdea(i) << std::endl;
		}
		std::cout << "----------    delete    ----------" << std::endl;
		for (int i = 0; i < 10; ++i)
		{
			delete Animals[i];
		}
	}
	// system("leaks ex01");
	return (0);
}
