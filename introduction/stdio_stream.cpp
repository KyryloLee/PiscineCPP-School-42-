#include <iostream>

int		main(void)
{
	char	buff[512];

	std::cout << "firs word ";
	std::cout << "second word ";
	std::cout << "third word " << std::endl;
	std::cout << "Hello World !" << std::endl;
	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entered: [" << buff << "]" << std::endl;

	return 0;
}
