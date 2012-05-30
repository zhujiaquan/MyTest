#include <stdio.h>
#include <stdlib.h>

void dump_log(char *log);
void dump_debug_log(char *log);
void dump_info_log(char *log);

void dump_log(char *log)
{
    #if DEBUG == TRUE
    dump_debug_log(log);
    #else
    dump_info_log(log);
    #endif
}

void dump_debug_log(char *log)
{
    printf("-- DEBUG: %s --", log);
}

void dump_info_log(char *log)
{
    printf("-- INFO: %s --", log);
}






