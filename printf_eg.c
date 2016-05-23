#include <stdio.h>
#include <stdarg.h>
#include "libft.h"

/*
int __printf(const char *format, ...)
{
	va_list arg;
	int		done;

	va_start (arg, format);
	done = vfprintf (stdout, format, arg);
	va_end (arg);

	return (done);
}
*/

void	Myprintf(char *, ...);
char	*convert(unsigned int, int);

int		main(void)
{
	Myprintf(" WWW.FIRMCODES.COM \n %d", 9);
	return (0);
}

void	Myprintf(char *format, ...)
{
	char	*traverse;
	int		i;
	char	*s;

	//Module 1: Initializing Myprintf's arguments
	va_list			arg;
	va_start(arg, format);

	traverse = format;
	while (*traverse != '\0')
	{
		while (*traverse != '%')
		{
			putchar(*traverse);
			traverse++;
		}
		traverse++;

		//Module 2: Fetching and executing arguments
		while (*traverse)
		{
			if (ft_strchr(traverse, 'c'))
			{
				i = va_arg(arg, int); //Fetch char argument
				putchar(i);
			}
			if (ft_strchr(traverse, 'd'))
			{
				i = va_arg(arg, int);
					   if (i < 0)
					   {
						   i = -i;
						   putchar('-');
					   }
					   puts(convert(i, 10));
			}
			if (ft_strchr(traverse, 'o'))
			{
				i = va_arg(arg, unsigned int);
				puts(convert(i, 8));
			}
			if (ft_strchr(traverse, 's'))
			{
				s = va_arg(arg, char *);
				puts(s);
			}
			if (ft_strchr(traverse, 'x'))
			{
				i = va_arg(arg, unsigned int);
				puts(convert(i, 16));
			}
		traverse++;
		}
	}

	//Module 3: Closing argument list to necessary clean-up
	va_end(arg);
}

char	*convert(unsigned int num, int base)
{
	static char	Representation[] = "0123456789ABCDEF";
	static char	buffer[50];
	char		*ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = Representation[num%base];
		num /= base;
	}while (num != 0);
	return (ptr);
}
