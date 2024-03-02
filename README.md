# atlas-printf
repo for the printf project

---these changes made from daveybranch- please delete/clobber before final

Random notes: 

```

-----

write()- how we write to the standard output

ssize_t write (int fd, const void *buf, size_t count);

fd = format (0 for stdin, 1 for stdout, 2 for stderr)
*buf = the buffer you're pulling from (ex. char buffer = "I am a buffer")
count= number of bytes you'd like to write (usually strlen(buffer))

ex. 

char charbuffer = "I am 5 years old"

write(1, charbuffer, _strlen(charbuffer))
//output: "I am 5 years old"

-----

you can pass va_list down into another function by using va_copy

ex.
	void func(int i, ...)
	{
			
		va_list args;

		va_start(args, i)

		va_list copy_args;          //empty va_list variable

		va_copy(copy_args, args);   //copies contents of va_list args to copy_args

		another_func(copy_args);    //you'll have to call va_end(copy_args) within this function

		va_end(args)

	}

```
