#include "Fixed.hpp"

int	main(void)
{
	Fixed	a;
	Fixed	c;
	Fixed	d;

	a.setRawBits(42);
	Fixed b(a);
	c = b;
	d = c = a;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << d.getRawBits() << std::endl;
	return (0);
}
