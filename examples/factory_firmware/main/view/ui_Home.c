#include "ui.h"

lv_obj_t *ui_Home;

void ui_Home_screen_init(void) {
    ui_Home = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Home, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_color(ui_Home, lv_color_hex(0x000000), 0);
    lv_obj_set_size(ui_Home, 240, 240);

    lv_obj_t *ui_lv_obj_0 = lv_obj_create(ui_Home);
    lv_obj_set_pos(ui_lv_obj_0, 0, 0);
    lv_obj_set_size(ui_lv_obj_0, 240, 240);
    lv_obj_clear_flag(ui_lv_obj_0, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_color(ui_lv_obj_0, lv_color_hex(0x000000), 0);
    lv_obj_set_style_radius(ui_lv_obj_0, 0, 0);

    lv_obj_t *ui_lv_arc_1 = lv_arc_create(ui_Home);
    lv_obj_set_pos(ui_lv_arc_1, 60, 70);
    lv_obj_set_size(ui_lv_arc_1, 40, 40);
    lv_arc_set_bg_angles(ui_lv_arc_1, 0, 360);
    lv_obj_set_style_arc_width(ui_lv_arc_1, 4, LV_PART_MAIN);
    lv_obj_set_style_arc_color(ui_lv_arc_1, lv_color_hex(0x00FF88), LV_PART_INDICATOR);
    lv_obj_set_style_arc_color(ui_lv_arc_1, lv_color_hex(0x1A1A2E), LV_PART_MAIN);

    lv_obj_t *ui_lv_arc_2 = lv_arc_create(ui_Home);
    lv_obj_set_pos(ui_lv_arc_2, 140, 70);
    lv_obj_set_size(ui_lv_arc_2, 40, 40);
    lv_arc_set_bg_angles(ui_lv_arc_2, 0, 360);
    lv_obj_set_style_arc_width(ui_lv_arc_2, 4, LV_PART_MAIN);
    lv_obj_set_style_arc_color(ui_lv_arc_2, lv_color_hex(0x00FF88), LV_PART_INDICATOR);
    lv_obj_set_style_arc_color(ui_lv_arc_2, lv_color_hex(0x1A1A2E), LV_PART_MAIN);

    lv_obj_t *ui_lv_arc_3 = lv_arc_create(ui_Home);
    lv_obj_set_pos(ui_lv_arc_3, 70, 130);
    lv_obj_set_size(ui_lv_arc_3, 100, 60);
    lv_arc_set_bg_angles(ui_lv_arc_3, 180, 360);
    lv_obj_set_style_arc_width(ui_lv_arc_3, 3, LV_PART_MAIN);
    lv_obj_set_style_arc_color(ui_lv_arc_3, lv_color_hex(0x00FF88), LV_PART_INDICATOR);
    lv_obj_set_style_arc_color(ui_lv_arc_3, lv_color_hex(0xFFFFFF), LV_PART_MAIN);

    lv_obj_t *ui_lv_label_4 = lv_label_create(ui_Home);
    lv_obj_set_pos(ui_lv_label_4, 60, 210);
    lv_obj_set_size(ui_lv_label_4, 120, 20);
    lv_label_set_text(ui_lv_label_4, "Ready");
    lv_obj_set_style_text_color(ui_lv_label_4, lv_color_hex(0x66FFAA), 0);
    lv_obj_set_style_text_font(ui_lv_label_4, &lv_font_montserrat_14, 0);
    lv_obj_set_style_text_align(ui_lv_label_4, LV_TEXT_ALIGN_CENTER, 0);
}
