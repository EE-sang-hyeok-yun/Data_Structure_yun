#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int str_point(void)
{
    int light_speed = 300000;
    int distance = 149600000;
    int time_m;
    int time_s;

    time_m = (distance / light_speed) / 60; //��
    time_s = (distance / light_speed) % 60; //��

    printf("���� �ӵ��� %dkm/s\n", light_speed);
    printf("�¾�� �������� �Ÿ� %dkm\n", distance);
    printf("���� �ð��� %d�� %d��", time_m, time_s);

    return 0;
}