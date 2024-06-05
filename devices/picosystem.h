// This configuration file is for the Pimoroni PicoSystem
// Which is a RP2040 + 1.54" 240x240 colour IPS LCD (ST7789 driver)

// All pin numbers are taken from https://wiki.picosystem.com/about/hardware

/* ============================= KEYS CONFIGURATION ========================== */
#define KEY_LEFT    22
#define KEY_RIGHT   21
#define KEY_FIRE    18 // Picosystem A Button
#define KEY_UP      23
#define KEY_DOWN    20

// PicoSystem button presses are inverted as they have a pull up resistor
#define get_device_button(pin_num) !gpio_get(pin_num)

/* ================================ SPEAKER PIN ============================== */
#define SPEAKER_PIN 11

/* ============================= DISPLAY CONFIGURATION ======================= */
#define st77_use_spi

#ifdef st77_use_spi
#define spi_rate 200000000
#define spi_phase 1
#define spi_polarity 1
#define spi_channel spi0
#define st77_sck 6
#define st77_mosi 7
#define st77_rst 4
#define st77_dc 9
#define st77_cs 5

#endif

#define st77_bl 12

// ST77xx display settings.
#define st77_width 240
#define st77_height 240
#define st77_landscape 0
#define st77_mirror_x 0
#define st77_mirror_y 0
#define st77_inversion 1
#define st77_offset_x 0
#define st77_offset_y 0
#define st77_isbgr 0

/* =========================== SCREEN RENDERING CONFIG ======================= */
// The PicoSystem 240x240 display is not the ideal size
// Disabling borders means we get 256x192 which seems better
// in my experience than the 320x256 we get with borders enabled
#define DEFAULT_DISPLAY_SCALING 100
#define DEFAULT_DISPLAY_BORDERS 0    // no borders

/* === END OF CONFIG === */
