#ifndef DRIVER_VERSION_H
#define DRIVER_VERSION_H

/// Conventional string-ification macro.
// From: http://stackoverflow.com/questions/5256313/c-c-macro-string-concatenation
#if !defined(PSM_DRIVER_STRINGIZE)
    #define PSM_DRIVER_STRINGIZEIMPL(x) #x
    #define PSM_DRIVER_STRINGIZE(x)     PSM_DRIVER_STRINGIZEIMPL(x)
#endif

#define PSM_DRIVER_VERSION_MAJOR   1
#define PSM_DRIVER_VERSION_MINOR   3
#define PSM_DRIVER_VERSION_HOTFIX  0

/// "Major.Minor"
#if !defined(PSM_DRIVER_VERSION_STRING)
    #define PSM_DRIVER_VERSION_STRING  PSM_DRIVER_STRINGIZE(PSM_DRIVER_MAJOR_VERSION.PSM_DRIVER_MINOR_VERSION)
#endif

/// "Major.Minor.Hotfix"
#if !defined(PSM_DRIVER_DETAILED_VERSION_STRING)
    #define PSM_DRIVER_DETAILED_VERSION_STRING  PSM_DRIVER_STRINGIZE(PSM_DRIVER_MAJOR_VERSION.PSM_DRIVER_MINOR_VERSION.PSM_DRIVER_VERSION_HOTFIX)
#endif

#endif // DRIVER_VERSION_H
