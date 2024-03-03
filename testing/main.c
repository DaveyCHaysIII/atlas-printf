#include <stdio.h>
int _printf(const char* format, ...);

int main(void)
{
	char* s;

	s = "hi";
	_printf("%%");
	return(0);
}
