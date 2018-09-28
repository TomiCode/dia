#include <avr/io.h>
#include <util/delay.h>

#include "pins.h"

int main(void)
{
  DDRA = _BV(PIN_LED) | _BV(PIN_LED2) | _BV(PIN_FAN) | _BV(PIN_STAT);

  while(1) {
    PORTA ^= _BV(PIN_STAT);
    _delay_ms(500);
  }

  return 0;
}
