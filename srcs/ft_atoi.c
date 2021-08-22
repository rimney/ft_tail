#include "../header/tail.h"

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int num;

	i = 0;
	num = 0;
	sign = 1;
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f' || str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return(num * sign);
}
