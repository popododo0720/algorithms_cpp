#include <iostream>

#include "bit-manipulation.h"
#include "type-def.h"

// Remove-Item -Recurse -Force .\build\*
// cmake -B build -G Ninja
// ninja -C build
int main () {
    type_def::Result result = bit_manipulation::FindHighestSetBit(424);
    if(result.status == type_def::STATUS::SUCCESS) {
        std::cout << "result = " << result.value << std::endl;
    } else {
        std::cout << "ERROR: CountSetBits" << std::endl;
    }
}