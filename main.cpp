#include "mbed.h"

// main() runs in its own thread in the OS
int main()
{
    int a = 10, b = 20, c = 30;

    int d = a + b;

    printf ("%d\r\n",d);
}

