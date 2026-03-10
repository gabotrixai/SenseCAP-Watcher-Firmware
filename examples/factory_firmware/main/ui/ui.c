#include "ui.h"

void ui_init(void) {
    ui_Screen_1_screen_init();
    ui_Home_screen_init();
    ui_TaskStatus_screen_init();
    lv_disp_load_scr(ui_Screen_1);
}
