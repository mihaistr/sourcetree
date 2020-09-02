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

uint8_t bit_extraction(uint8_t number, uint8_t number_to_extract, uint8_t position) {///////////////////////////////////////////////////////////
    uint8_t mask = ~0b0;
    return (number & ()
}




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

uint8_t count_leading_Ones(uint8_t number) //////////////////////////////////
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



uint8_t setRightmostUnsetBit(uint8_t number)
{

    if (number == 0)
        return 1;

    // if all bits of 'n' are set 
    if ((number & (number + 1)) == 0)
        return number;

    // position of rightmost unset bit in 'n' 
    // passing ~n as argument 
    int pos = ~(log2(number & -number) + 1);

    // set the bit at position 'pos' 
    return ((1 << (pos - 1)) | number);
}




int main()
{

    return 0;
}