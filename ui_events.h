#ifndef _UI_EVENTS_H
#define _UI_EVENTS_H

#ifdef __cplusplus
extern "C" {
#endif

#define LED1 13
#define LED2 12
#define LED3 14
#define LED4 27

void OnLed1(lv_event_t * e);
void OffLed1(lv_event_t * e);
void OnLed2(lv_event_t * e);
void OfLed2(lv_event_t * e);
void OnLed3(lv_event_t * e);
void OffLed3(lv_event_t * e);
void OnLed4(lv_event_t * e);
void OffLed4(lv_event_t * e);


#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
