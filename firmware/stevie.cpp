#include "application.h"
#include "StevieButton.h"

uint8_t StevieButton::countButtonsOn(void){
	uint8_t buttons_on = 0;
	buttons_on += buttonsOn(top);
	buttons_on += buttonsOn(left);
	buttons_on += buttonsOn(right);
	buttons_on += buttonsOn(bottom);
	return buttons_on;
}

uint8_t StevieButton::anyOn(void){
	if(countButtonsOn())
		return 1;
	else
		return 0;
}

uint8_t StevieButton::buttonOn(uint8_t i){
	if((i>=4) && (i<=7))
		return !digitalRead(i);
	else
		return 0;
}
