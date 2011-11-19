/*
Copyright Redshift Software, Inc. 2008-2010
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_LIBRARY_STD_STDCPP3_H
#define BOOST_PREDEF_LIBRARY_STD_STDCPP3_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

#define BOOST_LIBSTD_GNU BOOST_VERSION_NUMBER(0,0,0)

#if defined(__GLIBCPP__) || defined(__GLIBCXX__)
    #undef BOOST_LIBSTD_GNU
    #if defined(__GLIBCXX__)
        #define BOOST_LIBSTD_GNU BOOST_PREDEF_MAKE_YYYY_MM_DD(__GLIBCXX__)
    #elif
        #define BOOST_LIBSTD_GNU BOOST_PREDEF_MAKE_YYYY_MM_DD(__GLIBCPP__)
    #else
        #define BOOST_LIBSTD_GNU BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_LIBSTD_GNU,"GNU")

#endif