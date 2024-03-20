#include "s21_decimal.h"


// возвращает искомый бит
//00000000 00000000 00000000 00000000

int s21_get_bit(s21_decimal number, int index){
    int mask = 1u << (index%32);
    return (number.bits[index/32] & mask) != 0;
}

// установка бита по индексу
void s21_set_bit(s21_decimal *number, int index, int bit){
    int mask = 1u << (index%32);
    if (bit == 0)
        number -> bits[index/32] = number -> bits[index/32] & ~mask;
    else
        number -> bits[index/32] = number -> bits[index/32] | mask;
}


// получить знак возвращает 1 если положительное, 0 если отрицательное
int s21_get_sign(s21_decimal number){
    return (number.bits[3] & 1u << 31 != 0);
}

// установка знака
//////

// обнуление децимал

void s21_zero_decimal(s21_decimal *number){
    for (int i = 0; i < 4; i++){
        number->bits[i] = 0;
    }
}


