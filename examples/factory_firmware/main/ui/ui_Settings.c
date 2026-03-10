#include "ui.h"

lv_obj_t *ui_Settings;

void ui_Settings_screen_init(void) {
    ui_Settings = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Settings, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_color(ui_Settings, lv_color_hex(0x000000), 0);
    lv_obj_set_size(ui_Settings, 240, 240);

    lv_obj_t *ui_lv_obj_0 = lv_obj_create(ui_Settings);
    lv_obj_set_pos(ui_lv_obj_0, 0, 0);
    lv_obj_set_size(ui_lv_obj_0, 240, 240);
    lv_obj_clear_flag(ui_lv_obj_0, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_color(ui_lv_obj_0, lv_color_hex(0x0A0A0A), 0);
    lv_obj_set_style_radius(ui_lv_obj_0, 0, 0);

    lv_obj_t *ui_lv_label_1 = lv_label_create(ui_Settings);
    lv_obj_set_pos(ui_lv_label_1, 20, 15);
    lv_obj_set_size(ui_lv_label_1, 200, 24);
    lv_label_set_text(ui_lv_label_1, "Settings");
    lv_obj_set_style_text_color(ui_lv_label_1, lv_color_hex(0xFFFFFF), 0);
    lv_obj_set_style_text_font(ui_lv_label_1, &lv_font_montserrat_18, 0);

    lv_obj_t *ui_lv_label_2 = lv_label_create(ui_Settings);
    lv_obj_set_pos(ui_lv_label_2, 20, 55);
    lv_obj_set_size(ui_lv_label_2, 120, 20);
    lv_label_set_text(ui_lv_label_2, "WiFi");
    lv_obj_set_style_text_color(ui_lv_label_2, lv_color_hex(0xCCCCCC), 0);
    lv_obj_set_style_text_font(ui_lv_label_2, &lv_font_montserrat_14, 0);

    lv_obj_t *ui_lv_switch_3 = lv_switch_create(ui_Settings);
    lv_obj_set_pos(ui_lv_switch_3, 175, 52);
    lv_obj_set_size(ui_lv_switch_3, 44, 24);
    lv_obj_add_state(ui_lv_switch_3, LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_lv_switch_3, lv_color_hex(0x22C55E), LV_PART_INDICATOR | LV_STATE_CHECKED);

    lv_obj_t *ui_lv_label_4 = lv_label_create(ui_Settings);
    lv_obj_set_pos(ui_lv_label_4, 20, 90);
    lv_obj_set_size(ui_lv_label_4, 120, 20);
    lv_label_set_text(ui_lv_label_4, "Bluetooth");
    lv_obj_set_style_text_color(ui_lv_label_4, lv_color_hex(0xCCCCCC), 0);
    lv_obj_set_style_text_font(ui_lv_label_4, &lv_font_montserrat_14, 0);

    lv_obj_t *ui_lv_switch_5 = lv_switch_create(ui_Settings);
    lv_obj_set_pos(ui_lv_switch_5, 175, 87);
    lv_obj_set_size(ui_lv_switch_5, 44, 24);
    lv_obj_set_style_bg_color(ui_lv_switch_5, lv_color_hex(0x3B82F6), LV_PART_INDICATOR | LV_STATE_CHECKED);

    lv_obj_t *ui_lv_label_6 = lv_label_create(ui_Settings);
    lv_obj_set_pos(ui_lv_label_6, 20, 130);
    lv_obj_set_size(ui_lv_label_6, 120, 20);
    lv_label_set_text(ui_lv_label_6, "Brightness");
    lv_obj_set_style_text_color(ui_lv_label_6, lv_color_hex(0xCCCCCC), 0);
    lv_obj_set_style_text_font(ui_lv_label_6, &lv_font_montserrat_14, 0);

    lv_obj_t *ui_lv_slider_7 = lv_slider_create(ui_Settings);
    lv_obj_set_pos(ui_lv_slider_7, 20, 158);
    lv_obj_set_size(ui_lv_slider_7, 200, 10);
    lv_slider_set_value(ui_lv_slider_7, 70, LV_ANIM_OFF);
    lv_obj_set_style_bg_color(ui_lv_slider_7, lv_color_hex(0x22C55E), LV_PART_INDICATOR);

    lv_obj_t *ui_lv_label_8 = lv_label_create(ui_Settings);
    lv_obj_set_pos(ui_lv_label_8, 20, 190);
    lv_obj_set_size(ui_lv_label_8, 120, 20);
    lv_label_set_text(ui_lv_label_8, "Volume");
    lv_obj_set_style_text_color(ui_lv_label_8, lv_color_hex(0xCCCCCC), 0);
    lv_obj_set_style_text_font(ui_lv_label_8, &lv_font_montserrat_14, 0);

    lv_obj_t *ui_lv_slider_9 = lv_slider_create(ui_Settings);
    lv_obj_set_pos(ui_lv_slider_9, 20, 218);
    lv_obj_set_size(ui_lv_slider_9, 200, 10);
    lv_slider_set_value(ui_lv_slider_9, 45, LV_ANIM_OFF);
    lv_obj_set_style_bg_color(ui_lv_slider_9, lv_color_hex(0x3B82F6), LV_PART_INDICATOR);
}
