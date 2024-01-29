
#ifndef _UI_H
#define _UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
  #if __has_include("lvgl.h")
    #include "lvgl.h"
  #elif __has_include("lvgl/lvgl.h")
    #include "lvgl/lvgl.h"
  #else
    #include "lvgl.h"
  #endif
#else
  #include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t *ui_Screen1;
extern lv_obj_t *ui_Image1;
extern lv_obj_t *ui_Label1;
void ui_event_Switch1( lv_event_t * e);
extern lv_obj_t *ui_Switch1;
void ui_event_Switch2( lv_event_t * e);
extern lv_obj_t *ui_Switch2;
void ui_event_Switch3( lv_event_t * e);
extern lv_obj_t *ui_Switch3;
void ui_event_Switch4( lv_event_t * e);
extern lv_obj_t *ui_Switch4;
extern lv_obj_t *ui_Label2;
extern lv_obj_t *ui_Label3;
extern lv_obj_t *ui_Label4;
extern lv_obj_t *ui_Label5;
void ui_event_Button1( lv_event_t * e);
extern lv_obj_t *ui_Button1;
extern lv_obj_t *ui_Label6;
extern lv_obj_t *ui_Dropdown1;
void ui_event_ImgButton1( lv_event_t * e);
extern lv_obj_t *ui_ImgButton1;
extern lv_obj_t *ui_Label9;
extern lv_obj_t *ui_Checkbox1;
extern lv_obj_t *ui_Checkbox2;
extern lv_obj_t *ui_Checkbox3;
extern lv_obj_t *ui_Label10;
// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
extern lv_obj_t *ui_Screen2;
extern lv_obj_t *ui_Label7;
void ui_event_Button3( lv_event_t * e);
extern lv_obj_t *ui_Button3;
extern lv_obj_t *ui_Label8;
extern lv_obj_t *ui_TempArc;
extern lv_obj_t *ui_Label11;
extern lv_obj_t *ui_Label12;
extern lv_obj_t *ui_Label13;
extern lv_obj_t *ui_Label15;
extern lv_obj_t *ui_Arc2;
extern lv_obj_t *ui_Label14;
extern lv_obj_t *ui_Label16;
extern lv_obj_t *ui_Chart2;
extern lv_obj_t *ui_Label17;
extern lv_obj_t *ui____initial_actions0;

LV_IMG_DECLARE( ui_img_402665692);   // assets/home2 (1).png
LV_IMG_DECLARE( ui_img_1380428818);   // assets/images-7 (2).png
LV_IMG_DECLARE( ui_img_home2_png);   // assets/home2.png
LV_IMG_DECLARE( ui_img_2124552784);   // assets/images-2.png
LV_IMG_DECLARE( ui_img_2124545361);   // assets/images-3.png
LV_IMG_DECLARE( ui_img_2124542038);   // assets/images-4.png
LV_IMG_DECLARE( ui_img_2124543063);   // assets/images-5.png
LV_IMG_DECLARE( ui_img_2124541013);   // assets/images-7.png



void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
