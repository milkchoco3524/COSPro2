#include <stdio.h> // 표준 입력 및 출력 관련 함수를 사용하기 위한 헤더 파일 선언

int main(void) // main 함수의 정의, 반환 값은 정수형(int), 매개 변수 없음(void)
{
    /*
         첫번째 작성한 C 프로그램입니다.
         2024.04.03
      */
    printf("Hello !  \n\n"); // 화면에 "Hello !" 출력 후 개행
    printf("I am a Student. \n"); // 화면에 "I am a Student." 출력 후 개행
    printf("%d\n", 1234); // 정수형 변수 1234를 출력
    printf("%d     %d\n", 10, 20); // 두 개의 정수형 변수를 출력, 변수 값들은 각각 10과 20

    return 1; // main 함수의 반환 값으로 1을 반환
}