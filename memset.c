//
//  main.c
//  unitproject
//
//  Created by 너굴 on 2022/03/24.
//

#include <stdio.h>
#include <stdlib.h> //malloc, free 함수가 선언된 헤더 파일
#include <string.h> //memset 함수 선언된 헤더 파일

int main()
{
    long long *numPtr = malloc(sizeof(long long));
    
    memset(numPtr,0x27,8); //numPtr이 가리키는 메모리를 8바이트만큼 0x27로 설정
    
    printf("0x%llx\n", *numPtr);    // 0x2727272727272727: 27이 8개 들어가 있음

    free(numPtr);    // 동적으로 할당한 메모리 해제

    return 0;
}
// 메모리 주소는 포인터 변수에 저장해야함

