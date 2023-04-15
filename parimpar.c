#include <stdio.h>

int getBit(int num, int bit){
    return (num >> bit) & 0x01;
}

int main(){
    int num;

    printf("Digite um numero decimal: ");
    scanf("%d", &num);

    int bit_0 = getBit(num, 0);
    if(bit_0 == 0){
        printf("Ultimo bit: %d\n", bit_0);
        printf("O numero %d e par.\n", num);
    }else{
        printf("Ultimo bit: %d\n", bit_0);
        printf("O numero %d e impar.\n", num);
    }
    return 0;
}