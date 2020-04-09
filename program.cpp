#include<iostream>
using namespace std;
int main()
{
  int n,i,k,s;
  cout<<"enter the size of the array"<<endl;
  cin>>n;
  int a[n];
      cout<<"enter the array"<<endl;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
}
cout<<"enter the search number"<<endl;
  cin>>k;
for(i=0;i<n;i++)
{
    if(a[i]==k)
    {
s=1;
break;
}
}
if(s==1)
cout<<k<<" "<<"is present in array"<<endl;
else
cout<<k<<" "<<"is not present in array"<<endl;
  return 0;
}
