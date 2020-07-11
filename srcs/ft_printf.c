#include "../includes/printf.h"
#include <stdarg.h>

int ft_printf(const char *src, ...)
{
	int		i;
	va_list my_list;

	i = 0;
	va_start(my_list, src);
	while(src[i])
	{
		if(src[i - 1] != '%' || i != 0)
			write(1, &src[i], 1);
		i++;
	}
}

int	main()
{
	ft_printf("Test \n nice\n");
}