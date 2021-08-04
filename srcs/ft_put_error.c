#include "../header/tail.h"

void	ft_put_error(char *pname, char *str, int error)
{
	if(error == 1)
	{
		ft_putstr(pname);
		write(2, ": ", 2);
		ft_putstr(str);
		write(2, ": ", 2);
		ft_putstr("No such file or directory\n");
	}
	else if(error == 2)
	{
		ft_putstr(pname);
		write(1, "; ", 2);
		ft_putstr("illegal offset -- ");
		ft_putstr(str);
		write(1, "\n", 1);
	}	

	
}
