#include <stdio.h>
#include <string.h>
#include <iostream>
// ��������, ���� � ����� �������� 7 ����
char * split_long_number(unsigned long n) {
    static char buf[64];
    
    if ( n > 999 ) {
        split_long_number(n / 1000);
        sprintf(buf + strlen(buf), " %03lu", n % 1000);
    }
    else
        sprintf(buf, "%lu", n);
    
    return buf;
}
 
int main(void) {
	setlocale(LC_ALL,"rus");
    unsigned long number;
    
    while ( printf("�����: ") && scanf("%lu", &number) == 1 )
        printf("����� � ������������ �� ������ �������: %s\n", split_long_number(number));
    
    return 0;
}

