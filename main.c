#include <stdio.h>
#include <string.h>
#include <HS_struct.h>


int main()
{
    printf("Student marks edit program.\n");
    printf("********************************* \n");
    printf("Options: \n");
    printf("1: Read and display \n");
    printf("2: Edit \n");
    printf("3: Sort \n");
    printf("********************************* \n");
    HS HS1;
    HS1.stt = 1;
    HS1.diem1 = 8;
    HS1.diem2 = 9;
    HS1.diem3 = 7;
    strcpy(HS1.ten , "Nguyen Van D");

}