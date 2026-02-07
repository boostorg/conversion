module;

#include <boost/config.hpp>
#include <boost/config/workaround.hpp>
#include <boost/throw_exception.hpp>
#include <boost/assert.hpp>
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

#ifdef __clang__
#   pragma clang diagnostic ignored "-Winclude-angled-in-module-purview"
#endif

#include <boost/implicit_cast.hpp>
#include <boost/polymorphic_cast.hpp>
#include <boost/polymorphic_pointer_cast.hpp>
