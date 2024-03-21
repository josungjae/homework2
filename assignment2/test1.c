#include <stdio.h>

int main() {
    // 각 데이터 형식에 대한 변수를 선언합니다.
    char charType;       // 문자형 변수 선언한다.
    int integerType;     // 정수형 변수 선언한다.
    float floatType;     // 실수형 변수 선언힌다.
    double doubleType;   // 더블형 변수 선언힌디.
    // 개인 정보 출력한다.
    printf("[----- [Jo sung jae] [2023078001] -----]\n");
    // 각 데이터 형식의 크기를 출력합니다.
    printf("Size of char: %ld byte\n", sizeof(charType));      // charType의 크기 출력한다.
    printf("Size of int: %ld bytes\n", sizeof(integerType));   // integerType의 크기 출력한다.
    printf("Size of float: %ld bytes\n", sizeof(floatType));   // floatType의 크기 출력한다.
    printf("Size of double: %ld bytes\n", sizeof(doubleType)); // doubleType의 크기 출력힌디.
    // 구분선을 출력합니다.
    printf("-----------------------------------------\n");
    // 기본 데이터 형식(char, int, float, double)의 크기를 출력합니다.
    printf("Size of char: %ld byte\n", sizeof(char));     // char의 크기 출력한다.
    printf("Size of int: %ld bytes\n", sizeof(int));      // int의 크기 출력한다.
    printf("Size of float: %ld bytes\n", sizeof(float));  // float의 크기 출력한다.
    printf("Size of double: %ld bytes\n", sizeof(double));// double의 크기 출력한다.
    // 구분선을 출력합니다.
    printf("-----------------------------------------\n");
    // 포인터 데이터 형식(char*, int*, float*, double*)의 크기를 출력합니다.
    printf("Size of char*: %ld byte\n", sizeof(char*));      // char 포인터의 크기 출력한다.
    printf("Size of int*: %ld bytes\n", sizeof(int*));       // int 포인터의 크기 출력한다.
    printf("Size of float*: %ld bytes\n", sizeof(float*));   // float 포인터의 크기 출력힌다.
    printf("Size of double*: %ld bytes\n", sizeof(double*)); // double 포인터의 크기 출력한다.
    return 0;
}
