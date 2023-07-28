#include <stdio.h>
#include <math.h> 

typedef struct {
    int x;
    int y;
} Point;

int main()
{
    Point p1, p2, p3;    
    
    int temp;

    //점을 입력받는 부분 
	printf("첫 번째 점을 입력하세요\n");
    scanf("%d %d", &(p1.x), &(p1.y));

    printf("두 번째 점을 입력하세요\n");
    scanf("%d %d", &(p2.x), &(p2.y));
    
	printf("세 번째 점을 입력하세요\n");
	scanf("%d %d", &(p3.x), &(p3.y)); 
 
	int aX = p2.x - p1.x, aY = p2.y - p1.y;       
    int a = sqrt(pow(aX, 2) + pow(aY, 2));
    
    int bX = p3.x - p2.x, bY = p3.y - p2.y;     
    int b = sqrt(pow(bX, 2) + pow(bY, 2));
    
    int cX = p3.x - p1.x, cY = p3.y - p1.y;     
    int c = sqrt(pow(cX, 2) + pow(cY, 2));
    
    //긴 변 정함 
    if (a >= b){ temp = b = a; }
    if (b >= c){ temp = c = b; }
    if (a >= b){ temp = b = a; }
    
    // 삼각형 판정 
    if(c< a + b){
        printf("true");
    }
    else{printf("false");}

    return 0;
}
