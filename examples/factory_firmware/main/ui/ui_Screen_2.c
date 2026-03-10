#include "ui.h"

lv_obj_t *ui_Screen_2;

void ui_Screen_2_screen_init(void) {
    ui_Screen_2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen_2, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_color(ui_Screen_2, lv_color_hex(0x000000), 0);
    lv_obj_set_size(ui_Screen_2, 240, 240);


}
