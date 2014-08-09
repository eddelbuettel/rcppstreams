//
//  stream.h
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

#include "stream_base.h"
#include <deque>
#include <boost/optional.hpp>

namespace streamulus
{    
    template<typename T>
    class Stream : public StreamBase
    {
    public:	

        void Append(const T& item)
        {
            mBuffer.push_back(item);
        }

        bool HasMore()
        {
            return !mBuffer.empty();
        }
        
        bool IsValid()
        {
            return mLastValue || !mBuffer.empty();
        }
        
        const T& Current()
        {
            if (!mBuffer.empty())
            {
                mLastValue = mBuffer.front();
                mBuffer.pop_front();
            }

            assert(mLastValue);
            
            // No new data - return last
            return *mLastValue;
        }
                        
    private:
                
        std::deque<T> mBuffer;
        boost::optional<T> mLastValue;
    };
    
} // ns streamulus
