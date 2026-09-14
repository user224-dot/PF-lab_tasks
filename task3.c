#include <stdio.h>
int main(){
    int acc_type;
    float balance;
    float interest;
    printf("Enter acc_type (1-saving.2-current,3-fixed deposit): ");
    scanf("%d",&acc_type);
    printf("Enter your balance: ");
    scanf("%f",&balance);
    
    switch(acc_type){
    case 1:
        if (balance>100000){
             interest = balance*0.04;}
        else{
                interest = balance*0.02;
            }
            break;

    case 2:
        interest = 0;
        break;

    case 3:
        interest = balance*0.08;
        break;

    default:
        printf("Invalid input!");
        return 0;
    }
    printf("Your interest= Rs. %.2f",interest);
    return 0;
}
