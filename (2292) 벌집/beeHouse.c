#include <stdio.h>

int main(){

    int a;
    int result = 1;

    scanf("%d", &a);
    if(a != 1) {
        a -= 2;
    for(int i = 6;;i += 6){
        if((a - i) >= 0){
        result++;
        a = a - i;
        }
        else {
            result++;
            break;
            
        }
    }
    }
    printf("%d", result);

    return 0;
}