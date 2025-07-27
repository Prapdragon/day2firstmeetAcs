#include <stdio.h>

int main(){
    int max=0,n=1;
    for(int i=0;;i++){
        scanf("%d", &n);
        if(n ==0) {
            break;
        }else{
            if(n > max){
            max = n;
            }
        }
    }
    printf("The highest weight is: %d", max);
    return 0;
}