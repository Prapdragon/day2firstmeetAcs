//Header
#include <stdio.h>
//Main
int main (){
   int num1;
    scanf("%d", &num1);
    int hours = num1/3600;
    int minutes = hours%3600/60;
    int sec = minutes%60;
    printf("%d ชั่วโมง %d นาที %d วินาที", &hours, &minutes, &sec);
}