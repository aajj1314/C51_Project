#include<8051.h>

void main()
{
    P0 = 0x55;
    P1 = 0x0f;
    P3 =0x01;
    TMOD = 0x01 ;
    while(1);

}