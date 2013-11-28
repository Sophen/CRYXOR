#ifndef CRYXOR_GLOBAL_HPP
#define CRYXOR_GLOBAL_HPP

#include <QtCore/qglobal.h>

#if defined(CRYXOR_LIBRARY)
#  define CRYXORSHARED_EXPORT Q_DECL_EXPORT
#else
#  define CRYXORSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // CRYXOR_GLOBAL_HPP
