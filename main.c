// CONFIG
#pragma config FOSC = INTRCIO   // Oscillator Selection bits (INTOSC oscillator: I/O function on GP4/OSC2/CLKOUT pin, I/O function on GP5/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = ON       // Power-Up Timer Enable bit (PWRT enabled)
#pragma config MCLRE = OFF      // GP3/MCLR pin function select (GP3/MCLR pin function is digital I/O, MCLR internally tied to VDD)
#pragma config BOREN = OFF      // Brown-out Detect Enable bit (BOD disabled)
#pragma config CP = OFF         // Code Protection bit (Program Memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

//#include <xc.h>
// Define LED pin
#define LED  GP0
#define Pin3 GP3


// Define CPU Frequency
// This must be defined, if __delay_ms() or 
// __delay_us() functions are used in the code
#define _XTAL_FREQ   4000000    

// Main function
void main()
{	
	ANSEL  = 0x00;       // Set ports as digital I/O, not analog input
	ADCON0 = 0x00;		 // Shut off the A/D Converter
	CMCON  = 0x07;		 // Shut off the Comparator
	VRCON  = 0x00;	     // Shut off the Voltage Reference
	TRISIO = 0x08;       // GP3 input, rest all output TRISIO = 0b001000; // Pin 5 giri?, Pin 3 ç?k?? olarak ayarlan?r
	GPIO   = 0x00;       // Make all pins 0
	
	while(1)
	{
     
        int c=0;
        int a=0;
        int b=150;
        
        
        if(Pin3=0){
        
       
         for( float j=0;j<1500;j++){
            LED=1;
            while(a < c){
                a++;   
            }
            a=0;
            c=c+1;
            LED = 0;
            while(a < b){
                a++;   
            }
            a=0;
        }
        }
        else
        {
        
        int d=0;
        int x=750;
        int z=150;
        
        
for( float k=0;k<1500;k++){
            LED=1;
            while(d < x){
                d++;   
            }
            d=0;
            x=x-1;
            LED = 0;
            while(d < z){
                d++;   
            }
            d=0;
        }
        }
        
         
        
        }
       // LED=1;

    }

