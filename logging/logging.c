#include "logging.h"

/* Logging Functions for Debugging */

void	init_log(void)
{
	logfd = fopen("log.txt", "a+");
}

void	log_action(FILE *fd, char *file, char *func, int line)
{
	fprintf(fd, "File: %s | Function: %s | Line: %d\n", file, func, line);
}

void	log_alloc(FILE *fd, char *file, char *func, int line)
{
	static int	count = 0;
	
	count++;
	fprintf(fd, "File: %s | Function: %s | Line: %d | Allocation: %d\n", file, func, line, count);
} 

void	close_log(void)
{
	fclose(logfd);
}
