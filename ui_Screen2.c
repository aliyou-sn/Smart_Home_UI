#include "ui.h"

extern float temperature;
extern float humidity;

void ui_Screen2_screen_init(void)
{
ui_Screen2 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label7 = lv_label_create(ui_Screen2);
lv_obj_set_width( ui_Label7, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label7, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label7, -4 );
lv_obj_set_y( ui_Label7, -128 );
lv_obj_set_align( ui_Label7, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label7,"Weather");
lv_obj_set_style_text_color(ui_Label7, lv_color_hex(0x06449F), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label7, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_26, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button3 = lv_btn_create(ui_Screen2);
lv_obj_set_width( ui_Button3, 88);
lv_obj_set_height( ui_Button3, 31);
lv_obj_set_x( ui_Button3, -166 );
lv_obj_set_y( ui_Button3, 129 );
lv_obj_set_align( ui_Button3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button3, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label8 = lv_label_create(ui_Screen2);
lv_obj_set_width( ui_Label8, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label8, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label8, -164 );
lv_obj_set_y( ui_Label8, 131 );
lv_obj_set_align( ui_Label8, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label8,"Back");
lv_obj_set_style_text_color(ui_Label8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label8, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_letter_space(ui_Label8, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_line_space(ui_Label8, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_TempArc = lv_arc_create(ui_Screen2);
lv_obj_set_width( ui_TempArc, 117);
lv_obj_set_height( ui_TempArc, 113);
lv_obj_set_x( ui_TempArc, -161 );
lv_obj_set_y( ui_TempArc, -21 );
lv_obj_set_align( ui_TempArc, LV_ALIGN_CENTER );
lv_arc_set_value(ui_TempArc, temperature);


ui_Label11 = lv_label_create(ui_Screen2);
lv_obj_set_width( ui_Label11, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label11, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label11, -166 );
lv_obj_set_y( ui_Label11, 51 );
lv_obj_set_align( ui_Label11, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label11,"Temperature");
lv_obj_set_style_text_color(ui_Label11, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label11, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label11, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label12 = lv_label_create(ui_Screen2);
lv_obj_set_width( ui_Label12, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label12, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label12, -35 );
lv_obj_set_y( ui_Label12, 52 );
lv_obj_set_align( ui_Label12, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label12,"Humidity");
lv_obj_set_style_text_color(ui_Label12, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label12, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label12, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label13 = lv_label_create(ui_Screen2);
lv_obj_set_width( ui_Label13, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label13, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label13, -160 );
lv_obj_set_y( ui_Label13, 0 );
lv_obj_set_align( ui_Label13, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label13,"Degree");
lv_obj_set_style_text_color(ui_Label13, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label13, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label13, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label15 = lv_label_create(ui_Screen2);
lv_obj_set_width( ui_Label15, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label15, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label15, -163 );
lv_obj_set_y( ui_Label15, -29 );
lv_obj_set_align( ui_Label15, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label15,"Temp");
lv_obj_set_style_text_color(ui_Label15, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label15, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Label15, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label15, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Arc2 = lv_arc_create(ui_Screen2);
lv_obj_set_width( ui_Arc2, 117);
lv_obj_set_height( ui_Arc2, 113);
lv_obj_set_x( ui_Arc2, -33 );
lv_obj_set_y( ui_Arc2, -22 );
lv_obj_set_align( ui_Arc2, LV_ALIGN_CENTER );
lv_arc_set_value(ui_Arc2, humidity);



ui_Label14 = lv_label_create(ui_Screen2);
lv_obj_set_width( ui_Label14, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label14, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label14, -33 );
lv_obj_set_y( ui_Label14, -25 );
lv_obj_set_align( ui_Label14, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label14,"Hum");
lv_obj_set_style_text_color(ui_Label14, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label14, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Label14, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label14, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label16 = lv_label_create(ui_Screen2);
lv_obj_set_width( ui_Label16, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label16, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label16, -33 );
lv_obj_set_y( ui_Label16, 7 );
lv_obj_set_align( ui_Label16, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label16,"%");
lv_obj_set_style_text_color(ui_Label16, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label16, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label16, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Chart2 = lv_chart_create(ui_Screen2);
lv_obj_set_width( ui_Chart2, 141);
lv_obj_set_height( ui_Chart2, 188);
lv_obj_set_x( ui_Chart2, 130 );
lv_obj_set_y( ui_Chart2, 0 );
lv_obj_set_align( ui_Chart2, LV_ALIGN_CENTER );
lv_chart_set_type( ui_Chart2, LV_CHART_TYPE_LINE);
lv_chart_set_axis_tick( ui_Chart2, LV_CHART_AXIS_PRIMARY_X, 10, 5, 5, 2, true, 50);
lv_chart_set_axis_tick( ui_Chart2, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 2, true, 50);
lv_chart_set_axis_tick( ui_Chart2, LV_CHART_AXIS_SECONDARY_Y, 10, 5, 5, 2, true, 25);
lv_chart_series_t* ui_Chart2_series_1 = lv_chart_add_series(ui_Chart2, lv_color_hex(0x808080), LV_CHART_AXIS_PRIMARY_Y);
static lv_coord_t ui_Chart2_series_1_array[] = { 0,10,20,40,80,80,40,20,10,0 };
lv_chart_set_ext_y_array(ui_Chart2, ui_Chart2_series_1, ui_Chart2_series_1_array);



ui_Label17 = lv_label_create(ui_Screen2);
lv_obj_set_width( ui_Label17, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label17, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label17, 139 );
lv_obj_set_y( ui_Label17, 138 );
lv_obj_set_align( ui_Label17, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label17,"Weather Forecast");
lv_obj_set_style_text_color(ui_Label17, lv_color_hex(0x236DD8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label17, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label17, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_Button3, ui_event_Button3, LV_EVENT_ALL, NULL);

}
