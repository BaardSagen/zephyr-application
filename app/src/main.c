#include <app_version.h>
#include <zephyr/kernel.h>

int main(void) {
    printk("Application version %s initialized on board %s!",
           APP_VERSION_STRING, CONFIG_BOARD);
    return 0;
}