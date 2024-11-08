#include "get_next_line.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define MAX_CALLS 1000

int main(int argc, char **argv)
{
    int 	fd;
	char	*line;
	int		i;

    (void)argc;
	i = 0;
    fd = open(argv[1], O_RDONLY);
    while (i < MAX_CALLS)
	{
		line = get_next_line(fd);
		if (!line)
			break;
		printf("Line %d: %s\n", i, line);
		free(line);
		++i;
	}
    close(fd);
    return (0);
}
