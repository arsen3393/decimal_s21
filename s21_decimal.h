#ifndef S21_DECIMAL_H
#define S21_DECIMAL_H

#include <stdio.h>



typedef struct{
    unsigned int bits[4];
} s21_decimal;

typedef struct{
    unsigned int bits[8];
} s21_big_decimal;


// get_set functions

int s21_get_bit(s21_decimal number, int index);
int s21_get_sign(s21_decimal number);
void s21_set_bit(s21_decimal *number, int index, int bit);
void s21_zero_decimal(s21_decimal * number);
// get_set functions



//arithemtic functions

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

// arithmetic functions


// converters functions

// converters functions

// comparsions functions
int s21_is_equal(s21_decimal value1, s21_decimal number2);

// compartions functions




#endif //S21_DECIMAL_H