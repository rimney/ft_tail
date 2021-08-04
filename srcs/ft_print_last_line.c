#include "../header/tail.h"

void	ft_print_pname(char *fname)
{
	ft_putstr("==>");
	ft_putstr(fname);
	ft_putstr(" <==\n");
}

void	ft_print_index(char *str, int index)
{
	while(str[index])
		write(1, &str[index++], 1);
}

void	ft_print_last_line(char *str, char *fname, unsigned int n)
{
	int i;
	int last;
	int index;
	int fd;

	i = 0;
	last = 0;
	fd = open(str, O_RDONLY);
	        str = (char *)malloc(sizeof(char));
	while(read(fd, &str[i], 1))
		i++;
	i = 0;
	while(str[i])
		i++;
	while(i && last < 11)
	{
		if(str[i] == '\n')
			last++;
		i--;
	}
	index = i + 2;
	if(n > 2)
	{
		ft_print_pname(fname);
		ft_print_index(str, index);
	}
	else
	ft_print_index(str, index);
}
