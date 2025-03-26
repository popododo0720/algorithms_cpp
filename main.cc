#include <iostream>

#include "bit-manipulation.h"
#include "type-def.h"
/*
cmake --build build --target clear
cmake -B build -G Ninja
ninja -C build
./build/algorithms_cpp
*/
int main () {
    type_def::Result result = bit_manipulation::FindHighestSetBit(34537);
    if(result.status == type_def::STATUS::SUCCESS) {
        std::cout << "result = " << result.value << std::endl;
    } else {
        std::cout << "ERROR: CountSetBits" << std::endl;
    }
}