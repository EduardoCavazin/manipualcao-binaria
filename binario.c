#include <stdio.h>

int setBit(int num, int bit, int valorBit){
    num &= ~(0x01 << bit);
    num |= (valorBit << bit);
    return num;
}

int getBit(int num, int bit){
    return (num >> bit) & 0x01;
}

int setBitOn(int num, int firstBit, int lastBit, int valueBit){
    int i;
    for(i = firstBit; i <= lastBit; i++){
        num = setBit(num, i, valueBit);
    }
    return num; 
}

int main(void){
    unsigned num = 0x00000000;
    
    num = setBitOn(num, 1, 5, 1);
    printf("0x%X\n", num);

    num = setBit(num, 0, 0);
    printf("0x%X\n", num);

    return 0;
}