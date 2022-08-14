# STM32_BluePIill_ADC1.0_Proteus
STM32CubeIDE 1.10.1, Proteus 8.13
Library Installation :
Download or clone stm32 bluepill for proteus repository.
Open downloaded folder and copy BLUEPILL.IDX and BLUEPILL.LIB file from this folder.
Now open Proteus LIBRARY folder (check your proteus installation folder)
C:\Program Files (x86)\Labcenter Electronics\Proteus 8 Professional\DATA\LIBRARY

Now run proteus and open component Library.
Search for "STM32" or "BLUEPILL" and you can see your installed bluepill library.
Source code (Hex) :
Note: Select board as : STM32F103C6 in STM32CUBEMX or in STM32CUBEIDE. Only code compiled for STM32F103C6 is supported with this library.
Command to create hex file in CubeIDE:
arm-none-eabi-objcopy -O ihex ${ProjName}.elf ${ProjName}.hex
The NOT element replaced the NPN transistor on the cathodes, in this model Proteus does not support the use of transistors.

Перед початком роботи потрібно встановити необхідні бібліотеки BLUEPILL.IDX та BLUEPILL.LIB для Proteus за шляхом
C:\Program Files (x86)\Labcenter Electronics\Proteus 8 Professional\DATA\LIBRARY
При створенні проекту у CubeIDE необхідно обрати МК STM32F103C6
Для генерування hex файлу потрібно в налаштуваннях IDE додати команду
arm-none-eabi-objcopy -O ihex ${ProjName}.elf ${ProjName}.hex
Елементом NOT було замінено NPN транзистор на катодах, в цій моделі Proteus не підтримує використання транизисторів.
![ADC3 3V](https://user-images.githubusercontent.com/98404943/184535310-51012e41-a7a1-4a88-8c81-447a7eb94907.png)
![ADC2 756V](https://user-images.githubusercontent.com/98404943/184535321-767ece23-b94b-49d5-9e3d-f5ad1fd5d17c.png)
![ADC1 861V](https://user-images.githubusercontent.com/98404943/184535326-39eb7dd1-e41b-4a55-9be7-19a0319d1458.png)
![CUBE_ADC](https://user-images.githubusercontent.com/98404943/184535336-d0cbfb8d-c4d1-421a-919b-51913427bd8c.png)
