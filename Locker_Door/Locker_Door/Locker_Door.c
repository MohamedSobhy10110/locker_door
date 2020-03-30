/*
 * Locker_Door.c
 *
 * Created: 20/03/12 1:56:19 PM
 *  Author: Mohamed Sobhy
 */ 


#include "GUI_CHECK.h"

extern lcdcnfg_t mylcd;
extern keypadcnfg_t mykeypad;

int main(void)
{
	sys_init();                     //function to initialize system
	gui_write_passcode();           //showing the first message to user
	while (1)
	{
		keypad_mainFun(&mykeypad); //the keypad main function used to show the clicked key
	}
}