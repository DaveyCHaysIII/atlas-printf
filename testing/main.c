int _printf(const char* format, ...);

int main(void)
{
	char name = 'c';
	_printf("hi %c\n", name);
	return(0);
}
