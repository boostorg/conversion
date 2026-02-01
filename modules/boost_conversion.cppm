module;

#ifdef __clang__
#   pragma clang diagnostic ignored "-Winclude-angled-in-module-purview"
#endif

#include <boost/config.hpp>
#include <boost/config/workaround.hpp>
#include <boost/assert/current_location.hpp>
#include <boost/pointer_cast.hpp>

#ifndef BOOST_CONVERSION_USE_STD_MODULE
#include <memory>
#include <typeinfo>
#include <type_traits>
#endif

#define BOOST_CONVERSION_INTERFACE_UNIT

export module boost.conversion;

#ifdef BOOST_CONVERSION_USE_STD_MODULE
import std;
#endif

import boost.assert;
import boost.throw_exception;

#include <boost/implicit_cast.hpp>
#include <boost/polymorphic_cast.hpp>
#include <boost/polymorphic_pointer_cast.hpp>
