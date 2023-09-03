#define SYSTEM_INTC_IRQ_FIT_MASK 0x01
#define SYSTEM_INTC_IRQ_BUTTONS_MASK 0x02
#define SYSTEM_INTC_IRQ_SWITCHES_MASK 0x04
#define SYSTEM_INTC_IRQ_PIT_MASK 0x08

#define SYSTEM_LEDS_UIO_FILE "/dev/uio2"
#define SYSTEM_BUTTONS_UIO_FILE "/dev/uio3"
#define SYSTEM_SWITCHES_UIO_FILE "/dev/uio4"
#define SYSTEM_RGBLEDS_UIO_FILE "/dev/uio5"
#define SYSTEM_INTC_UIO_FILE "/dev/uio6"
#define SYSTEM_HDMI_FILE "/dev/ecen427_hdmi"

#define SYSTEM_FIT_PERIOD_SECONDS 0.01

#define SYSTEM_DISPLAY_W 640
#define SYSTEM_DISPLAY_H 480