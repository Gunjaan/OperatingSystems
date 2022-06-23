#include <iostream>
using namespace std;

int main()
{
    int n, p;
    cout<<"enter the number of blocks:" <<endl;
    cin>>n;
    cout<<"enter the number of processes: "<<endl;
    cin>>p;
    
    int blocks[n], processes[p];
    
    cout<<"enter block size: "<<endl;
    for(int i=1; i<=n; i++){
        cin>>blocks[i];
    }
    
    cout<<"enter size of processes: "<<endl;
    for(int i=1; i<=p; i++){
        cin>>processes[i];
    }
    for(int i=1; i<=n; i++){
        cout<<blocks[i]<<" ";
    }
    cout<<endl;
    for(int i=1; i<=p; i++){
        cout<<processes[i]<<" ";
    }
    cout<< "\nSEQUENCE: "<<endl;
    int flag;
    for(int i =1; i <=p ;i++){
        flag=0;
        for(int k = 1; k <=n;k++){
            if(processes[i] <= blocks[k]){
                cout<<"process "<<i<<": "<<k<<endl;
                blocks[k] = -1;
                flag=1;
                break;
            }
        }
        if(!flag){
            cout<<"process "<<i<<": "<<"size not available!";
        }
    }
    return 0;
}