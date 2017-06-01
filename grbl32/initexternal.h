p32_ioport *portA;
p32_ioport *portB;
p32_ioport *portC;
p32_ioport *portD;
p32_ioport *portE;
p32_ioport *portF;
p32_ioport *portG;
p32_cn *portCN;
p32_adc *portADC;
p32_oc *portOC3;
p32_timer *timer3;

p32_cn *cnRegister;

p32_ioport *StepperPort;
uint32_t StepperMask;
uint32_t X_STEP_MASK;
uint32_t Y_STEP_MASK;
uint32_t Z_STEP_MASK;
uint32_t A_STEP_MASK;

p32_ioport *DirStepperPort;
uint32_t DirStepperMask;
uint32_t X_DIR_MASK;
uint32_t Y_DIR_MASK;
uint32_t Z_DIR_MASK;
uint32_t A_DIR_MASK;

p32_ioport *DisableStepperPort;
uint32_t STEPPER_DISABLE_MASK;
uint32_t DisableStepperMask;

p32_ioport *ControlPort;
uint32_t ControlMask;
uint32_t LimitMask;
uint32_t Xmin_LIMIT_MASK;
uint32_t Ymin_LIMIT_MASK;
uint32_t Zmin_LIMIT_MASK;
uint32_t Xmax_LIMIT_MASK;
uint32_t Ymax_LIMIT_MASK;
uint32_t Zmax_LIMIT_MASK;

bool bXmin;
bool bYmin;
bool bZmin;
bool bXmax;
bool bYmax;
bool bZmax;
bool bReset;

uint32_t RESET_MASK;
// uint32_t FEED_HOLD_MASK;
// uint32_t CYCLE_START_MASK;
// uint32_t SAFETY_DOOR_MASK;

p32_ioport *LaserPort;
uint32_t LaserMask;
p32_ioport *RelaisPort;
uint32_t RelaisMask;
p32_ioport *ProbePort;
uint32_t ProbeMask;
p32_ioport *LedPort;
uint32_t LED1_MASK;
uint32_t LED2_MASK;
uint32_t LED3_MASK;
uint32_t LED4_MASK;
uint32_t LED5_MASK;
uint32_t LED6_MASK;
uint32_t LED7_MASK;
uint32_t LED8_MASK;
uint32_t LedMask;

float Laser_power;
float Laser_divisor;
uint8_t Laser_state;

p32_ioport *blinkPort;
uint32_t blinkMask;

volatile uint8_t limit;

LiquidCrystal_I2C lcd;