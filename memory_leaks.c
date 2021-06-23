#include <stdlib.h>

int main()
{
    char *x = malloc(10);
    x[10] = 'a';
    return 0;
} 


#if
==2116== 100 bytes in 1 blocks are definitely lost in loss record 1 of 1
==2116==    at 0x1B900DD0: malloc (vg_replace_malloc.c:131)
==2116==    by 0x804840F: main (in /home/cprogram/example1)
#endif
