BAMA-1 refactor

Goal:
* Improve skills with CMAKE and develop a documented method of working with libcsp in external embedded projects (posix for the time being).

Technical Goals:
* Zephyr RTOS integration (qemu emulation then stm32 hardware)
* run a csp application with an exposed serial port as a socket in qemu with zephyr rtos
    * connect and send data from external source (libcsp_py3 bindings application)
* run a csp application on a stm32 chip with zephyr rtos
    * send and received data from serial port

Modifications
1. refactor of <csp_autoconfig.h> to <csp/csp_autoconfig.h>     (in dep/libcsp) DO NOT CLONE THE CMakeLists.txt is modified
    * configure_file needs to put the header in the includes for csp for the sources to see it correctly
2. for csp_print_func to work, CSP_PRINT_STDIO needs to be set to 1. This compile flag is set in the libcsp CMakeLists.txt
    * the fix was to move the set CMAKE function into the conditional for linux so that it would pull in stdio.h and compile for that 
    * for zephyr RTOS, this will be 0 as the outputs should go to a hardware debug UART or something
3. libzmq needs to be linked with zmq added to target_link_libraries



