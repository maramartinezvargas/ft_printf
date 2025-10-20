
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char	name;
	int		age;
	int		len;

	name = 'M';
	age = 36;
	len = ft_printf("Hola soy %c y tengo %d años.", name, 36);
	ft_printf("\nLongitud: %d", len);
	return (0);
}
