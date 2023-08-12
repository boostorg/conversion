// Copyright David Abrahams 2003.
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_IMPLICIT_CAST_DWA200356_HPP
#define BOOST_IMPLICIT_CAST_DWA200356_HPP

#include <boost/config.hpp>
#ifdef BOOST_HAS_PRAGMA_ONCE
# pragma once
#endif


#if defined(BOOST_NO_CXX11_CONSTEXPR)
#error C++03 support is removed in Boost.Conversion 1.84
#endif

namespace boost {

namespace detail {

template<class T> struct icast_identity
{
    typedef T type;
};

} // namespace detail

// implementation originally suggested by C. Green in
// http://lists.boost.org/MailArchives/boost/msg00886.php

// The use of identity creates a non-deduced form, so that the
// explicit template argument must be supplied
template <typename T>
constexpr T implicit_cast (typename boost::detail::icast_identity<T>::type x) {
    return x;
}

} // namespace boost


#endif // BOOST_IMPLICIT_CAST_DWA200356_HPP
