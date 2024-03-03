#include <stdio.h>
int _printf(const char* format, ...);

int main(void)
{
	char* s;

	s = "hi";
	_printf("%s, %c%c%c\n", s, 'a', 'b', 'c');
	return(0);
}
