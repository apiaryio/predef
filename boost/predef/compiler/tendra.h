/*
Copyright Redshift Software, Inc. 2008-2010
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_TENDRA_H
#define BOOST_PREDEF_COMPILER_TENDRA_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

#define BOOST_CXX_TENDRA BOOST_VERSION_NUMBER(0,0,0)

#if defined(__TenDRA__)
    #undef BOOST_CXX_TENDRA
    #define BOOST_CXX_TENDRA BOOST_VERSION_NUMBER(0,0,1)
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_CXX_TENDRA,"Tendra")

#endif