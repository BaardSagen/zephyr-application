#include <app_version.h>
#include <zephyr/kernel.h>

int main(void) {
    printk("Application version hello  %s initialized on board %s!\r\n",
           APP_VERSION_STRING, CONFIG_BOARD);
    return 0;
}