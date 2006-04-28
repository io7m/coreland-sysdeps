#ifndef OPEN_H
#define OPEN_H

#include <sys/types.h>
#include <fcntl.h>

int open_ro(const char *);
int open_wo(const char *);
int open_excl(const char *);
int open_append(const char *);
int open_trunc(const char *);
int open_rw(const char *);
int open_creat(const char *);

#endif
