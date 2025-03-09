#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for(int i = 1; av[i]; i++)
	{
		std::string message = av[i];
		for (size_t i = 0; i < message.length(); i++)
			message[i] = std::toupper(message[i]);
		std::cout << message << " ";
	}
	std::cout << std::endl; 
	return (0);
}