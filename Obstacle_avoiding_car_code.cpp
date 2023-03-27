/****************************************************/
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tm4c123gh6pm.h"
/*
#define SYSCTL_RCGCADC_R        (*((volatile unsigned long *)0x400FE638))
#define SYSCTL_RCGC2_R          (*((volatile unsigned long *)0x400FE108))
#define GPIO_PORTD_DATA_R       (*((volatile unsigned long *)0x400073FC))
#define GPIO_PORTD_DIR_R        (*((volatile unsigned long *)0x40007400))
#define GPIO_PORTD_AFSEL_R      (*((volatile unsigned long *)0x40007420))
#define GPIO_PORTD_PUR_R        (*((volatile unsigned long *)0x40007510))
#define GPIO_PORTD_DEN_R        (*((volatile unsigned long *)0x4000751C))
#define GPIO_PORTD_LOCK_R       (*((volatile unsigned long *)0x40007520))
#define GPIO_PORTD_CR_R         (*((volatile unsigned long *)0x40007524))
#define GPIO_PORTD_AMSEL_R      (*((volatile unsigned long *)0x40007528))
#define GPIO_PORTD_PCTL_R       (*((volatile unsigned long *)0x4000752C))

#define GPIO_PORTF_DATA_R       (*((volatile unsigned long *)0x400253FC))
#define GPIO_PORTF_DIR_R        (*((volatile unsigned long *)0x40025400))
#define GPIO_PORTF_AFSEL_R      (*((volatile unsigned long *)0x40025420))
#define GPIO_PORTF_PUR_R        (*((volatile unsigned long *)0x40025510))
#define GPIO_PORTF_DEN_R        (*((volatile unsigned long *)0x4002551C))
#define GPIO_PORTF_LOCK_R       (*((volatile unsigned long *)0x40025520))
#define GPIO_PORTF_CR_R         (*((volatile unsigned long *)0x40025524))
#define GPIO_PORTF_AMSEL_R      (*((volatile unsigned long *)0x40025528))
#define GPIO_PORTF_PCTL_R       (*((volatile unsigned long *)0x4002552C))

#define GPIO_PORTB_DATA_R       (*((volatile unsigned long *)0x400053FC))
#define GPIO_PORTB_DIR_R        (*((volatile unsigned long *)0x40005400))
#define GPIO_PORTB_PUR_R        (*((volatile unsigned long *)0x40005510))
#define GPIO_PORTB_DEN_R        (*((volatile unsigned long *)0x4000551C))
#define GPIO_PORTB_CR_R         (*((volatile unsigned long *)0x40005524))
#define GPIO_PORTB_AMSEL_R      (*((volatile unsigned long *)0x40005528))
#define GPIO_PORTB_PCTL_R       (*((volatile unsigned long *)0x4000552C))
#define GPIO_PORTB_AFSEL_R      (*((volatile unsigned long *)0x40005420))
#define GPIO_PORTB_LOCK_R       (*((volatile unsigned long *)0x40005520)) 
#define SYSCTL_RCGC2_R          (*((volatile unsigned long *)0x400FE108))

#define GPIO_PORTE_DATA_R       (*((volatile unsigned long *)0x400243FC))
#define GPIO_PORTE_DIR_R        (*((volatile unsigned long *)0x40024400))
#define GPIO_PORTE_PUR_R        (*((volatile unsigned long *)0x40024510))
#define GPIO_PORTE_DEN_R        (*((volatile unsigned long *)0x4002451C))
#define GPIO_PORTE_CR_R         (*((volatile unsigned long *)0x40024524))
#define GPIO_PORTE_AMSEL_R      (*((volatile unsigned long *)0x40024528))
#define GPIO_PORTE_AFSEL_R      (*((volatile unsigned long *)0x40024420))
#define GPIO_PORTE_PCTL_R       (*((volatile unsigned long *)0x4002452C))

#define UART5_DR_R              (*((volatile unsigned long *)0x40011000))
#define UART5_FR_R              (*((volatile unsigned long *)0x40011018))
#define UART5_IBRD_R            (*((volatile unsigned long *)0x40011024))
#define UART5_FBRD_R            (*((volatile unsigned long *)0x40011028))
#define UART5_LCRH_R            (*((volatile unsigned long *)0x4001102C))
#define UART5_CTL_R             (*((volatile unsigned long *)0x40011030))
#define UART5_CC_R              (*((volatile unsigned long *)0x40011FC8))

	
#define NVIC_EN0_R              (*((volatile unsigned long *)0xE000E100))   // IRQ 0 to 31 Set Enable Register
#define NVIC_PRI4_R             (*((volatile unsigned long *)0xE000E410)) 
#define SYSCTL_RCGCTIMER_R      (*((volatile unsigned long *)0x400FE604))
#define SYSCTL_RCGC2_R          (*((volatile unsigned long *)0x400FE108))
	
#define TIMER0_CFG_R            (*((volatile unsigned long *)0x40030000))
#define TIMER0_TAMR_R           (*((volatile unsigned long *)0x40030004))
#define TIMER0_CTL_R            (*((volatile unsigned long *)0x4003000C))
#define TIMER0_RIS_R            (*((volatile unsigned long *)0x4003001C))
#define TIMER0_ICR_R            (*((volatile unsigned long *)0x40030024))
#define TIMER0_TAILR_R          (*((volatile unsigned long *)0x40030028))
#define TIMER0_TAPR_R           (*((volatile unsigned long *)0x40030038))	
#define TIMER0_IMR_R            (*((volatile unsigned long *)0x40030018))					
#define TIMER0_MIS_R            (*((volatile unsigned long *)0x40030020))
#define TIMER0_TAPV_R           (*((volatile unsigned long *)0x40030064))
	
#define TIMER1_CFG_R            (*((volatile unsigned long *)0x40031000))
#define TIMER1_TAMR_R           (*((volatile unsigned long *)0x40031004))
#define TIMER1_CTL_R            (*((volatile unsigned long *)0x4003100C))
#define TIMER1_IMR_R            (*((volatile unsigned long *)0x40031018))
#define TIMER1_RIS_R            (*((volatile unsigned long *)0x4003101C))
#define TIMER1_MIS_R            (*((volatile unsigned long *)0x40031020))
#define TIMER1_ICR_R            (*((volatile unsigned long *)0x40031024))
#define TIMER1_TAILR_R          (*((volatile unsigned long *)0x40031028))
#define TIMER1_TAPR_R           (*((volatile unsigned long *)0x40031038))

#define TIMER2_CFG_R            (*((volatile unsigned long *)0x40031000))
#define TIMER2_TAMR_R           (*((volatile unsigned long *)0x40031004))
#define TIMER2_CTL_R            (*((volatile unsigned long *)0x4003100C))
#define TIMER2_IMR_R            (*((volatile unsigned long *)0x40031018))
#define TIMER2_RIS_R            (*((volatile unsigned long *)0x4003101C))
#define TIMER2_MIS_R            (*((volatile unsigned long *)0x40031020))
#define TIMER2_ICR_R            (*((volatile unsigned long *)0x40031024))
#define TIMER2_TAILR_R          (*((volatile unsigned long *)0x40031028))
#define TIMER2_TAPR_R           (*((volatile unsigned long *)0x40031038))
#define TIMER2_TAR_R            (*((volatile unsigned long *)0x40032048)) 

#define SYSCTL_RCGCUART_R       (*((volatile unsigned long *)0x400FE618))
#define SYSCTL_RCGC2_R          (*((volatile unsigned long *)0x400FE108))
#define SYSCTL_RCGCTIMER_R      (*((volatile unsigned long *)0x400FE604))
*/

void DisableInterrupts(void);
void EnableInterrupts(void);
void WaitForInterrupt(void);

void HC05_Init(void);
void PortBEF_Init(void);
void timer1A_delay(int ttime);
//void Timer0A_1sd(void);
char blueTooth_Read(void);
void blueTooth_Write(unsigned char data);
void write_string(char *str);
char switchCheck(void);
void Timer1A_10sd(void);
void Timer2A_10sd(void);

void servo_0(void);
void servo_45(void);
void servo_90(void);
void servo_135(void);
void servo_180(void);

void PWM_Init_left(void);
void PWM_Init_right(void);

void getDistance(void);


unsigned long cycle1=0,cycle2=0,diff=0;
int time=0,distance=0;

char snum[12];

void servo_0(void){
	int i=0;
	
	for(i=0;i<50;i++){
		GPIO_PORTA_DATA_R = 0x20;//high for PB4
		timer1A_delay(500);
		//GPIO_PORTF_DATA_R = 0x0E;
		GPIO_PORTA_DATA_R = 0x00;//high for PB4
		timer1A_delay(19500);
		//GPIO_PORTF_DATA_R = 0xE;
	}
}

void servo_45(void){
	int i=0;
	GPIO_PORTF_DATA_R = 0xE;
	for(i=0;i<50;i++){
		GPIO_PORTA_DATA_R = 0x20;//high for PB4
		timer1A_delay(1000);
		//GPIO_PORTF_DATA_R = 0x0E;
		GPIO_PORTA_DATA_R = 0x00;//high for PB4
		timer1A_delay(19000);
	}
}

void servo_90(void){
	int i=0;
	GPIO_PORTF_DATA_R = 0xE;
	for(i=0;i<50;i++){
		GPIO_PORTA_DATA_R = 0x20;//high for PB4
		timer1A_delay(1400);
		//GPIO_PORTF_DATA_R = 0x0E;
		GPIO_PORTA_DATA_R = 0x00;//high for PB4
		timer1A_delay(18600);
	}
}

void servo_135(void){
	int i=0;
	//GPIO_PORTF_DATA_R = 0xE;
	for(i=0;i<50;i++){
		GPIO_PORTA_DATA_R = 0x20;//high for PB4
		timer1A_delay(2000);
		//GPIO_PORTF_DATA_R = 0x0E;
		GPIO_PORTA_DATA_R = 0x00;//high for PB4
		timer1A_delay(18000);
	}
}

void servo_180(void){
	int i=0;
	//GPIO_PORTF_DATA_R = 0xE;
	for(i=0;i<50;i++){
		GPIO_PORTA_DATA_R = 0x20;//high for PB4
		timer1A_delay(2400);
		//GPIO_PORTF_DATA_R = 0x0E;
		GPIO_PORTA_DATA_R = 0x00;//high for PB4
		timer1A_delay(17600);
	}
}


void PWM_Init_left(void){
	
	SYSCTL_RCGCPWM_R=0x02;
	timer1A_delay(10);
	SYSCTL_RCC_R &= 0xFFE1FFFF;
	SYSCTL_RCC_R |= 0x001E0000;
	PWM1_0_GENA_R |= 0x8C;
	PWM1_0_LOAD_R = 15625;
	PWM1_0_CMPA_R = 7813;
	PWM1_CTL_R &= 0x00;
	PWM1_CTL_R |= 0x01;
	PWM1_ENABLE_R |= 0x100;
}

void PWM_Init_right(void){
	SYSCTL_RCGCPWM_R=0x0F;
	timer1A_delay(10);
	SYSCTL_RCC_R &= 0xFFE1FFFF;
	SYSCTL_RCC_R |= 0x001E0000;
	PWM1_1_GENB_R |= 0xC8;
	PWM1_1_LOAD_R = 15625;
	PWM1_1_CMPB_R = 7813;
	PWM1_CTL_R |= 0x01;
	PWM1_ENABLE_R |= 0x200;
}


/*
void TIMER0A_Handler(void){
	GPIO_PORTF_DATA_R = 0x0E;
		timer1A_delay(1000000);
	if((TIMER0_RIS_R & 0x01)){
	GPIO_PORTF_DATA_R = 0x0E;
		timer1A_delay(1000000);
	GPIO_PORTB_DATA_R=0x02;//Triggering
	timer1A_delay(100);//10 micro seconds
	GPIO_PORTB_DATA_R=0x00;//Triggering	stop
	TIMER2_ICR_R=0x04;//capture mode
	//	GPIO_PORTF_DATA_R = 0x0E;
	if((TIMER2_RIS_R & 0x04)==0x04){
		while((TIMER2_RIS_R & 0x04)==0);
	}
		//GPIO_PORTF_DATA_R = 0x0E;
	if((GPIO_PORTB_DATA_R & 0x01)== 0x01){
		cycle1=TIMER2_TAR_R;
		}
			//	GPIO_PORTF_DATA_R = 0x0E;
		while((GPIO_PORTB_DATA_R & 0x01)==0x00);
		//		GPIO_PORTF_DATA_R = 0x0E;

		TIMER2_ICR_R=0x04;//capture mode,since this is like a spike not a clock
		
		if((TIMER2_RIS_R & 0x04)==0x04){
			while((TIMER2_RIS_R & 0x04)==0);
		}
				//GPIO_PORTF_DATA_R = 0x0E;

		cycle2=TIMER2_TAR_R;
		diff=cycle2-cycle1;
		//time=diff*0.0625*0.000001;
		distance=340*100*diff/(2*16000000);
		write_string("\ndistance:");
	  //distance=(int)distance;
		
		//GPIO_PORTF_DATA_R = 0x0E;
	//char *dist=(char*)malloc(distance);
	
		sprintf(snum, "%d", distance);
		write_string(snum);
		
}
	TIMER0_ICR_R=0x01;
}
*/

void getDistance(void){
	
	GPIO_PORTF_DATA_R = 0x02;
		timer1A_delay(1000000);
	GPIO_PORTB_DATA_R=0x02;//Triggering
	timer1A_delay(100);//10 micro seconds
	GPIO_PORTB_DATA_R=0x00;//Triggering	stop
	TIMER2_ICR_R=0x04;//capture mode
	//	GPIO_PORTF_DATA_R = 0x0E;
	if((TIMER2_RIS_R & 0x04)==0x04){
		while((TIMER2_RIS_R & 0x04)==0);
	}
		//GPIO_PORTF_DATA_R = 0x0E;
	if((GPIO_PORTB_DATA_R & 0x01)== 0x01){
		cycle1=TIMER2_TAR_R;
		}
			//	GPIO_PORTF_DATA_R = 0x0E;
		while((GPIO_PORTB_DATA_R & 0x01)==0x00);
		//		GPIO_PORTF_DATA_R = 0x0E;

		TIMER2_ICR_R=0x04;//capture mode,since this is like a spike not a clock
		
		if((TIMER2_RIS_R & 0x04)==0x04){
			while((TIMER2_RIS_R & 0x04)==0);
		}
				//GPIO_PORTF_DATA_R = 0x0E;

		cycle2=TIMER2_TAR_R;
		diff=cycle2-cycle1;
		//time=diff*0.0625*0.000001;
		distance=340*100*diff/(2*50000000);
		write_string("\ndistance:");
	  //distance=(int)distance;
		
		//GPIO_PORTF_DATA_R = 0x0E;
	//char *dist=(char*)malloc(distance);
	
		sprintf(snum, "%d", distance);
		write_string(snum);

}


char blueTooth_Read(void){
		
		char data;
	  while((UART5_FR_R & (1<<4)) != 0); /* wait until Rx buffer is not full */
    
		//switchCheck();
		data = UART5_DR_R ;  	/* before giving it another byte */
		
			return (unsigned char) data;
}

void blueTooth_Write(unsigned char data){
		while ((UART5_FR_R & 0x20)!=0);
				UART5_DR_R = data;
		
}

void write_string(char *str){
		int i;
		for (i=0; i< strlen(str); i++){
				blueTooth_Write(str[i]);
		}
		
}

void HC05_Init(void){
		SYSCTL_RCGCUART_R |= 0x20;
	  timer1A_delay(1);
		UART5_CTL_R = 0;
		UART5_IBRD_R = 325;
		UART5_FBRD_R = 34;
		UART5_CC_R = 0;
		UART5_LCRH_R = 0x60;
		UART5_CTL_R = 0x301;
}

void PortBEF_Init(void){
		volatile unsigned long delay;
		SYSCTL_RCGC2_R |= 0x3B;     // 1) B, E, F port clock 
		 delay = SYSCTL_RCGC2_R;
		GPIO_PORTF_LOCK_R = 0x4C4F434B;   // 2) unlock PortF PF0  
		GPIO_PORTF_CR_R = 0x1F;           // allow changes to PF4-0       
		GPIO_PORTF_AMSEL_R = 0x00;        // 3) disable analog function
		GPIO_PORTF_PCTL_R = 0x00000000;   // 4) GPIO clear bit PCTL  
		GPIO_PORTF_DIR_R = 0x0E;          // 5) PF4,PF0 input, PF3,PF2,PF1 output   
		GPIO_PORTF_AFSEL_R = 0x00;        // 6) no alternate function
		GPIO_PORTF_PUR_R = 0x11;          // enable pullup resistors on PF4,PF0       
		GPIO_PORTF_DEN_R = 0x1F;          // 7) enable digital pins PF4-PF0
	
		//GPIO_PORTE_CR_R = 0x30;           // Allow changes to PE4-0       
		GPIO_PORTE_AMSEL_R = 0x00;        // Disable analog function
		// GPIO_PORTE_PUR_R = 0x00;          // Disable pullup resistors       
		GPIO_PORTE_PCTL_R = 0x00110000;   // PCTL for PE4, PE5 in UART5 
		//GPIO_PORTE_PUR_R = 0x00;          // Disable pullup resistors       
		GPIO_PORTE_AFSEL_R = 0x30;				// Alternate function
		GPIO_PORTE_CR_R |= 0x30;           // Allow changes to PE4-0       
		GPIO_PORTE_DIR_R |= 0x20;          // PE3-PE0 output   
		GPIO_PORTE_DEN_R = 0x30;          // Enable digital pins PE3-PE0  	

		//timer1A_delay(2);
	// T2CCP0 = is set as input to capture timer
		//SYSCTL_RCGC2_R |= 0x00000002;     // Port B clock initialized
		GPIO_PORTB_DIR_R &= ~0x01;
		GPIO_PORTB_DIR_R |= 0x02;          // Set PB0 input, PB1 output   
		//GPIO_PORTB_PUR_R = 0x00;          // Enable pullup resistors on PB4,PF0       
		GPIO_PORTB_DEN_R = 0x03;          // 7) Enable digital pins PB6-PB0   
		//GPIO_PORTB_CR_R = 0x03;           // Allow changes to PB6-PB0       
		GPIO_PORTB_AFSEL_R = 0x1;        // Enable alternate function
		GPIO_PORTB_PCTL_R &= ~0x0000000F;   // Set PCTL bits for T2CCP0 
		GPIO_PORTB_PCTL_R |= 0x00000007;   // Set PCTL bits for T2CCP0 
		
		GPIO_PORTA_LOCK_R = 0x4C4F434B;   // 2) unlock PortF PF0
		GPIO_PORTA_DIR_R &= ~0xFC;
		GPIO_PORTA_DIR_R |= 0xFC;          // Set PB0 input, PB1 output   
		//GPIO_PORTB_PUR_R = 0x00;          // Enable pullup resistors on PB4,PF0       
		GPIO_PORTA_DEN_R = 0xFC;          // 7) Enable digital pins PB6-PB0   
		GPIO_PORTA_CR_R = 0xFC;           // Allow changes to PB6-PB0       
		GPIO_PORTA_AFSEL_R = 0x00;        // Enable alternate function
		GPIO_PORTA_AMSEL_R = 0x00;        // Disable analog function
		GPIO_PORTA_PCTL_R &= ~0x00000000;   // Set PCTL bits for T2CCP0
		GPIO_PORTA_PCTL_R |= 0x00000000;   // Set PCTL bits for T2CCP0 
		
		GPIO_PORTD_LOCK_R = 0x4C4F434B;   // 2) unlock PortF PF0
		GPIO_PORTD_DIR_R &= ~0x03;
		GPIO_PORTD_DIR_R |= 0x03;          // Set PB0 input, PB1 output   
		//GPIO_PORTB_PUR_R = 0x00;          // Enable pullup resistors on PB4,PF0       
		GPIO_PORTD_DEN_R = 0x03;          // 7) Enable digital pins PB6-PB0   
		GPIO_PORTD_CR_R = 0x03;           // Allow changes to PB6-PB0       
		GPIO_PORTD_AFSEL_R = 0x03;        // Enable alternate function
		GPIO_PORTD_AMSEL_R = 0x00;        // Disable analog function
		GPIO_PORTD_PCTL_R &= ~0x000000FF;   // Set PCTL bits for T2CCP0
		GPIO_PORTD_PCTL_R |= 0x00000055;   // Set PCTL bits for T2CCP0 
		

		//GPIO_PORTE_AMSEL_R = 0x00;        // Disable analog function
		//GPIO_PORTE_PCTL_R = 0x00000000;   // GPIO clear bit PCTL  
		//GPIO_PORTE_DEN_R |= 0x30;          // Enable digital pins PE3-PE0  
		
}


/*
void Timer0A_1sd(void){ // Timer for 10-sec delay
	 SYSCTL_RCGCTIMER_R |= 0x01;     // enable clock to Timer0, Timer1, Timer2   
	TIMER0_CTL_R = 0x00;           // /* disable Timer before initialization 
    TIMER0_CFG_R = 0x00;         //* 32-bit option 
    TIMER0_TAMR_R = 0x02;        //* periodic mode and down-counter 
    TIMER0_TAILR_R = 500000000 - 1;  //* Timer A interval load value register 
    TIMER0_ICR_R = 0x1;          //* clear the TimerA timeout flag
    TIMER0_CTL_R |= 0x01;        //* enable Timer A after initialization 
	TIMER0_TAPR_R = 1-1;					// Prescalar value.. Can extend the cycle time max 256 times
	 TIMER0_IMR_R |= 0x1;
	NVIC_EN0_R=0x80000; //Look up in NVIC table
	NVIC_PRI4_R=(NVIC_PRI4_R & 0x0FFFFFFF) | 0x60000000;
}

*/
void Timer1A_10sd(void){ // 1-us delay
	 SYSCTL_RCGCTIMER_R |= 0x02;     /* enable clock to Timer0, Timer1, Timer2 */
    
	TIMER1_CTL_R = 0x00;            /* disable Timer before initialization */
    TIMER1_CFG_R = 0x00;         /* 32-bit option */
    TIMER1_TAMR_R = 0x02;        /* periodic mode and down-counter */
    TIMER1_TAILR_R = 50 - 1;  /* Timer A interval load value register */
  //  TIMER1_ICR_R = 0x1;          /* clear the TimerA timeout flag*/
    TIMER1_CTL_R |= 0x01;        /* enable Timer A after initialization */
	TIMER1_TAPR_R = 1-1;					// Prescalar value.. Can extend the cycle time max 256 times;
}

void Timer2A_10sd(void){ // Capture timer
	 SYSCTL_RCGCTIMER_R |= 0x04;     /* enable clock to Timer0, Timer1, Timer2 */
    
	TIMER2_CTL_R = 0x00;            /* disable Timer before initialization */
    TIMER2_CFG_R = 0x00;         /* 32-bit option */
    TIMER2_TAMR_R = 0x17;        /* periodic mode and down-counter */
//    TIMER2_TAILR_R = 16 - 1;  /* Timer A interval load value register */
 //   TIMER2_ICR_R = 0x1;          /* clear the TimerA timeout flag*/
    TIMER2_CTL_R &= 0x0C;        /* enable Timer A after initialization */
	 TIMER2_CTL_R |= 0x01;  
	TIMER2_TAPR_R = 1-1;					// Prescalar value.. Can extend the cycle time max 256 times
}

void timer1A_delay(int ttime){
//    Timer1A_10sd();
		int i;
	
    for(i = 0; i < ttime; i++) { 
			while ((TIMER1_RIS_R & 0x01) == 0);      /* wait for TimerA timeout flag */
        TIMER1_ICR_R = 0x01;      /* clear the TimerA timeout flag */
    }
}

int main(){
		//GPIO_PORTF_DATA_R = 0x04;
		PortBEF_Init();//Red light means on
		char c;
		//char *str;
		Timer1A_10sd();
		
		
		Timer2A_10sd();
		//Timer0A_1sd();
		
		
		HC05_Init();
	  
	  PWM_Init_left();
	
    PWM_Init_right();
	
		int change,j;
		
		while(1){
			//GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFBD)| 0x10;
			GPIO_PORTF_DATA_R = 0x08;
			timer1A_delay(1000000);
			c=blueTooth_Read();
			servo_90();
			getDistance();
				GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFEF)| 0x10;
				GPIO_PORTF_DATA_R = 0x0C;
				//write_string("Hello World!! BLUE LED ON\n");
				//PWM1_0_CMPA_R = 7813;
				//PWM1_0_CMPB_R = 7813;
		
				GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFBD)| 0x40;
				GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFF7F)| 0x00;
				GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFFB)| 0x04;
				GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFF7)| 0x00;
				//timer1A_delay(1000000);
				write_string("Vehicle is going in forward direction\n");
				if(distance<100){
					GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFBD)| 0x00;
					GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFF7F)| 0x00;
					GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFFB)| 0x00;
					GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFF7)| 0x00;
					write_string("Vehicle is going in rest direction\n");
					timer1A_delay(1000000);
					servo_45();
					getDistance();
					if(distance>100){
						//PWM1_0_CMPA_R = 14062;//15625/90(10% PWM)
						//PWM1_0_CMPB_R = 7813;//15625/90(50% PWM)
						GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFEF)| 0x10;
						GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFBD)| 0x40;
						GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFF7F)| 0x00;
						GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFFB)| 0x00;
						GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFF7)| 0x00;
						write_string("Vehicle is going in 45 deg direction\n");
						timer1A_delay(5000000);
						}
					else{
						servo_135();
						getDistance();
						if(distance>100){
							//PWM1_0_CMPB_R = 14062;//15625/90(10% PWM)
							//PWM1_0_CMPA_R = 7813;//15625/90(50% PWM)
							GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFEF)| 0x10;
							GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFBD)| 0x00;
							GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFF7F)| 0x00;
							GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFFB)| 0x04;
							GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFF7)| 0x00;
							write_string("Vehicle is going in 135 deg direction\n");
							timer1A_delay(5000000);
						}
						else{
							servo_0();
							getDistance();
							if(distance>100){
								//PWM1_0_CMPA_R = 15625;//15625/90(0% PWM)
								//PWM1_0_CMPB_R = 7813;//15625/90(50% PWM)
								GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFEF)| 0x10;
								GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFBD)| 0x40;
								GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFF7F)| 0x00;
								GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFFB)| 0x00;
								GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFF7)| 0x00;
								write_string("Vehicle is going in 0 deg direction\n");
								timer1A_delay(10000000);
								}
							else{
								servo_180();
								getDistance();
								if(distance>100){
									//PWM1_0_CMPB_R = 15625;//15625/90(0% PWM)
									//PWM1_0_CMPA_R = 7813;//15625/90(50% PWM)
									GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFEF)| 0x10;
									GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFBD)| 0x00;
									GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFF7F)| 0x00;
									GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFFB)| 0x04;
									GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFF7)| 0x00;
									write_string("Vehicle is going in 180 deg direction\n");
									timer1A_delay(10000000);
									}
								else{
									servo_90();
									GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFEF)| 0x10;
									GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFBD)| 0x00;
									GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFF7F)| 0x80;
									GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFFB)| 0x00;
									GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFF7)| 0x08;
									write_string("Vehicle is going in reverse direction\n");
									timer1A_delay(10000000);
								}
								}
							}
						}
					}
			if(c=='P'){
				PWM1_0_CMPA_R = 0;
				PWM1_0_CMPB_R = 0;//15625/90(0% PWM)
				GPIO_PORTF_DATA_R = 0x08;
				write_string("Vehicle is in rest\n");
				GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFBD)| 0x00;
				GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFF7F)| 0x00;
				GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFFB)| 0x00;
				GPIO_PORTA_DATA_R = (GPIO_PORTA_DATA_R & 0xFFFFFFF7)| 0x00;
			}
			//GPIO_PORTF_DATA_R = 0x4;
	//write_string("Hello World!! BLUE LED ON\n");
	
		}

}

/*********** DisableInterrupts ***************
*
* disable interrupts
*
* inputs:  none
* outputs: none
*/

void DisableInterrupts(void)
{
    __asm ("    CPSID  I\n");
}

/*********** EnableInterrupts ***************
*
* emable interrupts
*
* inputs:  none
* outputs: none
*/

void EnableInterrupts(void)
{
    __asm  ("    CPSIE  I\n");
}

/*********** WaitForInterrupt ************************
*
* go to low power mode while waiting for the next interrupt
*
* inputs:  none
* outputs: none
*/

void WaitForInterrupt(void)
{
    __asm  ("    WFI\n");
//GPIOPortF_Handler();
}


/*************************************************************/