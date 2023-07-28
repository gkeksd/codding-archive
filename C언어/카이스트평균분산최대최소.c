#include <stdio.h> 
#include <math.h> 

// N개의 정숫값을 사용하여 평균, 분산, 최댓값, 최솟값을 구한다
int number[]; 
int N; 
int i;
double average = 0;

int main()
{   
	printf("입력할 변량의 갯수는?");
    scanf("%d", &N);
    for (int i=0; i<N; i++)
    {
    	printf("값을 입력하세요", i+1);
    	scanf(" %d", &number[i]); 
	}
	
	averageMean(N);
	Variance(N);
	Max();
	Min();
    return 0;
}

averageMean(N)
{
	int sum;
	// 평균값을 구하기 위해 값을 모두 합산한다.
    for (int i = 0; i < N; i++) sum = sum + number[i];
    // 합산된 값을 데이터의 개수로 나눠서 평균을 구한다.
    average = (double)sum / N;
    printf("평균: %.31f", average); 
}

Variance(N)
{
	double variance = 0;
	// 분산을 구하기 위해 각 항목의 값을 평균값으로 빼고 그 값을 제곱하여 합산한다.
    for (int i = 0; i < N; i++) {
        variance = variance + (number[i] - average)*(number[i] - average);
    }
    // 그리고 합산된 값을 항목 수로 나눠서 분산을 구한다.
    variance = variance / N;
    printf("분산: %.31f", variance);
}
Max()
{
	int max = number[0];
	for (int i=0; i<N; i++)
	{
		if (max < number[i]) {
		    max = number[i];
	    }
	}
	printf("최대: %d", max);
}
Min()
{
	int min = number[0];
	for (int i=0; i<N; i++)
	{
		if (min > number[i]) {
		    min = number[i];
	    }
	}
	printf("최소: %d", min);
}
