#include <stdio.h>
#include <stdlib.h>

int showLog(char *log)
{
    #if DEBUG == TRUE
    printf("-- DEBUG: %s --", log);
    #endif
}
