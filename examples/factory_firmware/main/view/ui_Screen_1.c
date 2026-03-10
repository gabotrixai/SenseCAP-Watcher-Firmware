#include "ui.h"

lv_obj_t *ui_Screen_1;

void ui_Screen_1_screen_init(void) {
    ui_Screen_1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen_1, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_color(ui_Screen_1, lv_color_hex(0x000000), 0);
    lv_obj_set_size(ui_Screen_1, 240, 240);






}
