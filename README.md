# Slang-QEMU
This is a Slang emulator on RISC-V cpu with a custom debugger. To build the QEMU image run  ```make qemu``` and ```make qemu-run``` to run the virtual machine
## Project structure
1. ```buildroot``` is used for building RISC-V virtual machine with linux and custom packages.
1. ```package``` contains configurations for Slang compiler and Tool packages.
1. ```tool``` contains debugger sources
## Formating rules
Make sure to follow the formating rules of ```.clang-format``` when suggesting a MR or making changes. Trailing whitespaces are strictly prohibited.
