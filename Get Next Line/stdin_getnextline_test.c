#include "get_next_line.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define MAX_CALLS 1000

int main(void)
{
	char	*line;

    //fd = open(0, O_RDONLY);
	line = get_next_line(STDIN_FILENO);
    //while (line != NULL)
	//{
	//	printf(" %s\n", line);
	//	free(line);
	//	line = get_next_line(42);
	//}
	printf(" %s\n", line);
    return (0);
}
