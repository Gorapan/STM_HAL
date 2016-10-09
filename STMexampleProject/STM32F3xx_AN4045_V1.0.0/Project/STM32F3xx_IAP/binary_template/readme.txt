/**
  @page binary_template Binary Template Readme file
  
  @verbatim
  ******************** (C) COPYRIGHT 2012 STMicroelectronics *******************
  * @file    STM32F3xx_IAP/binary_template/readme.txt 
  * @author  MCD Application Team
  * @version V1.0.0
  * @date    02-October-2012
  * @brief   Description of the binary_template directory.
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

This directory contains a set of sources files that build the application to be
loaded into Flash memory using In-Application Programming (IAP, through USART).

To build such application, some special configuration has to be performed:
1. Set the program load address at 0x08003000, using your toolchain linker file
2. Relocate the vector table at address 0x08003000, using the "NVIC_SetVectorTable"
   function.

The SysTick example provided within the STM32F37x/STM32F30x Standard Peripherals  
library examples is used as illustration.
This example configures the SysTick to generate a time base equal to 1 ms.
The system clock is set to the maximum system frequency, the SysTick is clocked by 
the AHB clock (HCLK). A "Delay" function is implemented based on the SysTick 
end-of-count event.
Four LEDs are toggled with a timing defined by the Delay function.


@par Directory contents 

 - "STM32F3xx_IAP\binary_template\EWARM"
 - "STM32F3xx_IAP\binary_template\MDK-ARM"
 - "STM32F3xx_IAP\binary_template\RIDE"
 - "STM32F3xx_IAP\binary_template\TASKING"
 - "STM32F3xx_IAP\binary_template\TrueSTUDIO" 
     - These folders contains a pre-configured project that produces a binary
       image of SysTick example to be loaded with IAP.

  - "STM32F3xx_IAP\binary_template\inc": contains the binary_template firmware header files 
     - IAP/binary_template/inc/stm32f37x_conf.h    Library Configuration file for STM32F37x device
     - IAP/binary_template/inc/stm32f37x_it.h      Header for stm32f37x_it.c
     - IAP/binary_template/inc/stm32f30x_conf.h    Library Configuration file for STM32F30x device
     - IAP/binary_template/inc/stm32f30x_it.h      Header for stm32f30x_it.c     
     - IAP/binary_template/inc/main.h              Header for main.c

 - "STM32F3xx_IAP\binary_template\src": contains the binary_template firmware source files 
     - IAP/binary_template/src/main.c              Main program
     - IAP/binary_template/src/stm32f37x_it.c      Interrupt handlers for STM32F37x device.
     - IAP/binary_template/src/stm32f30x_it.c      Interrupt handlers for STM32F30x device.     
     - IAP/binary_template/src/system_stm32f37x.c  STM32F37x system source file
     - IAP/binary_template/src/system_stm32f30x.c  STM32F30x system source file

     
@par Hardware and Software environment 

  - This example runs on STM32F37x and STM3230x Devices.
  
  - This example has been tested with STMicroelectronics STM32373C-EVAL (STM32F37x) 
    and STM32303C-EVAL (STM32F30x) evaluation boards and can be easily tailored to  
    any other supported device and development board.
    
  - STM32F373C-EVAL Set-up 
    - Use LED1, LED2, LED3 and LED4 connected respectively to PC.00, PC.01, PC.02
      and PC.03 pins.
    
  - STM32F303C-EVAL Set-up 
    - Use LED1, LED2, LED3 and LED4 connected respectively to PE.08, PE.09, PE.10
      and PE.11 pins.


@par How to use it ?  

In order to load the SysTick example with the IAP, you must do the following:

 - EWARM:
    - Open the SysTick.eww workspace
    - In the workspace toolbar select the project config:
          - STM32373C-EVAL: to configure the project for STM32F37x devices
          - STM32303C-EVAL: to configure the project for STM32F30x devices
    - Rebuild all files: Project->Rebuild all
    - A binary file "STM32373C-EVAL_SysTick.bin"("STM32303C-EVAL_SysTick.bin") will be generated under 
      "STM32373C-EVAL\Exe"("STM32303C-EVAL\Exe") folder depending on the selected configuration.  
    - Finally load this image with IAP application

 - RIDE:
    - Open the SysTick.rprj project
    - In the configuration toolbar(Project->properties) select the project config:
          - STM32373C-EVAL: to configure the project for STM32F37x devices
          - STM32303C-EVAL: to configure the project for STM32F30x devices
    - Rebuild all files: Project->build project
    - Go to "Utilities\Binary" directory and run "hextobin.bat"
    - A binary file "STM32373C-EVAL_SysTick.bin"("STM32303C-EVAL_SysTick.bin") will be generated under 
      "\STM32373C-EVAL"("\STM32303C-EVAL") folder depending on the selected configuration. 
    - Finally load this image with IAP application

 - MDK-ARM:
    - Open the SysTick.uvproj project
    - In the build toolbar select the project config:
          - STM32373C-EVAL: to configure the project for STM32F37x devices
          - STM32303C-EVAL: to configure the project for STM32F30x devices
    - Rebuild all files: Project->Rebuild all target files
    - Go to "Utilities\Binary" directory and run "axftobin.bat"
    - A binary file "STM32373C-EVAL_SysTick.bin"("STM32303C-EVAL_SysTick.bin")will be generated under 
      "\STM32373C-EVAL" ("\STM32303C-EVAL")folder depending on the selected configuration. 
    - Finally load this image with IAP application

 - TASKING
    - Open TASKING toolchain.
    - Click on File->Import, select General->'Existing Projects into Workspace' 
      and then click "Next". 
    - Browse to the TASKING workspace directory and select the project: 
          - STM32373C-EVAL: to configure the project for STM32F37x devices
          - STM32303C-EVAL: to configure the project for STM32F30x devices    
    - Rebuild all project files: Select the project in the "Project explorer" 
      window then click on Project->build project menu.
    - Go to "\binary_template\Binary" directory and run "TASKING_hextobin.bat".
    - A binary file "STM32373C-EVAL_SysTick.bin"("STM32303C-EVAL_SysTick.bin") 
      will be generated under this directory location. 
    - Finally load this image with IAP application
    
 - TrueSTUDIO
    - Open the TrueSTUDIO toolchain.
    - Click on File->Switch Workspace->Other and browse to TrueSTUDIO workspace directory.
    - Click on File->Import, select General->'Existing Projects into Workspace' and then click "Next". 
    - Browse to the TrueSTUDIO workspace directory, select the project: 
          - STM32373C-EVAL: to configure the project for STM32F37x devices
          - STM32303C-EVAL: to configure the project for STM32F30x devices     
    - Rebuild all project files: Select the project in the "Project explorer" 
      window then click on Project->build project menu.
    - Go to "\binary_template\Binary" directory and run "TrueSTUDIO_elf2bin.bat"
    - A binary file "STM32373C-EVAL_SysTick.bin"("STM32303C-EVAL_SysTick.bin") 
      will be generated under this directory location.
    - Finally load this image with IAP application


 * <h3><center>&copy; COPYRIGHT STMicroelectronics</center></h3>
 */
