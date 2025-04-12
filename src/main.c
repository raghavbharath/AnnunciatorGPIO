#include <stdio.h>
#include <header1.h>

int main() {
    setupGPIO();
    state_A();
    return 0;
}

void all_off() {
    setLED(GREEN, OFF);
    setLED(RED, OFF);
    setLED(YELLOW, OFF);
}

void flash(int color) {
    setLED(color, ON);
    delay(DELAY);
    setLED(color, OFF);
    delay(DELAY);
}

void state_A() {
    all_off();
    setLED(GREEN, ON);
    while (1) {
        flash(YELLOW);
        flash(RED);
        if (!checkBot(TST)) {
            state_B();
        }
    }
}

void state_B() {
    all_off();
    setLED(GREEN, ON);
    while (1) {
        if (!checkBot(FLA) && checkBot(TST)) {
            state_A();
        }
        if (checkBot(FLA)) {
            state_C();
        }
    }
}

void state_C() {
    all_off();
    while (1) {
        flash(YELLOW);
        if (checkBot(OLA) && checkBot(FLA)) {
            state_B();
        }
        if (checkBot(OLA) && checkBot(FLA) && checkBot(ACK)) {
            state_D();
        }
        if (checkBot(FLA)) {
            state_E();
        }
    }
}

void state_D() {
    all_off();
    while (1) {
        setLED(YELLOW, ON);
        if (checkBot(OLA)) {
            state_B();
        }
        if (!checkBot(OLA) && checkBot(FLA)) {
            state_C();
        }
    }
}

void state_E() {
    all_off();
    while (1) {
        flash(RED);
        if (checkBot(ACK)) {
            state_F();
        }
    }
}

void state_F() {
    all_off();
    while (1) {
        setLED(RED, ON);
        if (!checkBot(OLA)) {
            state_D();
        }
    }
}
















