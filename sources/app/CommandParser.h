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
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#ifndef SOURCES_APP_COMMANDPARSER_H_
#define SOURCES_APP_COMMANDPARSER_H_

namespace CommandParser {


	class CommandParser{
		public: CommandParser();
		int evaluateCommand();
	};
};

#endif /* SOURCES_APP_COMMANDPARSER_H_ */
