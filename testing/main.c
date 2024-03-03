#include <stdio.h>
int _printf(const char* format, ...);

int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	_printf("%d\n", 44);
	printf("%d\n", 44);
	printf("Length:[%d, %i]\n", len2, len2);
        _printf("Negative:[%d]\n", -762534);
       	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("double percent: %%\n");
	printf("double percent: %%\n");
	return (0);
}
