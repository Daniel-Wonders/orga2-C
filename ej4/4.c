#include <stdio.h>
#include <stdint.h>

int main(void){

    int8_t t = 1;
    int16_t t2 = 2 ;
    int32_t t3 = 1 ;
    int64_t t4 = 1;
    uint8_t t5 = 1;
    uint16_t t6 = 1 ;
    uint32_t t7 = 1 ;
    uint64_t t8 = 1;

    printf("size:%llx, value:%x\n",sizeof(t) ,t);
    printf("size:%llx, value:%x\n",sizeof(t2) ,t2);



    return 0;
}