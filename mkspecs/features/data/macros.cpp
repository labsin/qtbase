// Keep this file small. The pre-processed contents are eval'd by qmake.
#ifdef _MSC_VER
QMAKE_MSC_VER = _MSC_VER
QMAKE_MSC_FULL_VER = _MSC_FULL_VER
#endif
#ifdef __INTEL_COMPILER
QMAKE_ICC_VER = __INTEL_COMPILER
QMAKE_ICC_UPDATE_VER = __INTEL_COMPILER_UPDATE
#endif
#ifdef __APPLE_CC__
QMAKE_APPLE_CC = __APPLE_CC__
#endif
#ifdef __clang__
#ifdef __APPLE_CC__
QT_APPLE_CLANG_MAJOR_VERSION = __clang_major__
QT_APPLE_CLANG_MINOR_VERSION = __clang_minor__
QT_APPLE_CLANG_PATCH_VERSION = __clang_patchlevel__
#else
QT_CLANG_MAJOR_VERSION = __clang_major__
QT_CLANG_MINOR_VERSION = __clang_minor__
QT_CLANG_PATCH_VERSION = __clang_patchlevel__
#endif
#endif
#ifdef __GNUC__
QT_GCC_MAJOR_VERSION = __GNUC__
QT_GCC_MINOR_VERSION = __GNUC_MINOR__
QT_GCC_PATCH_VERSION = __GNUC_PATCHLEVEL__
#endif
