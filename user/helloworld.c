#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    char *print = "Hello World xv6\n";
    write(1, print, strlen(print));
    exit(0);
}