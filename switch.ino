#include <Switch.h>

Switch switchcase(PC13,LED_BUILTIN);

void setup() {
}

void loop() {
switchcase.count();
switchcase.switchcase();
}
