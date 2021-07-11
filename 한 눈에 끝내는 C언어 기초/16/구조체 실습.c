#include <stdio.h>

typedef struct
{
	char name[20];
	int kor; // 국어
	int eng; // 영어
	int math; // 수학
	float avg; // 평균
} Student;

int main()
{
	Student grade[3];
	
	for(int i=0; i<3; i++)
	{
		scanf("%s", grade[i].name);
		scanf("%d", &grade[i].kor);
		scanf("%d", &grade[i].eng);
		scanf("%d", &grade[i].math);
		grade[i].avg = (float)(grade[i].kor+grade[i].eng+grade[i].math)/3;
	}

	for(int j=0; j<3; j++)
	{
		printf("%s ", grade[j].name);
		printf("%.1f\n", grade[j].avg);
	}
	
	return 0;
}
