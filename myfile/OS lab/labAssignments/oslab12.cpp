#include <iostream>
using namespace std;
int main()
{
    int processes = 5;
    int resources = 3;
    int max[processes][resources];
    int allocation[processes][resources];
    int total[]={10, 5, 7};
    int available[3];
    int need[processes][resources];
    int sumOfAllocation[3]={0};
    
    // cout<<"Enter max: "<<endl;
    for(int i=0; i<processes; i++){
        for(int j=0; j<resources; j++){
        cin>>max[i][j];
    
    }}
    // cout<<"Enter allocation: "<<endl;
    for(int i=0; i<processes; i++){
        for(int j=0; j<resources; j++){
        cin>>allocation[i][j];
        need[i][j]=max[i][j]-allocation[i][j];
    }}
    
    for(int i=0; i<resources; i++){
        for(int j=0; j<processes; j++){
            sumOfAllocation[i]+=allocation[j][i];
        }
        
    }
    
    // for(int i=0; i<resources; i++){
    //     cout<<sumOfAllocation[i];
    // }
    
        cout<<"\nmax required:    \n";
    for(int i=0; i<processes; i++){
        for(int j=0; j<resources; j++){
        cout<<max[i][j]<<"    ";
    }
     cout<<endl;   
    }
    
    
    cout<<"\nallocation:    \n";
    for(int i=0; i<processes; i++){
        for(int j=0; j<resources; j++){
        cout<<allocation[i][j]<<"    ";
    }
     cout<<endl;   
    }
    cout<<"\navailable: "<<endl;
    for(int i=0; i<resources; i++){
    available[i]=total[i]-sumOfAllocation[i];}
    
    
    for(int i=0; i<resources; i++){
        cout<<available[i]<<endl;
    }
    
    
    
    cout<<"\n"<<"need:    \n";
    for(int i=0; i<processes; i++){
        for(int j=0; j<resources; j++){
        cout<<need[i][j]<<"    ";
    }
     cout<<endl;   
    }
    
    int x;
    cout<<endl;
    for(int k=0; k<10; k++){
    for(int i=0; i<processes; i++){
            x = 0;
            for(int j=0; j<resources; j++){
                if (need[i][j]<=available[j] && need[i][j]!=-1){
                    x++;
                }
            }
            
            if(x == 3){
                cout<<i<<"-->";
                for(int j = 0; j < 3; j ++){
                    available[j] = (available[j] - allocation[i][j]) + max[i][j];
                    need[i][j]=-1;
                }
            }
        }
    }
    return 0;
}


  // for(int k=0; k<10; k++){
    //  for(int i=0; i<processes; i++){
    //     for(int j=0; j<resources; j++){
    //         if(available[i]<need[i][j] && need[i][j]!=0)
    //         cout<<"not a safe sequence";
    //         break;
    //     }}
    // }
    
