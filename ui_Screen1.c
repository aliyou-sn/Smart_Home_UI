#include "ui.h"

void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0xFFFFFF), LV_PART_SCROLLBAR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_SCROLLBAR| LV_STATE_DEFAULT);

ui_Image1 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image1, &ui_img_402665692);
lv_obj_set_width( ui_Image1, 67);
lv_obj_set_height( ui_Image1, 60);
lv_obj_set_x( ui_Image1, 15 );
lv_obj_set_y( ui_Image1, -138 );
lv_obj_set_align( ui_Image1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image1, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label1 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label1, -105 );
lv_obj_set_y( ui_Label1, -62 );
lv_obj_set_align( ui_Label1, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label1,"Lights");
lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Label1, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_decor(ui_Label1, LV_TEXT_DECOR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_30, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Switch1 = lv_switch_create(ui_Screen1);
lv_obj_set_width( ui_Switch1, 74);
lv_obj_set_height( ui_Switch1, 42);
lv_obj_set_x( ui_Switch1, -161 );
lv_obj_set_y( ui_Switch1, -14 );
lv_obj_set_align( ui_Switch1, LV_ALIGN_CENTER );
lv_obj_set_style_bg_color(ui_Switch1, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Switch1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_Switch1, lv_color_hex(0x032455), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Switch1, 255, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_Switch2 = lv_switch_create(ui_Screen1);
lv_obj_set_width( ui_Switch2, 74);
lv_obj_set_height( ui_Switch2, 42);
lv_obj_set_x( ui_Switch2, -48 );
lv_obj_set_y( ui_Switch2, -14 );
lv_obj_set_align( ui_Switch2, LV_ALIGN_CENTER );
lv_obj_set_style_bg_color(ui_Switch2, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Switch2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_Switch2, lv_color_hex(0x032455), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Switch2, 255, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_Switch3 = lv_switch_create(ui_Screen1);
lv_obj_set_width( ui_Switch3, 74);
lv_obj_set_height( ui_Switch3, 41);
lv_obj_set_x( ui_Switch3, -160 );
lv_obj_set_y( ui_Switch3, 60 );
lv_obj_set_align( ui_Switch3, LV_ALIGN_CENTER );
lv_obj_set_style_bg_color(ui_Switch3, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Switch3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_Switch3, lv_color_hex(0x032455), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Switch3, 255, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_Switch4 = lv_switch_create(ui_Screen1);
lv_obj_set_width( ui_Switch4, 74);
lv_obj_set_height( ui_Switch4, 42);
lv_obj_set_x( ui_Switch4, -47 );
lv_obj_set_y( ui_Switch4, 60 );
lv_obj_set_align( ui_Switch4, LV_ALIGN_CENTER );
lv_obj_set_style_bg_color(ui_Switch4, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Switch4, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_Switch4, lv_color_hex(0x032455), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Switch4, 255, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_Label2 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label2, -160 );
lv_obj_set_y( ui_Label2, 21 );
lv_obj_set_align( ui_Label2, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label2,"Garden Light");
lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Label2, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_decor(ui_Label2, LV_TEXT_DECOR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label3 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label3, -41 );
lv_obj_set_y( ui_Label3, 20 );
lv_obj_set_align( ui_Label3, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label3,"Varenda light");
lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Label3, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_decor(ui_Label3, LV_TEXT_DECOR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label4 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label4, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label4, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label4, -34 );
lv_obj_set_y( ui_Label4, 97 );
lv_obj_set_align( ui_Label4, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label4,"Outdoor Light 2");
lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Label4, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_decor(ui_Label4, LV_TEXT_DECOR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label5 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label5, -162 );
lv_obj_set_y( ui_Label5, 98 );
lv_obj_set_align( ui_Label5, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label5,"Outdoor light 1");
lv_obj_set_style_text_color(ui_Label5, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label5, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Label5, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_decor(ui_Label5, LV_TEXT_DECOR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button1 = lv_btn_create(ui_Screen1);
lv_obj_set_width( ui_Button1, 120);
lv_obj_set_height( ui_Button1, 27);
lv_obj_set_x( ui_Button1, -5 );
lv_obj_set_y( ui_Button1, 211 );
lv_obj_set_align( ui_Button1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0x06449F), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label6 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label6, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label6, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label6, -5 );
lv_obj_set_y( ui_Label6, 212 );
lv_obj_set_align( ui_Label6, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label6,"GO TO Chart");
lv_obj_set_style_text_color(ui_Label6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label6, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Dropdown1 = lv_dropdown_create(ui_Screen1);
lv_obj_set_width( ui_Dropdown1, 150);
lv_obj_set_height( ui_Dropdown1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Dropdown1, 153 );
lv_obj_set_y( ui_Dropdown1, -118 );
lv_obj_set_align( ui_Dropdown1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Dropdown1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags



ui_ImgButton1 = lv_imgbtn_create(ui_Screen1);
lv_imgbtn_set_src(ui_ImgButton1, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1380428818, NULL);
lv_obj_set_height( ui_ImgButton1, 42);
lv_obj_set_width( ui_ImgButton1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( ui_ImgButton1, 165 );
lv_obj_set_y( ui_ImgButton1, 114 );
lv_obj_set_align( ui_ImgButton1, LV_ALIGN_CENTER );

ui_Label9 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label9, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label9, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label9, 167 );
lv_obj_set_y( ui_Label9, 147 );
lv_obj_set_align( ui_Label9, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label9,"Weather page");
lv_obj_set_style_text_color(ui_Label9, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label9, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Checkbox1 = lv_checkbox_create(ui_Screen1);
lv_checkbox_set_text(ui_Checkbox1,"Front Door");
lv_obj_set_width( ui_Checkbox1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Checkbox1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Checkbox1, 127 );
lv_obj_set_y( ui_Checkbox1, -17 );
lv_obj_set_align( ui_Checkbox1, LV_ALIGN_CENTER );
lv_obj_add_state( ui_Checkbox1, LV_STATE_CHECKED );     /// States
lv_obj_add_flag( ui_Checkbox1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_set_style_text_color(ui_Checkbox1, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Checkbox1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Checkbox2 = lv_checkbox_create(ui_Screen1);
lv_checkbox_set_text(ui_Checkbox2,"Garage Door");
lv_obj_set_width( ui_Checkbox2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Checkbox2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Checkbox2, 134 );
lv_obj_set_y( ui_Checkbox2, 19 );
lv_obj_set_align( ui_Checkbox2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Checkbox2, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_set_style_text_color(ui_Checkbox2, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Checkbox2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Checkbox3 = lv_checkbox_create(ui_Screen1);
lv_checkbox_set_text(ui_Checkbox3,"Back Door");
lv_obj_set_width( ui_Checkbox3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Checkbox3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Checkbox3, 127 );
lv_obj_set_y( ui_Checkbox3, 56 );
lv_obj_set_align( ui_Checkbox3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Checkbox3, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_set_style_text_color(ui_Checkbox3, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Checkbox3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label10 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label10, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label10, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label10, 133 );
lv_obj_set_y( ui_Label10, -61 );
lv_obj_set_align( ui_Label10, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label10,"Doors");
lv_obj_set_style_text_color(ui_Label10, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label10, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Label10, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_decor(ui_Label10, LV_TEXT_DECOR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label10, &lv_font_montserrat_30, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_Switch1, ui_event_Switch1, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Switch2, ui_event_Switch2, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Switch3, ui_event_Switch3, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Switch4, ui_event_Switch4, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_ImgButton1, ui_event_ImgButton1, LV_EVENT_ALL, NULL);

}
