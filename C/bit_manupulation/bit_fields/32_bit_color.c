#include<stdio.h>
#include<stdint.h>

int main(){
	uint8_t red = 234;
	uint8_t blue = 29;
	uint8_t green = 187;

	uint32_t color = ((uint32_t)green) | ((uint32_t)blue<<8) | ((uint32_t)red<<16) ;
//	color |= ~(1<<24);

	printf("color = 0X%08X\n",color);
	return 0;
}
