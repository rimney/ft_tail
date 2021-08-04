#include "header/tail.h"

int	ft_error_case(char *s1, char *s2)
{
	int i;

	if(ft_strcmp(s1, "-c") == 0 && ft_is_digit(s2) == 1)
		i = 1;
	if(ft_strcmp(s1, "-c") == 0 && ft_is_digit(s2) == 0)
		i = 0;
	return(i);
}

int	main(int argc, char **argv)
{
	int i;
	int fd;
	i = 1;
	while(i < argc)
	{
		if(ft_error_case(argv[1], argv[2]) == 0)
		{
			ft_put_error(argv[0], argv[2], 2);
			return(0);
		}
                if((fd = open(argv[i], O_RDONLY) == -1))
                {
                        if(errno == 2)
                        ft_put_error(argv[0], argv[i], 1);
                }	
		else
			ft_print_last_line(argv[i], argv[i], argc);
		i++;		
	}
}
