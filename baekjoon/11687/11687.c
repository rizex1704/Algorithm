#include <stdio.h>

int main()
{
    int m, s = 1, l, ea, mid, tmp;
    scanf("%d", &m);
    l = m*5;
    
    while (s <= l)
    {
        mid = (s+l)/2;
        ea = 0;
        tmp = mid;
        while (tmp >= 5)
        {
            ea += tmp/5;
            if (ea > m)
                break;
            tmp /= 5;
        }
        
        if (ea < m)
            s = mid+1;
        else
            l = mid-1;
    }
    
    ea = 0;
    tmp = s;
    
    while(tmp >= 5)
    {
        ea += tmp/5;
        tmp /= 5;
    }
    if (ea == m)
        printf("%d", s);
    else
        printf("-1");
    return 0;
}