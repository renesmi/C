//
//  main.c
//  unitproject
//
//  Created by 너굴 on 2022/03/24.
//

#include <stdio.h>

int main()
{
    int *numPtr; //포인터 변수 선언 이친구는 포인터만 저장할 수 있음. int * = pointer to int : int 형 공간을 가리키는 포인터라는 뜻임.
    
    int num1 = 10;
    
    numPtr = &num1; //num1 의 메모리주소를 포인터 변수에 저장
    
    printf("%p\n",numPtr);//
    printf("%d\n",*numPtr);// 역참조 연산자 포인터 변수 앞에 있으면 주소값이 가리키는 값을 가져옴.
    
    
    
    printf("%p\n",&num1); //변수 num1의 메모리 주소 출력
    
    return 0;
    
    
}
// 메모리 주소는 포인터 변수에 저장해야함

