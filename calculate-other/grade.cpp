#include <stdio.h>

int main (){
    int final,mid,hw,x;
    
    printf("Final: ");
    scanf("%d",&final);
    printf("Midterm: ");
    scanf("%d",&mid);
    printf("Homework: ");
    scanf("%d",&hw);
    
    x = mid * 40 / 100 + final * 50 / 100 + hw * 10 / 100;
    
    if(x >= 90 && x <= 100){
        printf("grade = A");
    }
    else if(x >= 85 && x < 90){
        printf("grade = B+");
    }
    else if(x >= 80 && x < 85){
        printf("grade = B");
    }
    else if(x >= 70 && x < 80){
        printf("grade = C+");
    }
    else if(x >= 60 && x < 70){
        printf("grade = C");
    }
    else if(x >= 55 && x < 60){
        printf("grade = D+");
    }
    else if(x >= 50 && x < 55){
        printf("grade = D");
    }
    else if(x < 50){
        printf("grade = F");
    }
    
    printf("\nscore: %d",x);
    
    return 0;
}
