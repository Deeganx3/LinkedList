/*
** Generic.c for zapppy in /home/pasteu_e/rendu/PSU_2015_zappy/srcs/Generic
**
** Made by Etienne Pasteur
** Login   <pasteu_e@epitech.net>
**
** Started on  Sun Jun 26 15:54:43 2016 Etienne Pasteur
** Last update Sat Jul  2 16:17:49 2016 Etienne Pasteur
*/

#include "Generic.h"

uint64_t	on_heap = 0;

void		*xmalloc(size_t size) {
  void		*ret;

  if ((ret = malloc(size)) == NULL) {
    Log(ERROR, (string const) "Failed to allocate memory. Abording.");
    exit(EXIT_FAILURE);
  }
  on_heap += size;
  return (ret);
}

void		*xcalloc(size_t nelem, size_t elsize) {
  void		*ret;

  ret = xmalloc(nelem * elsize);
  bzero(ret, nelem * elsize);
  return (ret);
}

void		xfree(void *ptr, size_t size) {
  if (ptr == NULL)
    return;
  on_heap -= size;
  free(ptr);
}

string		vasprintf(const char *fmt, va_list ap) {
  va_list	apcpy;
  size_t	size;
  char		*ret;

  va_copy(apcpy, ap);
  size = (size_t) (vsnprintf(NULL, 0, fmt, apcpy) + 1);
  va_end(apcpy);
  ret = xcalloc(1, size);
  if (vsnprintf(ret, size, fmt, ap) == -1)
    return (NULL);
  return (ret);
}

string		asprintf(const char *fmt, ...) {
  string	ret;
  va_list	ap;

  va_start(ap, fmt);
  ret = vasprintf(fmt, ap);
  va_end(ap);
  return (ret);
}
