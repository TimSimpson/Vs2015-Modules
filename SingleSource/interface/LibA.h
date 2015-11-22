#if defined(USE_MODULES) && !defined(LIBA_CREATE)
    import LibA;
#elif !defined(FILE_GUARD_LIBA_H)
#define FILE_GUARD_LIBA_H

#include "LibA_Config.h"

DEFINE_MODULE(LibA)

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

#endif
