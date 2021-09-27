#include "syscall.h"
void print(char c, int n)
{
int i=0;
#if 0
    for (i = 0; i < n; i++) {
        PutChar(c + i);
    }
    PutChar('\n');
#endif
}

int
main()
{
    Halt();
}