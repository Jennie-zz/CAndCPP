/* Generated by Cython 0.29.21 */

#ifndef __PYX_HAVE__CursorPy
#define __PYX_HAVE__CursorPy

#include "Python.h"

#ifndef __PYX_HAVE_API__CursorPy

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

#ifndef DL_IMPORT
  #define DL_IMPORT(_T) _T
#endif

__PYX_EXTERN_C int getCursorPosX(void);
__PYX_EXTERN_C int getCursorPosY(void);
__PYX_EXTERN_C int test(void);
__PYX_EXTERN_C int test2(void);

#endif /* !__PYX_HAVE_API__CursorPy */

/* WARNING: the interface of the module init function changed in CPython 3.5. */
/* It now returns a PyModuleDef instance instead of a PyModule instance. */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC initCursorPy(void);
#else
PyMODINIT_FUNC PyInit_CursorPy(void);
#endif

#endif /* !__PYX_HAVE__CursorPy */
