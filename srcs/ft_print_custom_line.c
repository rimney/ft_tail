#include "../header/tail.h"

void    ft_print_custom_line(char *str, int n)
{
        int i;
	int fd;

        i = 0;
	fd = open(str, O_RDONLY);

	str = (char *)malloc(sizeof(char));

	while(fd > -1 && (read(fd, &str[i], 1)) > 0)
		i++;
	i = 0;
        while(str[i])
                i++;
        i -= n;
        while(str[i])
                write(1, &str[i++], 1);
}
