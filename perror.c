perror: It displays the string you pass to it, followed by a colon, a space, and then the textual representation of the current errno value.

// C implementation to see how perror() function are used to print the error messages.
#include <stdio.h>
#include <errno.h>
#include <string.h>
  
int main ()
{
    FILE *fp;
    fp = fopen(" baboon.txt ", "r");
    printf("Value of errno: %d\n ", errno);
    perror("Message from perror");
    return 0;
}



#if
Value of errno: 3
Message from perror: No such file or directory
#endif


