#include <stdio.h>

int main(void) {
    int hour,i;
    char Remain[8];
	scanf("%d%s",&hour,Remain);
	if(Remain[6] == 'A' && Remain[7] == 'M' && hour < 10){
	    printf("0%d",hour);
	}
	else if(Remain[6] == 'A' && Remain[7] == 'M' && hour == 12){
	    printf("00",hour);
	} 
	else if(Remain[6] == 'A' && Remain[7] == 'M'){
	    printf("%d",hour);
	}
	else if(Remain[6] == 'P' && Remain[7] == 'M'){
	    printf("%d",(hour+12));
	}
	for(i=0;i<6;i++){
	    printf("%c",Remain[i]);
	}
	return 0;
}

