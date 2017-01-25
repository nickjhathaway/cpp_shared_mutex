// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifdef min
#if defined(_MSC_VER) && ! defined(__clang__)
_LIBCPP_WARNING("macro min is incompatible with C++.  Try #define NOMINMAX "
                "before any Windows header. #undefing min")
#else
#warning: macro min is incompatible with C++.  #undefing min
#endif
#undef min
#endif

#ifdef max
#if defined(_MSC_VER) && ! defined(__clang__)
_LIBCPP_WARNING("macro max is incompatible with C++.  Try #define NOMINMAX "
                "before any Windows header. #undefing max")
#else
#warning: macro max is incompatible with C++.  #undefing max
#endif
#undef max
#endif

