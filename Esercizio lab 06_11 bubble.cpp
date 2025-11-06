#include <iostream>
using namespace std;
int main () {
    int a[5]={3,6,7,2,8};
    int b=5;
    for(int y=0;y<b;y++) {
        cout<<a[y]<<" ";}
    cout<<endl;
    for(int i=0;i<(b-1);i++)
    {
        for(int y=0;y<(b-1-i);y++)
        {
            if(a[y+1]<a[y])
            {
                int temp=a[y+1];
                a[y+1]=a[y];
                a[y]=temp;
            }
        }
        for(int y=0;y<b;y++){
            cout<<a[y]<<" ";}
        cout<<endl;
    
    }
}