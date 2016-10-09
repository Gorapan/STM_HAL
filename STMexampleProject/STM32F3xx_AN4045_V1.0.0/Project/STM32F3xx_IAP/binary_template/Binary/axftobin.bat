@echo off

if exist C:\Keil\ARM\BIN40\fromelf.exe (
if exist .\..\MDK-ARM\STM32373C-EVAL\STM32373C-EVAL.axf (C:\Keil\ARM\BIN40\fromelf.exe ".\..\MDK-ARM\STM32373C-EVAL\STM32373C-EVAL.axf" --bin --output ".\STM32373C-EVAL_SysTick.bin")
if exist .\..\MDK-ARM\STM32303C-EVAL\STM32303C-EVAL.axf (C:\Keil\ARM\BIN40\fromelf.exe ".\..\MDK-ARM\STM32303C-EVAL\STM32303C-EVAL.axf" --bin --output ".\STM32303C-EVAL_SysTick.bin")
 )

pause

