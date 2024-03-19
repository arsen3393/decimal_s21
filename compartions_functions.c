#include "s21_decimal.h"
// Функция равно
// return 0 - если не равны FALSE
// return 1 - если равны TRUE
int s21_is_equal(s21_decimal number_1, s21_decimal number_2){
    int exit = 1;
    for (int i= 0; i < 4; i ++){
        if (number_1.bits[i] != number_2.bits[i])
            exit = 0;
    }
    return exit;
}// НАДО ИСПРАВИТЬ!