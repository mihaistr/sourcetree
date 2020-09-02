#include <stdint.h>
#include "Header.h"
#include "math.h"

#define SET     1
#define NOT_SET 0
uint8_t set(uint8_t value, uint8_t position) {
	return (value | (1u << position));
}


uint8_t unset(uint8_t value, uint8_t position) {
	return (value & (~(1u << position)));
}


uint8_t read_one_bit(uint8_t value, uint8_t position) {
	return ((value & (1 << position)) ? SET : NOT_SET);
}

uint8_t toggle_one_bit(uint8_t value, uint8_t position) {
	value ^= 1 << position;
}

uint8_t count_leading_Zeros(uint8_t value)
{
    int total_bits = sizeof(value) * 8;
    int result = 0;
    while (!(value & (1 << (total_bits - 1))))
    {
        value = (value << 1);
        result++;
    }

    return result;
}

uint8_t count_leading_Ones(uint8_t value)
{
    int total_bits = sizeof(value) * 8;
    int result = 0;
    while (!(value & (1 << (total_bits - 1))))
    {
        value = (value << 1);
        result++;
    }

    return result;
}


uint8_t setRightmostUnsetBit(uint8_t value)
{
 
    if (value == 0)
        return 1;

    // if all bits of 'n' are set 
    if ((value & (value + 1)) == 0)
        return value;

    // position of rightmost unset bit in 'n' 
    // passing ~n as argument 
    int pos = ~(log2(value & -value) + 1);

    // set the bit at position 'pos' 
    return ((1 << (pos - 1)) | value);
}


int main()
{
  
    return 0;
}