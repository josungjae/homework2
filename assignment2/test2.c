#include <stdio.h>
int main()
{
    int i;          // 정수형 변수 i 선언한다.
    int *ptr;       // 정수형 포인터 ptr 선언한다.
    int **dptr;     // 정수형 이중 포인터 dptr 선언한다.
    i = 1234;       // i에 값 1234 대입한다.
    printf("[----- [Jo sung jae] [2023078001] -----]\n");
    // ptr이 i의 주소를 가리키기 전에 값 출력한다.
    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);            // i의 값 출력한다.
    printf("address of i == %p\n", &i);          // i의 주소 출력한다.
    printf("value of ptr == %p\n", ptr);         // ptr의 값 출력한다.
    printf("address of ptr == %p\n", &ptr);      // ptr의 주소 출력한다
    ptr = &i;       // ptr에 i의 주소 대입한다.
    // ptr이 i를 가리킨 후 값 출력한다
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);            // i의 값 출력한다.
    printf("address of i == %p\n", &i);          // i의 주소 출력한다.
    printf("value of ptr == %p\n", ptr);         // ptr의 값 출력한다.
    printf("address of ptr == %p\n", &ptr);      // ptr의 주소 출력한다.
    printf("value of *ptr == %d\n", *ptr);       // ptr이 가리키는 값 출력한다. 
    // dptr이 ptr의 주소를 가리키기 전에 값 출력한다.
    dptr = &ptr; /* dptr is now holding the address of ptr */
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);            // i의 값 출력한다.
    printf("address of i == %p\n", &i);          // i의 주소 출력한다.
    printf("value of ptr == %p\n", ptr);         // ptr의 값 출력한다.
    printf("address of ptr == %p\n", &ptr);      // ptr의 주소 출력한다.
    printf("value of *ptr == %d\n", *ptr);       // ptr이 가리키는 값 출력한다. 
    printf("value of dptr == %p\n", dptr);       // dptr의 값 출력한다.
    printf("address of dptr == %p\n", &dptr);    // dptr의 주소 출력한다.
    printf("value of *dptr == %p\n", *dptr);     // dptr이 가리키는 값 출력한다. 
    printf("value of **dptr == %d\n", **dptr);   // dptr이 가리키는 값의 값 출력.
    // i의 값 변경한다.
    *ptr = 7777;    // ptr이 가리키는 변수의 값을 7777로 변경한다.
    // ptr이 가리키는 값과 dptr이 가리키는 값의 값 변경한다.
    **dptr = 8888;  // dptr이 가리키는 변수가 가리키는 변수의 값을 8888로 변경한다.
    // 값 변경 후 결과 출력한다.
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);            // i의 값 출력한다.
    printf("value of *ptr == %d\n", *ptr);       // ptr이 가리키는 값 출력한다.
    printf("value of **dptr == %d\n", **dptr);   // dptr이 가리키는 값의 값 출력한다.
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);            // i의 값 출력한다.
    printf("value of *ptr == %d\n", *ptr);       // ptr이 가리키는 값 출력한다.
    printf("value of **dptr == %d\n", **dptr);   // dptr이 가리키는 값의 값 출력한다.
    return 0;
}
