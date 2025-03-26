#include "bit-manipulation.h"
#include "type-def.h"

// 비트에서 1 개수 세는거
namespace bit_manipulation {
    type_def::Result<int> CountSetBits(int n) {
        type_def::Result<int> result;

        if (n < 0) {
            result.status = type_def::STATUS::FAILURE;
            result.value = -1;  
            return result;
        }

        int count = 0;
        while(n>0) {
            n &= n -1;
            count+=1;
        }

        result.status = type_def::STATUS::SUCCESS;
        result.value = count;
        return result;
    }
}