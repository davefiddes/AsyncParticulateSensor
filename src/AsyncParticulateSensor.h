///////////////////////////////////////////////////////////////////////////////
//!
//! \file
//! \brief  Process data from a Nova Fitness particulate sensor
//!
///////////////////////////////////////////////////////////////////////////////
//   Copyright (c) 2018 David J. Fiddes. All rights reserved.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 3.0 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
///////////////////////////////////////////////////////////////////////////////

#ifndef ASYNCPARTICULATESENSOR_H
#define ASYNCPARTICULATESENSOR_H

#include <functional>

typedef void Stream;

class AsyncParticulateSensor
{
public:
  typedef std::function<void( float pm25, float pm10 )> QueryDataFunction;

public:
  AsyncParticulateSensor();
  ~AsyncParticulateSensor();

  void setStream( Stream* stream );
  void handleSensorRequests();

  void onDataAvailable( QueryDataFunction fn );

private:
  Stream* m_stream;
};

#endif // ASYNCPARTICULATESENSOR_H
