#define _CRT_SECURE_NO_WARNINGS
#define random() ((double)rand() / (RAND_MAX +1))
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//<<<<유틸리티 함수 >>>>
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
//	printf("/// 난수의 최대값 = %d///\n", RAND_MAX);
//
//	for (iCount = 0; iCount < 10; iCount++)
//	{
//		printf("난수 열 %d = %d\n", iCount, rand());
//	}
//	//srand()를 사용하지 않으면 한번 정해진 난수값이 계속해서 반복 된다.
//
//
//	return 0;
//}


//int main(void)
//{
//	//void srand(unsigned int seed );
//	//seed = 난수를 생성하기 위한 시드 값 지정
//	//seed에 1을 지정하면 난수가 초기화 된다.
//	//srand()를 호출하기 전에 rand()가 호출 된 경우 seed = 1로 난수열이 생성된다.
//
//
//	int iCount;
//	srand(time(NULL));
//	for (iCount = 0; iCount < 10; iCount++)
//	{
//		printf("난수 열 %d = %d\n", iCount, rand());
//	}
//	return 0;
//
//	//난수의 값은 계속해서 변경되지만 특정 값을 얻을 순 없다.
//	//일반적으로 32767만큼 넓은 난수를 사용하지 않는다.
//	//만약 32767보다 큰 수를 원한다면
//	//rand()함수에서 얻은 결과를 계산하고 해결
//	//0~9의 난수가 필요한 경우 rand() % 10
//
//	//하지만 이 방법은 그다지 권장되지 않음
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
//	//더 좋은 방법 = 0.0~1.0까지의 부동 소수점형 의사 난수를 사용하는 수법이 선호됨
//	//0~1사이의 부동 소수점 의사 난수를 얻을 수 있다면 이것은 최대 값을 곱하여 특정 범위의 난수를 얻을 수 있을 것이다.
//	//이방법이면 난수의 최대값에 얽매이지 않는다. 
//
//	//0.0~1.0사이의 난수를 얻는방법
//	//매크로 입력
//	//#define ((double)rand() / (RAND_MAX+1));
//
//	int iCount;
//	srand(time(NULL));
//	for (iCount = 0; iCount < 10; iCount++)
//	{
//		printf("난수 열 %d = %g\n", iCount, random()*10);
//	}
//	return 0;
//}


// <<system>>

/*
int system (const char *command)

인자 : command - 명령 콘솔에서 실행한 문자열이 저장된 메모리 주소


반환 : 1. 성공 - 0이 아닌 값
       2. command inter preter가 0반환 시 = 0
       3. 에러 발생 = -1

설명 : command inter preter에 명령어 전달하고 실행하고 그 결과를 반환해준다.
해당 명령의 수행이 끝내기 전까지 함수는 반환하지 않는다.

- 인수로 실행시킬 프로세스의 이름을 받아 그 프로세스를 호출
이 때 그 프로세스가 종료될 때까지 기다려주는 역할도 해준다

(엄밀히 말하자면 쉘로 문자열을 보내는 것)


*/


/*

window환경 - wchar_t형을 사용하고
linux에서는 - char형을 사용한다.

그런데 학교에서는 '유니코드'문자를 배우질 않는다. 그렇기에 재 공부 해야한다.ㄴ*/
