.equ UART_txdata,   0x00
.equ UART_rxdata,   0x04
.equ UART_txctrl,   0x08
.equ UART_rxctrl,   0x0C
.equ UART_ie,       0x10
.equ UART_ip,       0x14
.equ UART_div,      0x18

.equ GPIO_CTRL_ADDR, 0x10012000
.equ UART_CTRL_ADDR, 0x10013000
.equ MTIME, 0x0200BFF8
.equ MTIME_FREQUENCY, 33