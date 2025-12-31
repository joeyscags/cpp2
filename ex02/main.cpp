#include "Fixed.hpp"

int	main(void)
{
	Fixed	a(10);
	Fixed	b(20);
	Fixed	c(10);

	std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;

	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a >= c: " << (a >= c) << std::endl;
	std::cout << "a <= c: " << (a <= c) << std::endl;
	std::cout << "a == c: " << (a == c) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;

	return (0);
}
