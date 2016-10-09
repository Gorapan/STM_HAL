::Generate STM32373C-EVAL_SysTick.bin
@if exist .\..\TrueSTUDIO\STM32373C-EVAL\Debug\STM32373C-EVAL.elf ("arm-elf-objcopy.exe" -O binary ".\..\TrueSTUDIO\STM32373C-EVAL\Debug\STM32373C-EVAL.elf" "STM32373C-EVAL_SysTick.bin"

@if errorlevel 1 (echo error occured while generating STM32373C-EVAL_SysTick.bin!) ELSE (echo STM32373C-EVAL_SysTick.bin is successfully generated.)

) ELSE (echo ".\..\TrueSTUDIO\STM32373C-EVAL\Debug\STM32373C-EVAL.elf" cannot be found!)

::Generate STM32303C-EVAL_SysTick.bin
@if exist .\..\TrueSTUDIO\STM32303C-EVAL\Debug\STM32303C-EVAL.elf ("arm-elf-objcopy.exe" -O binary ".\..\TrueSTUDIO\STM32303C-EVAL\Debug\STM32303C-EVAL.elf" "STM32303C-EVAL_SysTick.bin"

@if errorlevel 1 (echo error occured while generating STM32303C-EVAL_SysTick.bin!) ELSE (echo STM32303C-EVAL_SysTick.bin is successfully generated.)

) ELSE (echo ".\..\TrueSTUDIO\STM32373C-EVAL\Debug\STM32303C-EVAL.elf" cannot be found!)
pause

