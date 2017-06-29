#if HAVE_CONFIG_H
#  include <config.h>
#endif

#include <stdio.h>

#include "hello.h"

const char *greet = "Hello";

int
hello (const char *who)
{
    printf("%s, %s!\n", greet, who);
    return 0;
}
