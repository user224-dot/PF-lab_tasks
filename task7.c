#include <stdio.h>
int main(){
    int policy_status;
    int vehicle_age;
    int claim;
    printf("Enter the policy status(1=active,0=inactive): ");
    scanf("%d",&policy_status);
    printf("Enter the age of vehicle: ");
    scanf("%d",&vehicle_age);
    printf("Enter clamin: ");
    scanf("%d",&claim);
    
    if (policy_status==0){
        printf("claim rejected : policy inactive.");
    }
    else if (policy_status==1 && vehicle_age<10 && claim<500000){
        printf("claim approved:Rs=%d",claim);
    }
    else if (vehicle_age >=10 && vehicle_age <= 15){
        printf("claim approved but only 50%: Rs=%d",claim/2);

    }
    else if (claim>500000){
        printf("Claim rejected: Amount exceeds limit");
    }
    else{
        printf("Claim rejected: Vehicle is too old");
    }
    return 0;
}
