#include "ui.h"
#include <Arduino.h>



void OnLed1(lv_event_t * e)
{
	// Your code here
  digitalWrite(LED1,HIGH);
}

void OffLed1(lv_event_t * e)
{
	// Your code here
   digitalWrite(LED1,LOW);
}

void OnLed2(lv_event_t * e)
{
	// Your code here
   digitalWrite(LED2,HIGH);
}

void OfLed2(lv_event_t * e)
{
	// Your code here
   digitalWrite(LED2,LOW);
}

void OnLed3(lv_event_t * e)
{
	// Your code here
   digitalWrite(LED3,HIGH);
}

void OffLed3(lv_event_t * e)
{
	// Your code here
   digitalWrite(LED3,LOW);
}

void OnLed4(lv_event_t * e)
{
	// Your code here
   digitalWrite(LED4,HIGH);
}

void OffLed4(lv_event_t * e)
{
	// Your code here
   digitalWrite(LED4,LOW);
}
