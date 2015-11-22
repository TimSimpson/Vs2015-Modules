#if defined(LIBA_CREATE)
    #define LIBA_EXPORT __declspec(dllexport)
#else
    #define LIBA_EXPORT __declspec(dllimport)
#endif

#ifdef USE_MODULES
    #define DEFINE_MODULE(a) module a;
    #define LIBA_EXPORT_CLASS export class
    #define LIBA_EXPORT_FUNC export
    #define LIBA_EXPORT_NAMESPACE export
#else
    #define DEFINE_MODULE(a) /* a */
    #define LIBA_EXPORT_CLASS class LIBA_EXPORT
    #define LIBA_EXPORT_FUNC LIBA_EXPORT
    #define LIBA_EXPORT_NAMESPACE /* */
#endif
