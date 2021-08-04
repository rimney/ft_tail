#include "../header/tail.h"

int	ft_is_digit(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		if(!(str[i] >= '0' && str[i] <= '9'))
			return(0);
		i++;
	}
	return(1);
}
