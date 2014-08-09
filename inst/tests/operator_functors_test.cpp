//
//  operator_functor_tests.cpp
//
// Streamulus Copyright (c) 2012 Irit Katriel. All rights reserved.
//
// This file is part of Streamulus.
// 
// Streamulus is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Streamulus is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Streamulus.  If not, see <http://www.gnu.org/licenses/>.
//


#include "operator_functors_test.hpp"
#include "operators.h"

namespace streamulus
{
    
    void operator_functors_unit_tests::Run()
    {    
        namespace bp = boost::proto;

        int i0 = 7, j0 = 2;
        int i, j;
        int iexp, jexp;
        int *pi = &i;
        
        // Note: operators don't actually modify the stream, just generate a modified output. 
        // So we compare the vale of the "stream" with unmodified input values

        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::negate>()(i) == -iexp); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::negate>()(-i) == iexp); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::dereference>()(pi) == iexp); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::complement>()(i) == ~iexp); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::logical_not>()(i) == !iexp); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::pre_inc>()(i) == ++iexp); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::pre_dec>()(i) == --iexp); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::post_inc>()(i) == iexp++); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::post_dec>()(i) == iexp--); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::shift_left>()(i,j) == (iexp<<jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::shift_left>()(j,i) == (jexp<<iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::shift_right>()(i,j) == (iexp>>jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::shift_right>()(j,i) == (jexp>>iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::multiplies>()(i,j) == (iexp*jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::multiplies>()(j,i) == (jexp*iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::divides>()(i,j) == (iexp/jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::divides>()(j,i) == (jexp/iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::modulus>()(i,j) == (iexp%jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::modulus>()(j,i) == (jexp%iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::plus>()(i,j) == (iexp+jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::plus>()(j,i) == (jexp+iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::minus>()(i,j) == (iexp-jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::minus>()(j,i) == (jexp-iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::less>()(i,j) == (iexp<jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::less>()(j,i) == (jexp<iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::greater>()(i,j) == (iexp>jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::greater>()(j,i) == (jexp>iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::less_equal>()(i,j) == (iexp<=jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::less_equal>()(j,i) == (jexp<=iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::greater_equal>()(i,j) == (iexp>=jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::greater_equal>()(j,i) == (jexp>=iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::equal_to>()(i,j) == (iexp==jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::equal_to>()(j,i) == (jexp==iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::not_equal_to>()(i,j) == (iexp!=jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::not_equal_to>()(j,i) == (jexp!=iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::logical_or>()(i,j) == (iexp||jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::logical_or>()(j,i) == (jexp||iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::logical_and>()(i,j) == (iexp&&jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::logical_and>()(j,i) == (jexp&&iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::bitwise_or>()(i,j) == (iexp|jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::bitwise_or>()(j,i) == (jexp|iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::bitwise_and>()(i,j) == (iexp&jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::bitwise_and>()(j,i) == (jexp&iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::bitwise_xor>()(i,j) == (iexp^jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::bitwise_xor>()(j,i) == (jexp^iexp)); Check(i==i0); Check(j==j0);
                
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::assign>()(i,j) == (iexp=jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::assign>()(j,i) == (jexp=iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::shift_left_assign>()(i,j) == (iexp<<=jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::shift_left_assign>()(j,i) == (jexp<<=iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::shift_right_assign>()(i,j) == (iexp>>=jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::shift_right_assign>()(j,i) == (jexp>>=iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::multiplies_assign>()(i,j) == (iexp*=jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::multiplies_assign>()(j,i) == (jexp*=iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::divides_assign>()(i,j) == (iexp/=jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::divides_assign>()(j,i) == (jexp/=iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::modulus_assign>()(i,j) == (iexp%=jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::modulus_assign>()(j,i) == (jexp%=iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::plus_assign>()(i,j) == (iexp+=jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::plus_assign>()(j,i) == (jexp+=iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::minus_assign>()(i,j) == (iexp-=jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::minus_assign>()(j,i) == (jexp-=iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::bitwise_and_assign>()(i,j) == (iexp&=jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::bitwise_and_assign>()(j,i) == (jexp&=iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::bitwise_or_assign>()(i,j) == (iexp|=jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::bitwise_or_assign>()(j,i) == (jexp|=iexp)); Check(i==i0); Check(j==j0);
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::bitwise_xor_assign>()(i,j) == (iexp^=jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::bitwise_xor_assign>()(j,i) == (jexp^=iexp)); Check(i==i0); Check(j==j0);
        
        // subscript_func
        
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::if_else_>()(true,i,j)  == (true ? iexp : jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::if_else_>()(true,j,i)  == (true ? jexp : iexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::if_else_>()(false,i,j) == (false ? iexp : jexp)); Check(i==i0); Check(j==j0);
        i=iexp=i0; j=jexp=j0; Check(functor_of<bp::tag::if_else_>()(false,j,i) == (false ? jexp : iexp)); Check(i==i0); Check(j==j0);
        
        std::cout << "operator_functors_unit_tests completed." << std::endl;
    }
    
    
} // ns streamulus
