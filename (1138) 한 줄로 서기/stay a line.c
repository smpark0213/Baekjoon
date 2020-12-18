#include <stdio.h> //미완성

void is_tall();
void smaller();
void print_result();

int result[11] = {0};
int master = 0;
int count;
int scan[11] = {0};
int temp;
int cut = 0;

int main()
{
    scanf("%d", &count);
    
    for(int a = 0; a < count; a++){ //count만큼 반복
        scanf("%d", &scan[a]);
    }
    while(1){
    for(int i = 0; i < count; i++){
        if(scan[i] < 0){
            if(i == count - 1){ //i는 최대 count - 1만큼 돌 수 있기때문에 이때까지 안걸린 것은 다 바꾼 것이라는 것.
                cut++;
            }
            continue;
        }
    }
    
    if(cut){ //scan이 다 양이 아닌 정수라는 것은 while문을 빠져나와야 함.
        break;
    }
    
    is_tall();
    smaller();
    }
    for(int j = 0; j < count; j++){ //답 출력.
        printf("%d ", scan[j]);
    }
    return 0;
}

void is_tall(){ //키큰놈 부터 앞에다가 배치하는 함수
    for(int i = 0; i < count; i++){
        if(scan[i] == 0){
           temp = i + 1;
           result[0] = temp;
           master++;
        }
    }
}

void smaller(){ //다들 키를 1씩 줄이는 함수
    for(int i = 0; i < count; i++){
        scan[i] -= 1;
    }
}