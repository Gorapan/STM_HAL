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
 */

/*
 ************************
 * Class Description    *
 ************************
 * This class is the counterpart to the Bootloader on the encryption side. It gets an encyrpted firmware, decrypts it with functions of a crypto library and writes it to the flash memory.
 * It detects an activity on the UART via interrupts. Then it reads the Rx buffer of the UART and processes the command with the CommandParser class. If the command is valid it executes the corresponding
 * function to the command. After the function has finished it sends information back to the transmitter if the function call was successfull or not.
 *
 * Necessary functions:
 *
 * 1. Accessing the UART Communication Interface.
 * With the following line a ComInterface object can be generated:
 *  static constexpr auto& interface = hal::Factory<hal::Usart>::get<hal::Usart::MSCOM_IF>();
 * Now basic functions for accessing the UART can be performed with this obect like send or recieve data. All supported functions can be found in hal/Usart.h
 *
 * 2. Decrypting the encrypted firmware
 * For this task a special encrpytion/decryption library will be provided. For information on how to use it please refer to the documentation of this library.
 *
 * 3. getCommand
 * The recieved command can be read with the ComInterface Object. The command should be stored in a variable and processed with the CommandParser.
 *
 * 4. getData
 * The recieved data can be read with the ComInterface Object. The data has to be encrypted with the crypto library and then it can be written to the flash with the MemoryMangement functions.
 *
 * 5. sendStatus
 * After the transmitter sends a command and data it expects and ACK byte or if something failed a status byte. Therefore this function has to send an ACK byte if everything worked or a NACK byte if the command
 * is unknown or something failed. Additionally it can send an error code so the transmitter can react to the error.
 *
 * 6. Utility functions
 * Like getVersion of the firmware or getDate which shows the timestamp when the firmware was written.
 * Also a fucntion for checking the firware in the flash to a recieved one might be helpfull.
 *
 *
 *
 *
 */


#include "Bootloader.h"

namespace app {

Bootloader::Bootloader() {
	// TODO Auto-generated constructor stub

}

} /* namespace app */
