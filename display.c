#include <stdio.h>
#include <string.h>
#include <HS_struct.h>

void display(HS hs, HS *ptr)
{
    printf("STT: ", &hs.stt);
    printf("\nTen: ", &hs.ten);
}

int main()
{
    HS hs1;
    HS *ptr;
    ptr = &hs1;
    hs1.stt = 1;
    strcpy( hs1.ten, "Tran Van A");
    display(hs1,ptr);
}