#include<8051.h>

void main()
{
    P0 = 0x55;
    P1 = 0x0f;
    while(1);
}