#ifndef ASH_READLINE_H
#define ASH_READLINE_H 

#define ASH_RL_BUFSIZE 1024
#define ASH_TOK_BUFSIZE 64 
#define ASH_TOK_DELIM " \t\r\n\a"

void *ash_readline(void);
void **ash_split_line(void *line);

#endif