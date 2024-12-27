#include <stdio.h>

int main(){
    int food,order,price;
    char lop;
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("                            VENDING MACHINE\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("Welcome to veding machine. Enter 1-Sandwich, 2-cake, 3-Beverage: ");
    scanf("%d",&food);
    
    if (food == 1){
        do{
            printf("Enter 1-Tuna (30), 2-Hamburger (40), 3-Ham (35): ");
            scanf("%d",&order);
            if (order == 1){
                price += 30;
            }
            else if (order == 2){
                price += 40;
            }
            else if (order == 3){
                price += 35;
            }
            printf("Do you want to continue: ");
            scanf("%s",&lop);
        }while(lop=='Y');
    }
    
    if (food == 2){
        do{
            printf("Enter 1-Donut (17), 2-JamRoll (15), 3-Pasty (25) 4-Cookie (10): ");
            scanf("%d",&order);
            if (order == 1){
                price += 17;
            }
            else if (order == 2){
                price += 15;
            }
            else if (order == 3){
                price += 25;
            }
            else if (order == 4){
                price += 10;
            }
            printf("Do you want to continue: ");
            scanf("%s",&lop);
        }while(lop=='Y');
    }
    
    if (food == 3){
        do{
            printf("Enter 1-Coke (15), 2-Est (15), 3-GreenTea (60): ");
            scanf("%d",&order);
            if (order == 1){
                price += 15;
            }
            else if (order == 2){
                price += 15;
            }
            else if (order == 3){
                price += 60;
            }
            printf("Do you want to continue: ");
            scanf("%s",&lop);
        }while(lop=='Y');
    }
    
    if (lop == 'N'){
        printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("THANK YOU VERY MUCH. THHE PRICE IS: %d\n",price);
        printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    }
    
    return 0;
}
