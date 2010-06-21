#ifndef __REDIS_H
#define __REDIS_H

#include <string.h>

int stringmatchlen(const char *pattern, int patternLen,
        const char *string, int stringLen, int nocase);
int stringmatch(const char *pattern, const char *string, int nocase);

#endif
