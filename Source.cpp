#include <stdint.h>
#include "Header.h"
#include "math.h"

#define SET     1
#define NOT_SET 0

uint8_t set(uint8_t number, uint8_t position) {
    return (number | (1u << position));
}

uint8_t unset(uint8_t number, uint8_t position) {
    return (number & (~(1u << position)));
}

uint8_t read_one_bit(uint8_t number, uint8_t position) {
    return ((number & (1 << position)) ? SET : NOT_SET);
}

uint8_t toggle_one_bit(uint8_t number, uint8_t position) {
    return (n ^ (1u << position));
}

uint8_t bit_insertion(uint8_t number, uint8_t number_to_insert, uint8_t position) {
    return (number | (number_to_insert << position));
}

//uint8_t bit_extraction(uint8_t number, uint8_t number_to_extract, uint8_t position) {////////////////////////TO BE CONTINUED///////////////////////////////////
//    uint8_t mask = ~0b0;
//    return (number & ()....................
//}

uint8_t count_leading_Zeros(uint8_t number)
{
    int total_bits = sizeof(number) * 8;
    int result = 0;
    while (!(number & (1 << (total_bits - 1))))
    {
        number = (number << 1);
        result++;
    }

    return result;
}

uint8_t count_leading_Ones(uint8_t number)
{
    int total_bits = sizeof(number) * 8;
    int result = 0;
    while (!(number & (1 << (total_bits - 1))))
    {
        number = (number << 1);
    }
    while (number & (1 << (total_bits - 1)))
    {
        number = (number << 1);
        result++;
    }

    return result;
}

uint8_t set_rightmost_zero_to_one(uint8_t number) {
    if (number == 0) return 1;   // daca numarul este 0 
    return (number | (number + 1));

}

uint8_t set_rightmost_one_to_zero(uint8_t number) {
    if (number == 0) return 0;
    return (number & (number - 1));

}

uint8_t set_leftmost_zero_to_one(uint8_t number) {
    int position = 0;

    // gaseste pozitia celui mai din stanga 0 bit 
    for (int number2 = number, count = 0; number2 > 0; number2 >>= 1, count++) {
        if ((number2 & 1) == 0) position = count;
    }

    return (number | (1 << position));

}

uint8_t set_leftmost_one_to_zero(uint8_t number) {
    int position;

    if (number == 0) return 0;
    // gaseste pozitia celui mai din stanga 0 bit 
    for (int number2 = number, count = 0; number2 > 0; number2 >>= 1, count++) {
        if ((number2 & 1) == 1) position = count;
    }

    return (number ^ (1 << position));

}




int main()
{

    return 0;
}