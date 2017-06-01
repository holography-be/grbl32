// extern_definition.h



#ifndef EXTERN_DEFINITION_H
#define EXTERN_DEFINITION_H

//#include "LiquidCrystal_I2C.h"

extern p32_ioport *portA;
extern p32_ioport *portB;
extern p32_ioport *portC;
extern p32_ioport *portD;
extern p32_ioport *portE;
extern p32_ioport *portF;
extern p32_ioport *portG;
extern p32_cn *portCN;
extern p32_adc *portADC;
extern p32_oc *portOC3;
extern p32_timer *timer3;

extern p32_cn *cnRegister;

extern p32_ioport *StepperPort;
extern uint32_t StepperMask;
extern uint32_t X_STEP_MASK;
extern uint32_t Y_STEP_MASK;
extern uint32_t Z_STEP_MASK;
extern uint32_t A_STEP_MASK;

extern p32_ioport *DirStepperPort;
extern uint32_t DirStepperMask;
extern uint32_t X_DIR_MASK;
extern uint32_t Y_DIR_MASK;
extern uint32_t Z_DIR_MASK;
extern uint32_t A_DIR_MASK;

extern p32_ioport *DisableStepperPort;
extern uint32_t STEPPER_DISABLE_MASK;
extern uint32_t DisableStepperMask;

extern p32_ioport *ControlPort;
extern uint32_t ControlMask;
extern uint32_t LimitMask;
extern uint32_t Xmin_LIMIT_MASK;
extern uint32_t Ymin_LIMIT_MASK;
extern uint32_t Zmin_LIMIT_MASK;
extern uint32_t Xmax_LIMIT_MASK;
extern uint32_t Ymax_LIMIT_MASK;
extern uint32_t Zmax_LIMIT_MASK;

extern bool bXmin;
extern bool bYmin;
extern bool bZmin;
extern bool bXmax;
extern bool bYmax;
extern bool bZmax;
extern bool bReset;

extern uint32_t RESET_MASK;
//extern uint32_t FEED_HOLD_MASK;
//extern uint32_t CYCLE_START_MASK;
//extern uint32_t SAFETY_DOOR_MASK;

extern p32_ioport *LaserPort;
extern uint32_t LaserMask;
extern p32_ioport *RelaisPort;
extern uint32_t RelaisMask;
extern p32_ioport *ProbePort;
extern uint32_t ProbeMask;
extern p32_ioport *LedPort;
extern uint32_t LED1_MASK;
extern uint32_t LED2_MASK;
extern uint32_t LED3_MASK;
extern uint32_t LED4_MASK;
extern uint32_t LED5_MASK;
extern uint32_t LED6_MASK;
extern uint32_t LED7_MASK;
extern uint32_t LED8_MASK;
extern uint32_t LedMask;

extern float Laser_power;
extern float Laser_divisor;
extern uint8_t Laser_state;

extern p32_ioport *blinkPort;
extern uint32_t blinkMask;



extern volatile uint8_t limit;

//extern LiquidCrystal_I2C lcd;

//extern settings_t settings;

//p32_ioport *LaserPort;
//uint32_t LaserMask;
//
//p32_ioport *RelaisPort;
//uint32_t RelaisMask;
//p32_ioport *ProbePort;
//uint32_t ProbeMask;
//
//p32_ioport *LedPort;
//uint32_t LED1_MASK = (1 << 4);
//uint32_t LED2_MASK = (1 << 5);
//uint32_t LED3_MASK = (1 << 6);
//uint32_t LED4_MASK = (1 << 7);
//uint32_t LED5_MASK = (1 << 8);
//uint32_t LED6_MASK = (1 << 9);
//uint32_t LED7_MASK = (1 << 10);
//uint32_t LED8_MASK = (1 << 11);
//uint32_t LedMask;

//float Laser_power = 0.0;
//float Laser_divisor = 1.0;
//uint8_t Laser_state = STATE_OFF;

//p32_ioport *blinkPort;
//uint32_t blinkMask;

//p32_cn *cnRegister;

//p32_ioport *portA = (p32_ioport *)0xBF886000;
//p32_ioport *portB = (p32_ioport *)0xBF886040;
//p32_ioport *portC = (p32_ioport *)0xBF886080;
//p32_ioport *portD = (p32_ioport *)0xBF8860C0;
//p32_ioport *portE = (p32_ioport *)0xBF886100;
//p32_ioport *portF = (p32_ioport *)0xBF886140;
//p32_ioport *portG = (p32_ioport *)0xBF886180;
//p32_oc *portOC3 = (p32_oc *)0xBF803400;
//p32_timer *timer3 = (p32_timer *)0xBF800A00;
//p32_cn *portCN = (p32_cn *)0xBF8861C0;
//p32_adc *portADC = (p32_adc *)0xBF809000;
//
////#include "AT24CX.h"
////#include "Settings.h"
//
////#undef PIN_LED_TX	
////#undef PIN_LED_RX
//
//char buffer[20];
//int idx = 0;
//int value;
//volatile uint8_t limit = 0;
//
//
//float Laser_power = 0.0;
//float Laser_divisor = 1.0;
//uint8_t Laser_state = STATE_OFF;
////
//p32_ioport *blinkPort;
//uint32_t blinkMask;
//


#endif