#ifndef COUNTING_SET_BITS_H
#define COUNTING_SET_BITS_H

#include "type-def.h"

namespace bit_manipulation {
    type_def::Result<int> CountSetBits(int n);
    type_def::Result<int> FindHighestSetBit(int n);
}

#endif

