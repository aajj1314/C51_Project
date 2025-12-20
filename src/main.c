#include<8051.h>
void Delay(void)
{



}
void main()
{
    P0 = 0x55;
    P1 = 0x0f;
    P3 =0x01;
    TMOD = 0x01 ;

    Delay();
    P2=0xf0 ;
    while(1);


}