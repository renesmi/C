//
//  main.c
//  unitproject
//
//  Created by 너굴 on 2022/03/24.
//

#include <stdio.h>
#include <stdlib.h> //malloc, free 함수가 선언된 헤더 파일

int main()
{
    int *numPtr;
    
    numPtr = malloc(sizeof(int));
    
    *numPtr =10; //포인터를 역참조한 뒤 값 할당
    
    printf("%d\n",*numPtr); //포인터를 역참조하여 메모리에 저장된 값 출력
    
    free(numPtr); //동적 메모리 해제
    
    return 0;
    
}
// 메모리 주소는 포인터 변수에 저장해야함

