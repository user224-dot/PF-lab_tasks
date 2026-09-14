#include <stdio.h>
int main(){
    int plan_type;
    int used_mins;
    float total_bill=0;
    printf("Enter the plan type that u want ( Plan 1 (Rs. 500 for 1000 minutes), Plan 2 (Rs.  800 for 2000 minutes), Plan 3 (Rs. 1200 for unlimited minutes), Plan 4 (custom plan billed at Rs.  1/minute).)");
    scanf("%d",&plan_type);
    if(plan_type==1 || plan_type==2 || plan_type==4){
    printf("Enter mins used: ");
    scanf("%d",&used_mins);}

switch(plan_type){
    case 1:
    total_bill=500;
    if (used_mins>1000){
        total_bill+=(used_mins-1000)*2;
    }
    break;
    case 2:
    total_bill=800;
    if (used_mins>2000){
        total_bill+=(used_mins-2000)*2;
    }
    break;
    case 3:
    total_bill=1200;
    break;
    case 4:
    total_bill=used_mins*1;
    break;
    default:
        printf("Invalid input!");
        return 0;
    
}
printf("total_bill=Rs %f",total_bill);
return 0;

}
