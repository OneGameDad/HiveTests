#ifndef LOGGING_H
# define LOGGING_H

/* Global for debug log */
FILE	*logfd;
#define LOG_ACTION(FD) log_action(FD, __FILE__, __func__, __LINE__);
#define LOG_ALLOC(FD) log_alloc(FD, __FILE__, __func__, __LINE__);

void	init_log(void);
void	log_action(FILE *fd, char *file, char *func, int line);
void	log_alloc(FILE *fd, char *file, char *func, int line)
void	close_log(void);

#endif
