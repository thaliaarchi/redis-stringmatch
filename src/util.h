#ifndef __REDIS_UTIL_H
#define __REDIS_UTIL_H

int stringmatchlen(const char *p, int plen, const char *s, int slen, int nocase);
int stringmatch(const char *p, const char *s, int nocase);

#endif
