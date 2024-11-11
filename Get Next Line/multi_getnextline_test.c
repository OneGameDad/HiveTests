#include "get_next_line.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
    int		array[4096];
	char	*line;
	int		i;

    (void)argc;
	i = 1;
	while(i < argc)
	{
		array[i] = open(argv[i], O_RDONLY);
		++i;
	}
    i = 1;
    while (i < argc)
	{
		line = get_next_line(array[i]);
		if (line)
		{
			printf("File %d: %s\n", array[i], line);
			free(line);
		}
		++i;
		if (i == argc)
			i = 1;
	}
	i = 1;
	while (i < argc)
	{
		close(array[i]);
		++i;
	}
    return (0);
}
