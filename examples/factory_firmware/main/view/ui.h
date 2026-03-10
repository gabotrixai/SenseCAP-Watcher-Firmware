#ifndef UI_H
#define UI_H

#include "lvgl.h"

extern lv_obj_t *ui_Screen_1;
void ui_Screen_1_screen_init(void);

extern lv_obj_t *ui_Screen_2;
void ui_Screen_2_screen_init(void);

extern lv_obj_t *ui_Settings;
void ui_Settings_screen_init(void);

void ui_init(void);

#endif // UI_H
