#include <lpc17xx.h>
#include "glcd.h"
#include "morse_code.h"
#include "debounced_button.h"

int main(void) {
	SystemInit();
	GLCD_Init();
	GLCD_Clear(White);
	GLCD_DisplayString(0, 0, 1, "Hello, world!");

	init_morse_code_fsm();
	init_debounced_button();

	return 0;
}
