#include <stdint.h>
int32_t sicaklikDegerleri[10] = {11,23,22,10,26,30,32,20,10,24};

// Deger döndüren, parametre almayan
int32_t sensor_sicaklik_oku(void)
{
	static int32_t sayac = 0;
	int32_t sicaklik = 0;
	
	sicaklik = sicaklikDegerleri[sayac];
	sayac++;
	
	if(10 == sayac)
	{
		sayac = 0;
	}	
	//sensoru oku
	//sicaklik hesapla
	
	return sicaklik;
}


void sensor_baslat(void)
{
	printf("SENSOR BASLADI!\n");
}
