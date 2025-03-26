#include "bit-manipulation.h"
#include "type-def.h"

#include <utility>
#include <vector>

namespace bit_manipulation {
    type_def::Result<std::vector<int>> GenerateGrayCode(int n) {
        type_def::Result<std::vector<int>> result;

        if(n==0) {
            result.status = type_def::STATUS::FAILURE;
            result.value = {};
            return std::move(result);
        }

        int tmp = 1 << n;
        std::vector<int> result_vec(tmp, 0);

        for(int i = 0 ; i < tmp ; i++) {
            int gray = i ^ (i >>1);
        }
    }
}