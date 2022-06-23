#include <stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
//bubble sort
void bubbleSort(int arr[], int bt[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1]){
               swap(&arr[j], &arr[j+1]);
               swap(&bt[j], &bt[j+1]);
           }
              
}

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d",&n);
    int at[n], bt[n], ct[n], tat[n], wt[n], pt[n], temp[n];
    float tTAT=0, tWT=0;
    
    printf("enter arrival times: \n");
    for (int i=0; i<n; i++){
        scanf("%d", &at[i]);
    }
    printf("enter burst times: \n");
    for (int i=0; i<n; i++){
        scanf("%d", &bt[i]);
    }
    
    printf("enter priority numbers: \n");
    for (int i=0; i<n; i++){
        scanf("%d", &pt[i]);
    }
    printf("burst times: ");
    for (int i=0; i<n; i++){
        printf("%d ", bt[i]);
    }
    printf("\npriorities: ");
    for (int i=0; i<n; i++){
        printf("%d ", pt[i]);
    }
    bubbleSort(pt,bt,n);
    
   ct[0]=bt[0]+at[0];
   for (int i=1; i<n; i++){
        ct[i]=ct[i-1]+bt[i];
    }
    printf("\ncompletion times: ");
    for (int i=0; i<n; i++){
        printf("%d ", ct[i]);
    }
    
    printf("\nturn around times: ");
    for (int i=0; i<n; i++){
        tat[i]=ct[i]-at[i];
        tTAT+=tat[i];
        printf("%d ", tat[i]);
    }
    
    
    printf("\navg tat: %.2f", tTAT/n);
    printf("\nwaiting times: ");
    for (int i=0; i<n; i++){
        wt[i]=tat[i]-bt[i];
        tWT+=wt[i];
        printf("%d ", wt[i]);
    }
    printf("\navg WT: %.2f", tWT/n);
    return 0;
}


