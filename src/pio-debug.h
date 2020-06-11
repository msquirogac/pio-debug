#if defined(PLATFORMIO) && defined(__PLATFORMIO_BUILD_DEBUG__)
    #define PIODEBUG(x) x
#else
    #define PIODEBUG(x)
#endif
