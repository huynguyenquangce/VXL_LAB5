/*
 * software_timer.h
 *
 *  Created on: Dec 20, 2023
 *      Author: admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#define TICK 10
extern int timer1_flag;  // timer for counter
extern int timer1_counter;
void setTimer1(int duration);
void timer1Run();

extern int timer2_flag;  // timer for blink
extern int timer2_counter;
void setTimer2(int duration);
void timer2Run();

#endif /* INC_SOFTWARE_TIMER_H_ */
