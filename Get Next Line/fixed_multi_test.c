#include "get_next_line.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
    int		a =open("a.txt", O_RDONLY);

    int	b =open("b.txt", O_RDONLY);
    int	c =open("c.txt", O_RDONLY);
	char	*line;

	line = get_next_line(a);
    while (line != NULL)
	{
		printf(" %s\n",  line);
		free(line);

		line = get_next_line(b);
		printf(" %s\n",  line);
		free(line);

		line = get_next_line(c);
		printf(" %s\n",  line);
		free(line);
		line = get_next_line(a);
	}
	close(a);
	close(b);
	close(c);
    return (0);
}
