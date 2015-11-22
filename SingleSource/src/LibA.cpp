#define LIBA_CREATE
#include "LibA.h"

namespace LibA {

    Apple::Apple(int c)
    : c(c)
    {}

    int Apple::count() const {
        return c;
    }

    void Apple::count(int c) {
        this->c = c;
    }


    int begin(const Apple & apple) {
        return 0;
    }

    int end(const Apple & apple) {
        return apple.count();
    }

}
