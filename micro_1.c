/**
Ramazan Degirmenci
21856255
*/


#include <micro_1.h>
#fuses HS,NOPROTECT,NOWDT,NOWRT,NOWRT,NOLVP,NOCPD,NODEBUG,NOBROWNOUT,NOPUT 
#use delay(clock=4000000) 
#use fast_io(c) // C portu kullanilacak
void main(){
setup_psp(PSP_DISABLED);
setup_spi(SPI_SS_DISABLED);
setup_timer_1(T1_DISABLED); 
setup_timer_2(T2_DISABLED,0,1);
setup_adc(ADC_OFF);
setup_ccp1(CCP_OFF); 
setup_ccp2(CCP_OFF);

set_tris_c(0x00); 
output_c(0x00); 
basla:
output_high(pin_c0);
delay_ms(250);
output_low(pin_c0);
delay_ms(250);
goto basla; 
}










