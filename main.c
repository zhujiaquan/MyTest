#include <stdio.h>
#include <stdlib.h>

void Dump(char *log)
{
    printf("-- DEBUG: %s --\r\n", log);
}

int main(int argc, char* argv[])
{
    Dump("Hello,World");
    
    return EXIT_SUCCESS;
}
