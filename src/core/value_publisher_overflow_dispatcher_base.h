// Copyright Maciej Sobczak 2008-2015.
// This file is part of YAMI4.
//
// YAMI4 is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// YAMI4 is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with YAMI4.  If not, see <http://www.gnu.org/licenses/>.

#ifndef YAMICPP_VALUE_PUBLISHER_OVERFLOW_DISPATCHER_BASE_H_INCLUDED
#define YAMICPP_VALUE_PUBLISHER_OVERFLOW_DISPATCHER_BASE_H_INCLUDED

#include "serializable.h"
#include "value_publisher_overflow_action.h"
#include <yami4-core/dll.h>

#include <string>

namespace yami
{

namespace details
{

class DLL value_publisher_overflow_dispatcher_base
{
public:
    virtual ~value_publisher_overflow_dispatcher_base() {}

    virtual value_publisher_overflow_action dispatch(
        const std::string & server_name,
        const std::string & object_name,
        const serializable & value) = 0;
};

} // namespace details

} // namespace yami

#endif // YAMICPP_VALUE_PUBLISHER_OVERFLOW_DISPATCHER_BASE_H_INCLUDED
