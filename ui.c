#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t *ui_Screen1;
lv_obj_t *ui_Image1;
lv_obj_t *ui_Label1;
void ui_event_Switch1( lv_event_t * e);
lv_obj_t *ui_Switch1;
void ui_event_Switch2( lv_event_t * e);
lv_obj_t *ui_Switch2;
void ui_event_Switch3( lv_event_t * e);
lv_obj_t *ui_Switch3;
void ui_event_Switch4( lv_event_t * e);
lv_obj_t *ui_Switch4;
lv_obj_t *ui_Label2;
lv_obj_t *ui_Label3;
lv_obj_t *ui_Label4;
lv_obj_t *ui_Label5;
void ui_event_Button1( lv_event_t * e);
lv_obj_t *ui_Button1;
lv_obj_t *ui_Label6;
lv_obj_t *ui_Dropdown1;
void ui_event_ImgButton1( lv_event_t * e);
lv_obj_t *ui_ImgButton1;
lv_obj_t *ui_Label9;
lv_obj_t *ui_Checkbox1;
lv_obj_t *ui_Checkbox2;
lv_obj_t *ui_Checkbox3;
lv_obj_t *ui_Label10;


// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
lv_obj_t *ui_Screen2;
lv_obj_t *ui_Label7;
void ui_event_Button3( lv_event_t * e);
lv_obj_t *ui_Button3;
lv_obj_t *ui_Label8;
lv_obj_t *ui_TempArc;
lv_obj_t *ui_Label11;
lv_obj_t *ui_Label12;
lv_obj_t *ui_Label13;
lv_obj_t *ui_Label15;
lv_obj_t *ui_Arc2;
lv_obj_t *ui_Label14;
lv_obj_t *ui_Label16;
lv_obj_t *ui_Chart2;
lv_obj_t *ui_Label17;
lv_obj_t *ui____initial_actions0;
const lv_img_dsc_t *ui_imgset_home[1] = {&ui_img_home2_png};
const lv_img_dsc_t *ui_imgset_1109068559[5] = {&ui_img_2124552784, &ui_img_2124545361, &ui_img_2124542038, &ui_img_2124543063, &ui_img_2124541013};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
//Switch 1
void ui_event_Switch1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target,LV_STATE_CHECKED)  ) {
      OnLed1( e );
}
if ( event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target,LV_STATE_CHECKED)  ) {
      OffLed1( e );
}
}

//Switch 2
void ui_event_Switch2( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target,LV_STATE_CHECKED)  ) {
      OnLed2( e );
}
if ( event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target,LV_STATE_CHECKED)  ) {
      OfLed2( e );
}
}

//Switch 3
void ui_event_Switch3( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target,LV_STATE_CHECKED)  ) {
      OnLed3( e );
}
if ( event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target,LV_STATE_CHECKED)  ) {
      OffLed3( e );
}
}

//Switch 4
void ui_event_Switch4( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target,LV_STATE_CHECKED)  ) {
      OnLed4( e );
}
if ( event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target,LV_STATE_CHECKED)  ) {
      OffLed4( e );
}
}
void ui_event_Button1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Screen2_screen_init);
}
}
void ui_event_ImgButton1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Screen2_screen_init);
}
}
void ui_event_Button3( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Screen1_screen_init);
}
}

///////////////////// SCREENS ////////////////////

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Screen1_screen_init();
ui_Screen2_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_Screen1);
}
