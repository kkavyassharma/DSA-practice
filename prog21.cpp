#include<iostream>
using namespace std;
int main(){
int i = 1, n;
cout<<"Enter a number: ";
cin>>n;
while(i<=n){
int j = 1;
while (j<=i)
{
    char ch = ('A' + i + j - 2);
    cout<<ch<<" ";
    j++;
}
cout<<endl;
i++;
}
return 0;
}