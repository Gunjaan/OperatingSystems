#include <stdio.h>
void bubbleSort(int array[], int size) {
  for (int step = 0; step < size - 1; ++step) {
    for (int i = 0; i < size - step - 1; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}
int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d",&n);
    int at[n], bt[n], ct[n], tat[n], wt[n];
    float tTAT=0, tWT=0;
    
    printf("enter arrival times: \n");
    for (int i=0; i<n; i++){
        scanf("%d", &at[i]);
    }
    printf("enter burst times: \n");
    for (int i=0; i<n; i++){
        scanf("%d", &bt[i]);
    }
    bubbleSort(bt,n);
    printf("sorted bt: ");
    for (int i=0; i<n; i++){
        printf("%d ", bt[i]);
    }
    
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

