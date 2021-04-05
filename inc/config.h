// Arduino Pins
#define BUTTON_TOP    6   // arm/disarm button_top
#define BUTTON_SIDE   7   // secondary button_top
#define BUZZER_PIN    5   // output for buzzer speaker
#define LED_SW        LED_BUILTIN   // output for LED
#define LED_2         0   // output for LED 2
#define LED_3         38  // output for LED 3
#define THROTTLE_PIN  A0  // throttle pot input

#define CTRL_VER 0x00
#define CTRL2HUB_ID 0x10
#define HUB2CTRL_ID 0x20

#define ARM_VERIFY false
#define CURRENT_DIVIDE 100.0
#define VOLTAGE_DIVIDE 1000.0

// Batt setting now configurable by user. Read from device data
#define BATT_MIN_V 60.0  // 24 * 2.5V per cell
#define BATT_MID_V 86.4 // 24 *  3.6V per cell
#define BATT_MAX_V 100.0 // 24 * 4.2V per cell

// Calibration
#define MAMP_OFFSET 200

#define VERSION_MAJOR 5
#define VERSION_MINOR 0

#define CRUISE_GRACE 1.5  // 1.5 sec period to get off throttle
#define CRUISE_MAX 300  // 5 min max cruising
#define POT_SAFE_LEVEL 0.10 * 4096  // 10% or less

#define DEFAULT_SEA_PRESSURE 1013.25

// Library config
#define NO_ADAFRUIT_SSD1306_COLOR_COMPATIBILITY

//SP140
#define BUZ_PIN 5
#define POT_PIN A0
#define TFT_RST 9
#define TFT_CS 10
#define TFT_DC 11
#define TFT_LITE A1
#define ESC_PIN 12

#define BLACK                 ST77XX_BLACK
#define WHITE                 ST77XX_WHITE
#define GREEN                 ST77XX_GREEN
#define YELLOW                ST77XX_YELLOW
#define RED                   ST77XX_RED
#define BLUE                  ST77XX_BLUE

#define DIGIT_ARRAY_SIZE      7
#define ESC_BAUD_RATE         115200
#define ESC_DATA_SIZE         20
#define READ_INTERVAL         0
#define ESC_TIMEOUT           10
#define ENABLE_BUZ            true    // enable buzzer
#define ENABLE_VIB            true    // enable vibration
#define ENABLE_VIB_LOW_BAT    true    // vibrate if armed and battery voltage sags below min volts. Gets pilot's attention.
