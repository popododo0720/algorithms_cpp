#ifndef TYPE_DEF_H
#define TYPE_DEF_H

namespace type_def {
    enum class STATUS {
        SUCCESS,
        FAILURE
    };

    template <typename T>
    struct Result {
        STATUS status;
        T value;
    };
}

#endif