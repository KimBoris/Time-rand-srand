#define _CRT_SECURE_NO_WARNINGS
#define random() ((double)rand() / (RAND_MAX +1))
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//<<<<��ƿ��Ƽ �Լ� >>>>
// 
// 
// 
// 
//int main(void)
//{
//	struct tm* date;
//	const time_t t = time(NULL);
//	date = localtime(&t);
//
//	printf("%d/%d/%d %d:%d:%d\n", date->tm_year + 1900, date->tm_mon, date->tm_mday, date->tm_hour, date->tm_min, date->tm_sec);
//
//}


//int main(void)
//{
//	int iCount;
//
//	printf("/// ������ �ִ밪 = %d///\n", RAND_MAX);
//
//	for (iCount = 0; iCount < 10; iCount++)
//	{
//		printf("���� �� %d = %d\n", iCount, rand());
//	}
//	//srand()�� ������� ������ �ѹ� ������ �������� ����ؼ� �ݺ� �ȴ�.
//
//
//	return 0;
//}


//int main(void)
//{
//	//void srand(unsigned int seed );
//	//seed = ������ �����ϱ� ���� �õ� �� ����
//	//seed�� 1�� �����ϸ� ������ �ʱ�ȭ �ȴ�.
//	//srand()�� ȣ���ϱ� ���� rand()�� ȣ�� �� ��� seed = 1�� �������� �����ȴ�.
//
//
//	int iCount;
//	srand(time(NULL));
//	for (iCount = 0; iCount < 10; iCount++)
//	{
//		printf("���� �� %d = %d\n", iCount, rand());
//	}
//	return 0;
//
//	//������ ���� ����ؼ� ��������� Ư�� ���� ���� �� ����.
//	//�Ϲ������� 32767��ŭ ���� ������ ������� �ʴ´�.
//	//���� 32767���� ū ���� ���Ѵٸ�
//	//rand()�Լ����� ���� ����� ����ϰ� �ذ�
//	//0~9�� ������ �ʿ��� ��� rand() % 10
//
//	//������ �� ����� �״��� ������� ����
//
//	
//	
//	
//	
//	
//	
//
//	
//	
//
//
//
////}
//int main(void)
//{
//	//�� ���� ��� = 0.0~1.0������ �ε� �Ҽ����� �ǻ� ������ ����ϴ� ������ ��ȣ��
//	//0~1������ �ε� �Ҽ��� �ǻ� ������ ���� �� �ִٸ� �̰��� �ִ� ���� ���Ͽ� Ư�� ������ ������ ���� �� ���� ���̴�.
//	//�̹���̸� ������ �ִ밪�� �������� �ʴ´�. 
//
//	//0.0~1.0������ ������ ��¹��
//	//��ũ�� �Է�
//	//#define ((double)rand() / (RAND_MAX+1));
//
//	int iCount;
//	srand(time(NULL));
//	for (iCount = 0; iCount < 10; iCount++)
//	{
//		printf("���� �� %d = %g\n", iCount, random()*10);
//	}
//	return 0;
//}


// <<system>>

/*
int system (const char *command)

���� : command - ��� �ֿܼ��� ������ ���ڿ��� ����� �޸� �ּ�


��ȯ : 1. ���� - 0�� �ƴ� ��
       2. command inter preter�� 0��ȯ �� = 0
       3. ���� �߻� = -1

���� : command inter preter�� ��ɾ� �����ϰ� �����ϰ� �� ����� ��ȯ���ش�.
�ش� ����� ������ ������ ������ �Լ��� ��ȯ���� �ʴ´�.

- �μ��� �����ų ���μ����� �̸��� �޾� �� ���μ����� ȣ��
�� �� �� ���μ����� ����� ������ ��ٷ��ִ� ���ҵ� ���ش�

(������ �����ڸ� ���� ���ڿ��� ������ ��)


*/


/*

windowȯ�� - wchar_t���� ����ϰ�
linux������ - char���� ����Ѵ�.

�׷��� �б������� '�����ڵ�'���ڸ� ����� �ʴ´�. �׷��⿡ �� ���� �ؾ��Ѵ�.��*/
