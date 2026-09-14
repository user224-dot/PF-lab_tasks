#include <stdio.h>
int main(){
    float bill;
    int hour_of_visit,membership_status;
    float total_bill=0;
    printf("Enter your bill: ");
    scanf("%f",&bill);
    printf("Hour of visit (24 hour format): ");
    scanf("%d",&hour_of_visit);
    printf("Enter your status (1=member,0=not a member): ");
    scanf("%d",&membership_status);
    if (hour_of_visit>=15 && hour_of_visit<=17 && membership_status==1){
        total_bill=bill-(bill*0.25);
        printf("Here is your bill after discount: Rs %f", total_bill);
    }
    else if (hour_of_visit>=15 && hour_of_visit<=17 && membership_status==0){
        total_bill=bill-(bill*0.20);
        printf("Here is your total bill after 20 percent discount: Rs %f",total_bill);
    }
    else if ((hour_of_visit>=15 || hour_of_visit<=17) && membership_status==1){
        total_bill=bill-(bill*0.10);
        printf("Here is your total bill: Rs %f",total_bill);
    }
    else{
        total_bill=bill;
        printf("No discount available. here is your bill:Rs. %f",total_bill);
    }
    return 0;

}
