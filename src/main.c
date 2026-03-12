#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/base.h"

int base();

int main()
{
    int result = base();
    if (result == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    return 0;
}
