#include <stdio.h>

int main()
{
    int *numPtr1;
    int **numPtr2;
    int num1 =10;
    
    numPtr1 = &num1;
    
    numPtr2= &numPtr1;
    
    printf("%d\n",**numPtr2); //포인터를 두번 역참조하여 num1의 메모리 주소에 접근.*실제 값을 가져오는 메모리 연산자/역참조를 두번 함.
    
    return 0;
    
}
