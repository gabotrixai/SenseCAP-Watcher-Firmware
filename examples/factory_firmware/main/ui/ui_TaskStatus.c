#include "ui.h"

lv_obj_t *ui_TaskStatus;

void ui_TaskStatus_screen_init(void) {
    ui_TaskStatus = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_TaskStatus, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_color(ui_TaskStatus, lv_color_hex(0x000000), 0);
    lv_obj_set_size(ui_TaskStatus, 240, 240);

    lv_obj_t *ui_lv_obj_0 = lv_obj_create(ui_TaskStatus);
    lv_obj_set_pos(ui_lv_obj_0, 0, 0);
    lv_obj_set_size(ui_lv_obj_0, 240, 240);
    lv_obj_clear_flag(ui_lv_obj_0, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_color(ui_lv_obj_0, lv_color_hex(0x000000), 0);
    lv_obj_set_style_radius(ui_lv_obj_0, 0, 0);

    lv_obj_t *ui_lv_label_1 = lv_label_create(ui_TaskStatus);
    lv_obj_set_pos(ui_lv_label_1, 20, 20);
    lv_obj_set_size(ui_lv_label_1, 200, 24);
    lv_label_set_text(ui_lv_label_1, "Current Task");
    lv_obj_set_style_text_color(ui_lv_label_1, lv_color_hex(0xFFFFFF), 0);
    lv_obj_set_style_text_font(ui_lv_label_1, &lv_font_montserrat_14, 0);

    lv_obj_t *ui_lv_label_2 = lv_label_create(ui_TaskStatus);
    lv_obj_set_pos(ui_lv_label_2, 20, 55);
    lv_obj_set_size(ui_lv_label_2, 200, 40);
    lv_label_set_text(ui_lv_label_2, "Monitoring area for motion detection");
    lv_obj_set_style_text_color(ui_lv_label_2, lv_color_hex(0x888888), 0);
    lv_obj_set_style_text_font(ui_lv_label_2, &lv_font_montserrat_12, 0);

    lv_obj_t *ui_lv_bar_3 = lv_bar_create(ui_TaskStatus);
    lv_obj_set_pos(ui_lv_bar_3, 20, 120);
    lv_obj_set_size(ui_lv_bar_3, 200, 8);
    lv_bar_set_value(ui_lv_bar_3, 65, LV_ANIM_OFF);
    lv_obj_set_style_bg_color(ui_lv_bar_3, lv_color_hex(0x22C55E), LV_PART_INDICATOR);
    lv_obj_set_style_bg_color(ui_lv_bar_3, lv_color_hex(0x333333), LV_PART_MAIN);

    lv_obj_t *ui_lv_label_4 = lv_label_create(ui_TaskStatus);
    lv_obj_set_pos(ui_lv_label_4, 20, 140);
    lv_obj_set_size(ui_lv_label_4, 200, 20);
    lv_label_set_text(ui_lv_label_4, "65% complete");
    lv_obj_set_style_text_color(ui_lv_label_4, lv_color_hex(0x22C55E), 0);
    lv_obj_set_style_text_font(ui_lv_label_4, &lv_font_montserrat_12, 0);
    lv_obj_set_style_text_align(ui_lv_label_4, LV_TEXT_ALIGN_CENTER, 0);

    lv_obj_t *ui_lv_btn_5 = lv_btn_create(ui_TaskStatus);
    lv_obj_set_pos(ui_lv_btn_5, 60, 185);
    lv_obj_set_size(ui_lv_btn_5, 120, 36);
    lv_obj_set_style_bg_color(ui_lv_btn_5, lv_color_hex(0x22C55E), 0);
    lv_obj_set_style_radius(ui_lv_btn_5, 18, 0);
    lv_obj_t *ui_lv_btn_5_label = lv_label_create(ui_lv_btn_5);
    lv_label_set_text(ui_lv_btn_5_label, "Stop Task");
    lv_obj_center(ui_lv_btn_5_label);
    lv_obj_set_style_text_color(ui_lv_btn_5_label, lv_color_hex(0x000000), 0);
}
