/**
 * 
 * HW 2-1
 * 
 *
 * 5자리의 자연수(10000~99999)를 입력받아
 * 자리가 역순인 수로 변환한 후 출력하는 프로그램 작성.
 * ㈜ 5자리 자연수는 자릿수별로 하나씩 입력받고     => 문자로 입력받아라
 * 역순의 자연수는 하나의 자연수로 출력할 것       => 정수로 출력해라
 * 예:  26753--> 35762,  12300-->321 
 * 
 * -----------------------------------
 * 
 * Key: 5자리 수를 수가 아닌 문자로 입력받는 게 핵심
 * 
 */

#include <stdio.h>

int main(void)
{
    char c1, c2, c3, c4, c5;
    int result;

    printf("5자리 자연수 입력 >> ");
    scanf("%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5);

    c1 -= '0';          // (char)'0' = (int)48
    c2 -= '0';
    c3 -= '0';
    c4 -= '0';
    c5 -= '0';

    result = c5*10000 + c4*1000 + c3*100 + c2*10 + c1*1;
    printf("%d\n", result);

    return 0;
}