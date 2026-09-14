#include <stdio.h>
int main(){
    int age, income, repayment;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your income: ");
    scanf("%d",&income);
    printf("Enter your existing repayment loan: ");
    scanf("%d",&repayment);
    if (age<21 && age >60){
    printf("Loan rejected due to age\n");
    }
    else if(income <= 30000){
    printf("Loan rejected due to income\n");
    }
    else if(repayment > income*0.40) {
    printf("Loan rejected due to high debt\n");
    }
    else
    {
    printf("Loan Approved!\n");
    }
    return 0;


}
