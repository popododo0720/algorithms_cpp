#include "bit-manipulation.h"
#include "type-def.h"

#include <utility>

namespace bit_manipulation {
    type_def::Result<int> FindHighestSetBit(int n) {
        type_def::Result<int> result;
    
        if(n == 0) {
            result.status = type_def::STATUS::FAILURE;
            result.value = -1;
            return std::move(result);    
        }
    
        int position = 0;
        int num = 0;
    
        while(n>0) {
            n >>= 1;
            position += 1;
        }
    
        result.status = type_def::STATUS::SUCCESS;
        result.value = position - 1;
        return std::move(result);
    }
}
