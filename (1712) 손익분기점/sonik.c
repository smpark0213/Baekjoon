#include <stdio.h>

int main(){

    int a, b, c;
    

    scanf("%d %d %d", &a, &b, &c);

    if(b >= c) printf("-1");
    
    else {
    
    int result = a / (c - b);

    //if(a % (c - b) != 0) result++;
    
    printf("%d", result + 1);
    }



    return 0;
}