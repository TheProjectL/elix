#ifndef ELIX_H_
#define ELIX_H_

/**************************************************************************//**
 * @file     elix.h
 * @brief    Elverse Corp. Elix graphical engine.
 * @version  V0.0.2
 * @date     24. October 2024
 * @author   Matvey Rybalkin
 ******************************************************************************/

#ifdef ELLIPSE_VERSION
#if ELLIPSE_VERSION >= 2.0

#ifdef ELLIPSE_LANGUAGE_CPP
extern "C" {
#endif 

// Include every header file

#ifdef ELLIPSE_LANGUAGE_CPP
}
#endif 

#else
#   error "[ELIX] ERROR: The minimum required version of the Ellipse framework is 2.0. Download it from `https://github.com/ElverseCorp/llibs`"
#endif
#else
#   error "[ELIX] ERROR: Must be used only with Ellipse framework. HELP: add #include <llibs.h> or #include <llibs.hpp>
#endif

#endif // ELIX_H_