/*
** Generic.h for za in /home/pasteu_e/rendu/PSU_2015_zappy/includes
**
** Made by Etienne Pasteur
** Login   <pasteu_e@epitech.net>
**
** Started on  Sun Jun 26 23:40:47 2016 Etienne Pasteur
** Last update Sat Jul  2 16:14:41 2016 Etienne Pasteur
*/

#ifndef PSU_2015_ZAPPY_GENERIC_H
# define PSU_2015_ZAPPY_GENERIC_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <ctype.h>
# include <time.h>
# include <sys/time.h>
# include <sys/resource.h>
# include <limits.h>
# include <signal.h>
# include <stdint.h>

# define lambda(ret, args, body) ({ ret l_anonymous_functions_name args body &l_anonymous_functions_name; })

# define COLOR_RED	"\x1B[31m"
# define COLOR_GRN	"\x1B[32m"
# define COLOR_YEL	"\x1B[33m"
# define COLOR_BLU	"\x1B[34m"
# define COLOR_MAG	"\x1B[35m"
# define COLOR_CYN	"\x1B[36m"
# define COLOR_WHT	"\x1B[37m"
# define COLOR_RESET	"\x1B[0m"

typedef char *string;

typedef enum	e_bool {
  false = 0,
  true = 1
}		bool;

typedef enum	e_LogLevel {
  INFORMATION,
  SUCCESS,
  WARNING,
  ERROR
}		LogLevel;

void		Log(LogLevel level, const string log, ...);
void		*xmalloc(size_t size);
void		*xcalloc(size_t nelem, size_t elsize);
void		xfree(void *ptr, size_t size);
string		vasprintf(const char *fmt, va_list ap);
string		asprintf(const char *fmt, ...);

#endif //PSU_2015_ZAPPY_GENERIC_H
