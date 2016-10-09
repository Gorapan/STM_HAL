if exist .\..\RIDE\STM32373C-EVAL\Project.hex (hex2bin.exe  .\..\RIDE\STM32373C-EVAL\Project.hex
move /y .\..\RIDE\STM32373C-EVAL\Project.bin STM32373C-EVAL_SysTick.bin)
if exist .\..\RIDE\STM32303C-EVAL\Project.hex (hex2bin.exe  .\..\RIDE\STM32303C-EVAL\Project.hex
move /y .\..\RIDE\STM32303C-EVAL\Project.bin STM32303C-EVAL_SysTick.bin)
pause
