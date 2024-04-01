#include <stdio.h>

int main(void)
{
    int day;
    printf("요일 번호를 입력하세요 (1: 월요일, 2: 화요일, ..., 7: 일요일): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("월요일\n");
            break;
        case 2:
            printf("화요일\n");
            break;
        case 3:
            printf("수요일\n");
            break;
        case 4:
            printf("목요일.\n");
            break;
        case 5:
            printf("금요일\n");
            break;
        case 6:
            printf("토요일\n");
            break;
        case 7:
            printf("일요일\n");
            break;
        
        default:
            printf("잘못된 요일 번호\n");
            break;
    }

    return 0;
}