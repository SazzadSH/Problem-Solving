#include<iostream>
using namespace std;
int main()
{
int a,b,i,j=0;
int one,zero;

cin>>a;

int ans[a];
while(j<a)
{
one=0;
zero=0;
cin>>b;
int arr[b];
for(i=0;i<b;i++)
{
cin>>arr[i];
}
for(i=0;i<b;i++)
{
if(arr[i]==0)
{
zero++;
continue;
}
if(arr[i]==1)
{
one++;
continue;
}
}
if(zero==b||one==b)
{
ans[j]=b;


}
else if(one<zero)
{
    ans[j]=one;


}
else if(zero<one)
{
    ans[j]=zero;


}
else if(zero==one)
{
    ans[j]=one;


}
j++;
}
int x=0;
while(x<a)
{
cout<<ans[x]<<endl;
x++;
}
}
S
