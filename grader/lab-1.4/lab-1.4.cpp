#include <stdio.h>

int main(){
    int h,m,s,r;
    
    printf("S indicates the seconds in the range of 0 to 100,000.: ");
    scanf("%d",&r);
    
    h = r / 3600;
    m = r / 60;
    s = 3600 / r + m;
    
    if (h > 60 || m > 60 || s > 60){
        h=1;
        m=1;
        s=1;
    }
    
    printf("%d %d %d",h,m,s);
    
    return 0;
}
