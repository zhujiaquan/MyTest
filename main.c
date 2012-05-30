#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
typedef int bool;

#define TRUE 1
#define true 1
#define FALSE 0
#define false 0

#define DEBUG true

static void Dump(char *log)
{
    #if DEBUG == true
	printf("-- DEBUG: %s -- \r\n", log);
    #else
	printf("-- INFO: %s -- \r\n", log);
    #endif
}

int main(int argc, char* argv[])
{
    Dump("Hello,World");
    
    return EXIT_SUCCESS;
}
