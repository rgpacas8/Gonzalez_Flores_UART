/*
 * @file:			UART.c
 * @company:			ITESO
 * @Engineer Team:	D.F.R. / R.G.P.
 */

#include "UART.h"



void UART_init(uart_channel_t uart_channel, uint32_t system_clk, uart_baud_rate_t baud_rate)
{
	if (UART_0 == uart_channel) {
		SIM->SCGC4 |= 0x0400;
				UART0->C2  &= ~(UART_C2_TE_MASK);
				UART0->C2  &= ~(UART_C2_RE_MASK);
				UART0->BDH |= 0x00;
				UART0->BDL  = 0x04;
				UART0->C4  |= 0x0D;
				UART0->C2  |= UART_C2_TE_MASK | UART_C2_RE_MASK;
	}
	if (UART_1 == uart_channel) {}
	if (UART_2 == uart_channel) {}
	if (UART_3 == uart_channel) {}
	if (UART_4 == uart_channel) {}
}
