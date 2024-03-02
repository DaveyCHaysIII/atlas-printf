#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);

int print_char(int point, char* buffer, char a);
int print_str(int point, char* buffer, char* str);
int print_d(int point, char* buffer, int d);

int _strlen(char *str);
char _itoa(int *num);
int _putchar(char c);

#endif
