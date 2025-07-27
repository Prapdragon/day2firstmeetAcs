#include <stdio.h>

int main(){
    int num[10],i,n,temp,max;
    for(i=0;;i++){
        scanf("%d", &num[i]);
        if(num[i] == 0) {
            break;
        }
    }

    for(n=0;n<=i-1;n++) {
        if(num[n] > num[n+1]) {
            temp = num[n];
            num[n+1] = temp;
            max = temp ;
        }
    }
    printf("%d", max);
    return 0;
}