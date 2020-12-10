#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//구조체 만들기
struct Dashboard {  
    int speed;
    char fuel;
    float mileage;
    int engineTemp;
    int rpm;

};


int main()
{
    struct Dashboard d1;   //구조체 변수 선언
    d1.speed = 80;
    d1.fuel = 'F';
    d1.mileage = 5821.442871;
    d1.engineTemp = 200;
    d1.rpm = 1830;

    printf("Speed: %dkm/h\n", d1.speed);
    printf("Fuel: %c\n", d1.fuel);
    printf("Mileage: %fkm\n", d1.mileage);
    printf("Engine temp: %d℃\n", d1.engineTemp);
    printf("RPM: %d\n", d1.rpm);

    return 0;
}
