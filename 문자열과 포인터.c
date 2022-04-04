//
//  main.c
//  unitproject
//
//  Created by 너굴 on 2022/03/24.
// %s에는 *가 없어도 괜찮고(알아서 값 불러옴) %c에는 *가 있어야 한다. 

#include <stdio.h>
int main(void){
    char *p ="KOREA";
    printf("%s\n",p);
    printf("%s\n",p+3);
    printf("%c\n",*p);
    printf("%c\n",p);
  //에러남
    
    
    return 0;
}


// 메모리 주소는 포인터 변수에 저장해야함

