#include <stdio.h>

int main() {
    int n = 0, m, s = 1, l, mid, tmp;
    scanf("%d", &m);
    l = m * 5;
    while (s <= l) {
        mid = (l + s) / 2;
        tmp = mid;
        while (tmp >= 5) {
            n += tmp / 5;
            if (n > m)
                break;
            tmp /= 5;
        }
        if (n < m)
            s = mid + 1;
        else
            l = mid - 1;
    }
    n = 0;
    tmp = s;
    while (tmp >= 5) {
        n += tmp / 5;
        tmp /= 5;
    }
    if (n == m)
        printf("%d\n", s);
    else
        printf("-1\n");
    return 0;
}


//0의 개수가 M개인 N! 가장 작은 N