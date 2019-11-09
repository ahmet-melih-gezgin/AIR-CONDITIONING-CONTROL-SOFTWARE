#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "motor.h"
#include "sensor.h"
#include "ekran.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void delay(void);







int main(int argc, char *argv[]) {
	int32_t sicaklik = 0;
	int32_t set_degeri = 24;
	ekran_baslat();
	motor_baslat();
	sensor_baslat();
	
	ekran_ac();
	
	while(1){	
//	printf("sicaklik:%d\n",sensor_sicaklik_oku());
    sicaklik = sensor_sicaklik_oku();
    ekran_yazdir(sicaklik);
    
    if(sicaklik > set_degeri)
    {
    	motor_ac();
    }
    else
    {
    	motor_kapat();
    }
    
    
    
	delay();
}
	return 0;
}





void delay(void)
{
	int64_t i = 0;
	
	for(i= 0; i<300000000;i++)
	{
		
	}
}






