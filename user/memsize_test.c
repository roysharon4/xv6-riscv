#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    printf("Initial memory size: %d bytes\n", memsize());
    void *allocation = malloc(20 * 1024);
    printf("Memory size after malloc: %d bytes\n", memsize());
    free(allocation);
    printf("Memory size after free: %d bytes\n", memsize());

    exit(0, "");
}
