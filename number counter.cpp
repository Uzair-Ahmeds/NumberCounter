#include <iostream>
#include<string>
using namespace std;
int main()
{
int num[50];
int count=0, i=0;
cout<<"Enter the list of numbers (When you want to end the list Press 0)"<<endl;
cout<<"You can only enter about 50 entires!!!"<<endl;
 for(int i=0; i<50; i++) //loop for getiing list of numbers;
 {
 cin>>num[i];
 count++;
 if(num[i]==0)
 {
 count--;
 break;
 }
 
}
cout<<"The number of entries are: "<<count<<endl<<endl;
int a,next;
for (int i=0; i<count; i++) //loop for sorting numbers into ascending order
 {
 for(int j=0; j<count-1; j++)
 {
 if(num[j]<num[j+1])
 {
 next=num[j+1];
 num[j+1]=num[j];
 num[j]=next;
 }
 }
 }
for(int i=0; i<count; i++) //loop for counting repetition of numbers
{
a=1;
if(num[i]!=0){
for(int j=i+1;j<count; j++ )
{
if(num[i]==num[j])
{
 a++;
 num[j]=0;
 }
}
cout<<num[i]<<"\t"<<a<<endl;}
}
cout<<endl;
system ("PAUSE");
return 0;
}
