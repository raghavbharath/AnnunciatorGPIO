#define DELAY 200
#define ON 0x01
#define OFF 0x00
#define NUM_LEDS 0x03
#define RED_LED 0x400000
#define BLUE_LED 0x200000
#define GREEN_LED 0x080000

//input
#define TST 0x40000 //GPIO pin 2 offset
#define FLA 0x800000 //GPIO pin 2 offset
#define OLA 0x1 //GPIO pin 2 offset
#define ACK 0x2 //GPIO pin 2 offset


//output
#define RED 0x800 //GPIO pin 2 offset
#define YELLOW 0x1000 //GPIO pin 2 offset
#define GREEN 0x2000 //GPIO pin 2 offset


void setupGPIO();
int setLED(int color, int state);
void delay(int milliseconds);
int checkBot(int pin);
