
#ifndef BOOST_MPL_HAS_KEY_FWD_HPP_INCLUDED
#define BOOST_MPL_HAS_KEY_FWD_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2003-2004
// Copyright David Abrahams 2003-2004
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Id: has_key_fwd.hpp,v 1.1 2010/02/14 10:17:19 arielj Exp $
// $Date: 2010/02/14 10:17:19 $
// $Revision: 1.1 $

namespace boost { namespace mpl {

template< typename Tag > struct has_key_impl;
template< typename AssociativeSequence, typename Key > struct has_key;

}}

#endif // BOOST_MPL_HAS_KEY_FWD_HPP_INCLUDED