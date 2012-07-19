//
//  strop_func.h
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

#pragma once


#include <sstream>

#include "strop.h"

#include "apply_filter.h"

namespace streamulus
{    
    template<typename Sig>
    class FuncBase : public Strop<Sig>
    {
    public:
        FuncBase()
        {
            std::stringstream ss;
            ss << "Func_" << "F";
            Strop<Sig>::SetDisplayName(ss.str());
        }
    };
    

    
    template<class F, 
    typename A1, 
    typename R =typename F::template result<F(A1)>::type>
    class Func1 : public FuncBase<R(A1)>
    {
    public:

        Func1(const F& f)
            : mFunction(f)
            , mInputExists(false)
        {
        }
        
        virtual void Work()
        {
            Stream<A1>* const input1(Strop<R(A1)>::template Input<A1,0>());
            
            mInputExists |= input1->IsValid();
            
            if (mInputExists)
            {   
                while (input1->HasMore())
                {
                    const A1& a1(input1->Current());
                
                    if (ApplyFilter(mFunction, a1))
                        StropStreamProducer<R>::Output(mFunction(a1));   
                }
            }            
        }
        
    private:
        F mFunction;
        bool mInputExists;
    };
    
    template<class F, 
    typename A1, 
    typename A2, 
    typename R =typename F::template result<F(A1,A2)>::type>
    class Func2 : public FuncBase<R(A1,A2)>
    {
    public:

        Func2(const F& f)
            : mFunction(f)
            , mInputExists(false)
        {
        }

        virtual void Work()
        {            
            Stream<A1>* const input1(Strop<R(A1,A2)>::template Input<A1,0>());
            Stream<A2>* const input2(Strop<R(A1,A2)>::template Input<A2,1>());
            
            mInputExists |= (input1->IsValid() && input2->IsValid());
            
            if (mInputExists)
            {   
                while (input1->HasMore() || 
                       input2->HasMore() )
                {

                    const A1& a1(input1->Current());
                    const A2& a2(input2->Current());
                
                    if (ApplyFilter(mFunction,a1,a2))
                        StropStreamProducer<R>::Output(mFunction(a1,a2));
                }
            }            
        }
                
    private:
        F mFunction;
        bool mInputExists;        
    };
    
    template<class F, 
    typename A1, 
    typename A2, 
    typename A3, 
    typename R =typename F::template result<F(A1,A2,A3)>::type>
    class Func3 : public FuncBase<R(A1,A2,A3)>
    {
    public: 
        
        Func3(const F& f)
            : mFunction(f)
            , mInputExists(false)
        {
        }
        
        virtual void Work()
        {
            Stream<A1>* const input1(Strop<R(A1,A2,A3)>::template Input<A1,0>());
            Stream<A2>* const input2(Strop<R(A1,A2,A3)>::template Input<A2,1>());
            Stream<A3>* const input3(Strop<R(A1,A2,A3)>::template Input<A3,2>());
            
            mInputExists |= (input1->IsValid() && input2->IsValid() && input3->IsValid());
            
            if (mInputExists)
            {   
                while (input1->HasMore() || 
                       input2->HasMore() || 
                       input3->HasMore() )
                {
                    const A1& a1(input1->Current());
                    const A2& a2(input2->Current());
                    const A3& a3(input3->Current());
                
                    if (ApplyFilter(mFunction,a1,a2,a3))
                        StropStreamProducer<R>::Output(mFunction(a1,a2,a3));
                }
            }            
        }
        
    private:
        F mFunction;
        bool mInputExists;        
    };
    
    template<class F, 
    typename A1, 
    typename A2, 
    typename A3, 
    typename A4, 
    typename R =typename F::template result<F(A1,A2,A3,A4)>::type>
    class Func4 : public FuncBase<R(A1,A2,A3,A4)>
    {
    public:  
        
        Func4(const F& f)
            : mFunction(f)
            , mInputExists(false)
        {
        }

        virtual void Work()
        {
            Stream<A1>* const input1(Strop<R(A1,A2,A3,A4)>::template Input<A1,0>());
            Stream<A2>* const input2(Strop<R(A1,A2,A3,A4)>::template Input<A2,1>());
            Stream<A3>* const input3(Strop<R(A1,A2,A3,A4)>::template Input<A3,2>());
            Stream<A4>* const input4(Strop<R(A1,A2,A3,A4)>::template Input<A4,3>());
            
            mInputExists |= 
                (input1->IsValid() && input2->IsValid() && input3->IsValid() && input4->IsValid());
            
            if (mInputExists)
            {   
                while (input1->HasMore() || 
                       input2->HasMore() || 
                       input3->HasMore() || 
                       input4->HasMore() )
                {
                    const A1& a1(input1->Current());
                    const A2& a2(input2->Current());
                    const A3& a3(input3->Current());
                    const A4& a4(input4->Current());
                
                    if (ApplyFilter(mFunction,a1,a2,a3,a4))
                        StropStreamProducer<R>::Output(mFunction(a1,a2,a3,a4));
                }
            }            
        }
        
    private:
        F mFunction;
        bool mInputExists;        
    };

    template<class F, 
    typename A1, 
    typename A2, 
    typename A3, 
    typename A4, 
    typename A5, 
    typename R =typename F::template result<F(A1,A2,A3,A4,A5)>::type>
    class Func5 : public FuncBase<R(A1,A2,A3,A4,A5)>
    {
    public:       
        
        Func5(const F& f)
            : mFunction(f)
            , mInputExists(false)
        {
        }

        virtual void Work()
        {
            Stream<A1>* const input1(Strop<R(A1,A2,A3,A4,A5)>::template Input<A1,0>());
            Stream<A2>* const input2(Strop<R(A1,A2,A3,A4,A5)>::template Input<A2,1>());
            Stream<A3>* const input3(Strop<R(A1,A2,A3,A4,A5)>::template Input<A3,2>());
            Stream<A4>* const input4(Strop<R(A1,A2,A3,A4,A5)>::template Input<A4,3>());
            Stream<A5>* const input5(Strop<R(A1,A2,A3,A4,A5)>::template Input<A5,4>());

            mInputExists |= 
                (input1->IsValid() && input2->IsValid() && input3->IsValid() && input4->IsValid() && input5->IsValid());
            
            if (mInputExists)
            {   
                while (input1->HasMore() || 
                       input2->HasMore() || 
                       input3->HasMore() || 
                       input4->HasMore() || 
                       input5->HasMore() )
                {
                    const A1& a1(input1->Current());
                    const A2& a2(input2->Current());
                    const A3& a3(input3->Current());
                    const A4& a4(input4->Current());
                    const A5& a5(input5->Current());
                
                    if (ApplyFilter(mFunction,a1,a2,a3,a4,a5))
                        StropStreamProducer<R>::Output(mFunction(a1,a2,a3,a4,a5));
                }
            }            
        }

    private:
        F mFunction;
        bool mInputExists;
    };
    
    
} // ns streamulus
