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

    //���� �Է¹޴� �κ� 
	printf("ù ��° ���� �Է��ϼ���\n");
    scanf("%d %d", &(p1.x), &(p1.y));

    printf("�� ��° ���� �Է��ϼ���\n");
    scanf("%d %d", &(p2.x), &(p2.y));
    
	printf("�� ��° ���� �Է��ϼ���\n");
	scanf("%d %d", &(p3.x), &(p3.y)); 
 
	int aX = p2.x - p1.x, aY = p2.y - p1.y;       
    int a = sqrt(pow(aX, 2) + pow(aY, 2));
    
    int bX = p3.x - p2.x, bY = p3.y - p2.y;     
    int b = sqrt(pow(bX, 2) + pow(bY, 2));
    
    int cX = p3.x - p1.x, cY = p3.y - p1.y;     
    int c = sqrt(pow(cX, 2) + pow(cY, 2));
    
    //�� �� ���� 
    if (a >= b){ temp = b = a; }
    if (b >= c){ temp = c = b; }
    if (a >= b){ temp = b = a; }
    
    // �ﰢ�� ���� 
    if(c< a + b){
        printf("true");
    }
    else{printf("false");}

    return 0;
}
