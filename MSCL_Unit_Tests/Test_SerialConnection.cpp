/*****************************************************************************
Copyright(c) 2015 LORD Corporation. All rights reserved.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the included
LICENSE.txt file for a copy of the full GNU General Public License.
*****************************************************************************/
//THIS UNIT TEST USES com0com TO RUN MOST, IF NOT ALL, OF ITS TESTS.
//com0com CREATES 2 VIRTUAL COM PORTS. WHEN YOU WRITE TO 1, THAT DATA
//CAN THEN BE READ FROM THE OTHER. THE VIRTUAL COM PORTS MUST BE 
//RENAMED TO COM998 AND COM999 ON THE SYSTEM
#include "mscl/Communication/Connection.h"
#include "mscl/Communication/SerialConnection.h"
#include "mscl/Communication/BoostCommunication.h"
#include "mscl/Utils.h"
#include "mscl/Exceptions.h"

#include <boost/test/unit_test.hpp>
#include <turtle/mock.hpp>

using namespace mscl;

void parseResponse(DataBuffer& data)
{
}

BOOST_AUTO_TEST_SUITE(SerialConnection_Test)

BOOST_AUTO_TEST_CASE(SerialConnection_EstablishConnection_InvalidPort)
{
	//check that the connection throws an exception of an invalid com port
	BOOST_CHECK_THROW(Connection::Serial("ABC123"), Error_InvalidSerialPort);
}

BOOST_AUTO_TEST_SUITE_END()