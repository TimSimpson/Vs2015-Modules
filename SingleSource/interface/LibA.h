#pragma once

#include "LibA_Config.h"

#ifdef USE_MODULES
    module LibA;
#endif

//DEFINE_MODULE(LibA)

LIBA_EXPORT_NAMESPACE
namespace LibA {

    LIBA_EXPORT_CLASS Apple
    {
    public:
        Apple(int c);

        int count() const;

        void count(int c);

    private:
        int c;
    };

    LIBA_EXPORT_FUNC int begin(const Apple & apple);

    LIBA_EXPORT_FUNC int end(const Apple & apple);

}
