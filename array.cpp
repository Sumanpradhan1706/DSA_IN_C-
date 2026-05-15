#include<iostream>
using namespace std;

int main(){
    int marks[];
     int len = sizeof(marks)/sizeof(int);
     
     for(int i=0; i<len-1;i++){
     	cin>>marks[i]>>endl;
	 }
     
     
     for(int i=0; i<len;i++){
            cout<<marks[i]<<endl;
     }

    return 0;
}
