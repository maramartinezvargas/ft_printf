
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char	name;
	int		age;
	int		len;

	name = 'M';
	age = 36;
	len = ft_printf("Hola soy %c y tengo %d años.", name, age);
	printf("Longitud: %d", len);
	ft_printf("Hola soy %c y tengo %d años.", 'm', 40);
	return (0);
}
