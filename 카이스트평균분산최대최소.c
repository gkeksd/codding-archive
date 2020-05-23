#include <stdio.h> 
#include <math.h> 

// N���� �������� ����Ͽ� ���, �л�, �ִ�, �ּڰ��� ���Ѵ�
int number[]; 
int N; 
int i;
double average = 0;

int main()
{   
	printf("�Է��� ������ ������?");
    scanf("%d", &N);
    for (int i=0; i<N; i++)
    {
    	printf("���� �Է��ϼ���", i+1);
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
	// ��հ��� ���ϱ� ���� ���� ��� �ջ��Ѵ�.
    for (int i = 0; i < N; i++) sum = sum + number[i];
    // �ջ�� ���� �������� ������ ������ ����� ���Ѵ�.
    average = (double)sum / N;
    printf("���: %.31f", average); 
}

Variance(N)
{
	double variance = 0;
	// �л��� ���ϱ� ���� �� �׸��� ���� ��հ����� ���� �� ���� �����Ͽ� �ջ��Ѵ�.
    for (int i = 0; i < N; i++) {
        variance = variance + (number[i] - average)*(number[i] - average);
    }
    // �׸��� �ջ�� ���� �׸� ���� ������ �л��� ���Ѵ�.
    variance = variance / N;
    printf("�л�: %.31f", variance);
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
	printf("�ִ�: %d", max);
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
	printf("�ּ�: %d", min);
}
