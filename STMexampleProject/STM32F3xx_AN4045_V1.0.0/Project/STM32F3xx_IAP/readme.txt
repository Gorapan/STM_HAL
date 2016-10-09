/**
  @page STM32F3xx_IAP STM32F3xx in-application programming using the USART Readme file
  
  @verbatim
  ******************** (C) COPYRIGHT 2012 STMicroelectronics *******************
  * @file    STM32F3xx_IAP/readme.txt 
  * @author  MCD Application Team
  * @version V1.0.0
  * @date    02-October-2012
  * @brief   Description of the "STM32F3xx in-application programming (IAP) using the USART".
  ******************************************************************************
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
   @endverbatim

@par Description

This directory contains a set of sources files and pre-configured projects that 
build the In-Application Programming (IAP, through USART) program.


@par Directory contents 

 - "STM32F3xx_IAP\binary_template": contains the binary template firmware source files
 - "STM32F3xx_IAP\EWARM": contains preconfigured project for EWARM toolchain
 - "STM32F3xx_IAP\MDK-ARM": contains preconfigured project for MDK-ARM toolchain
 - "STM32F3xx_IAP\RIDE": contains preconfigured project for RIDE toolchain
 - "STM32F3xx_IAP\TASKING": contains preconfigured project for TASKING toolchain
 - "STM32F3xx_IAP\TrueSTUDIO": contains preconfigured project for TrueSTUDIO toolchain
  
 - "STM32F3xx_IAP\inc": contains the IAP firmware header files 
    - STM32F3xx_IAP/inc/common.h            This file provides all the headers of the common functions.
    - STM32F3xx_IAP/inc/flash_if.h          This file provides all the firmware 
                                            function headers of the flash_if.c file.
    - STM32F3xx_IAP/inc/menu.h              This file provides all the firmware
                                            function headers of the menu.c file.
    - STM32F3xx_IAP/inc/ymodem.h            This file provides all the firmware
                                            function headers of the ymodem.c file.
    - STM32F3xx_IAP/inc/stm32f37x_conf.h    Library Configuration file for STM32F37x device.
    - STM32F3xx_IAP/inc/stm32f37x_it.h      Header for stm32f37x_it.c

 - "STM32F3xx_IAP\src": contains the IAP firmware source files
    - STM32F3xx_IAP/src/main.c              Main program.
    - STM32F3xx_IAP/src/stm32f37x_it.c      Interrupt handlers for STM32F37x device.
    - STM32F3xx_IAP/src/stm32f30x_it.c      Interrupt handlers for STM32F30x device.    
    - STM32F3xx_IAP/src/flash_if.c          This file provides all the memory related
                                            operation functions(write, erase and
                                            write protection disable)
    - STM32F3xx_IAP/src/menu.c              This file contains the menu to select
                                            downloading a new binary file, uploading
                                            internal Flash memory, executing the binary
                                            and disabling the write protection of
                                            write protected sectors.
    - STM32F3xx_IAP/src/common.c            This file provides functions related to
                                            read/write from/to USART peripheral.
    - STM32F3xx_IAP/src/ymodem.c            This file provides all the firmware functions
                                            related to the ymodem protocol.
    - STM32F3xx_IAP/src/system_stm32f37x.c  STM32F37x system source file. 
    - STM32F3xx_IAP/src/system_stm32f30x.c  STM32F30x system source file. 
    

@par Hardware and Software environment

  - This example runs on STM32F37x/STM32F30x Devices.
  
  - This example has been tested with STMicroelectronics STM32373C-EVAL (STM32F37x) 
    and STM32303C-EVAL (STM32F30x) evaluation boards and can be easily tailored to 
    any other supported device and development board.

  - STM32373C-EVAL Set-up
      - Connect a null-modem female/female RS232 cable between the DB9 connector 
        CN7 (USART2) and PC serial port.
      - Use the Key push-button.
      - Make sure that JP6 is in position 2<->3 
      
  - STM32303C-EVAL Set-up
      - Connect a null-modem female/female RS232 cable between the DB9 connector 
        CN7 (USART2) and PC serial port.
      - Use the Key push-button.
      - Make sure that JP13 is in position 5<->6
      
  - Hyperterminal configuration:
    - Word Length = 8 Bits
    - One Stop Bit
    - No parity
    - BaudRate = 115200 baud
    - flow control: None 


@par How to use it ? 

In order to make the program work, you must do the following:

  1. Generate a binary image using the preconfigured project provided in the directory
      "Project\STM32F3xx_IAP\binary_template" . 
  2. Program the internal Flash with the IAP (see below) 
  3. Open HyperTerminal window using the settings already defined in section
     "Hardware and Software environment" 
  4. To run the IAP application, keep the Key push-button pressed at Reset. 
     The IAP main menu is then displayed on the HyperTerminal window.
  5. To download an application, press 1 and use the Ymodem protocol

  In order to load the IAP code, you have do the following:
 - EWARM
    - Open the IAP.eww workspace
     - In the workspace toolbar select the project config:
          - STM32373C-EVAL: to configure the project for STM32F37x devices
          - STM32303C-EVAL: to configure the project for STM32F30x devices
    - Rebuild all files: Project->Rebuild all
    - Load project image: Project->Debug
    - Run program: Debug->Go(F5)

 - MDK-ARM 
    - Open the IAP.Uv2 project
    - In the workspace toolbar select the project config:
         - STM32373C-EVAL: to configure the project for STM32F37x devices
         - STM32303C-EVAL: to configure the project for STM32F30x devices    
    - Rebuild all files: Project->Rebuild all target files
    - Load project image: Debug->Start/Stop Debug Session
    - Run program: Debug->Run (F5)
    
 - RIDE:
    - Open the IAP.rprj project
    - In the configuration toolbar(Project->properties) select the project config:
          - STM32373C-EVAL: to configure the project for STM32F37x devices
          - STM32303C-EVAL: to configure the project for STM32F30x devices
    - Rebuild all files: Project->build project
    - Load project image: Debug->start(ctrl+D)
    - Run program: Debug->Run(ctrl+F9)

 - TASKING
    - Open TASKING toolchain.
    - Click on File->Import, select General->'Existing Projects into Workspace' 
      and then click "Next".
    - Browse to TASKING workspace directory and select the project:  
          - STM32373C-EVAL: to configure the project for STM32F37x devices
          - STM32303C-EVAL: to configure the project for STM32F30x devices    
     - Rebuild all project files: Select the project in the "Project explorer" 
       window then click on Project->build project menu.
    - Run program: Select the project in the "Project explorer" window then click 
      Run->Debug (F11)

 - TrueSTUDIO   
    - Open the TrueSTUDIO toolchain.
    - Click on File->Switch Workspace->Other and browse to TrueSTUDIO workspace 
      directory.
    - Click on File->Import, select General->'Existing Projects into Workspace' 
      and then click "Next". 
    - Browse to TrueSTUDIO workspace directory and select the project: 
          - STM32373C-EVAL: to configure the project for STM32F37x devices
          - STM32303C-EVAL: to configure the project for STM32F30x devices  
    - Rebuild all project files: Select the project in the "Project explorer" 
      window then click on Project->build project menu.
    - Run program: Select the project in the "Project explorer" window then click 
      Run->Debug (F11)

 * <h3><center>&copy; COPYRIGHT STMicroelectronics</center></h3>
 */
