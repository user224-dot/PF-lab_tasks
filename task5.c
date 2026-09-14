#include <stdio.h>
int main(){
    int no_of_people;
    float  total_weight;
    printf("Enter the no of people: ");
    scanf("%d",&no_of_people);
    printf("Enter the total weight: ");
    scanf("%f",&total_weight);
    if(no_of_people<=10 && total_weight<=1000) {
        printf("Elevator is working properly.");
    }
    else if(no_of_people > 10 && total_weight > 1000) {
        printf("Entry denied due to exceeding people limit and over weight.");
    }
    
    else if(no_of_people > 10) {
        printf("Entry denied due to exceeding people limit.");
    }
    else if(total_weight > 1000) {
        printf("Entry denied due to over weight.");
    }
    return 0;
}
