/* Copyright (C) 2016  Matthias Schiessl
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>. *//*
 * CommandParser.cpp
 *
 *  Created on: 05.09.2016
 *      Author: matthias
 */

#include "CommandParser.h"

CommandParser::CommandParser() {
	// TODO Auto-generated constructor stub

}

int evaluateCommand(){
	int command;
	command = getCommand(); // TODO write function getCommand or find similar function in existing code

	switch(command){		//TODO write function for each case
	case 0x00:				//get Version + allowed Commands
		break;

	case 0x01:				//get Version + readProtection Status()
	break;

	case 0x02:				//get ID
		break;

	case 0x11:				//read up to 256 Bytes from specific adress
		break;

	case 0x21:				//go; jumps to user code
		break;

	case 0x31:				//write up to 256 Bytes to FLASH
		break;

	case 0x43:				//erase one to all FLASH memory pages
		break;

	case 0x44:				//extended erase
		break;

	case 0x63:				//enables write protection for some sectors
		break;

	case 0x73:				//disable the write protection for some sectors
		break;

	case 0x82:				//enables the read protection
		break;

	case 0x92:				//disables the read protection
		break;

	default:
	break;
	}

	return 0;
}

