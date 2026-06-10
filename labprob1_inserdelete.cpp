#include<iostream>
#include<string>
using namespace std;
int main(){

 string arr[10]={"BBBB","DDDD","MMMM","XXXX"};
 int n=4;
 //insert FFFF
 string item="FFFF";
 int pos=0;
 while(pos<n&&arr[pos]<item)
 pos++;
 for(int i=n;i<pos;i--)
 arr[i]=arr[i-1];
 arr[pos]=item;
 n++; 
 //insert zzzz
  item="zzzz";
   pos=0;
   while(pos<n &&arr[pos]<item)
   pos++;
   for(int i=n;i<pos;i--)
   arr[i]=arr[i-1];
   arr[pos]=item;
   n++;
   cout<<"After Insertion:\n";
   for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";
   cout<<endl;
   //delete MMMM
  string del="MMMM";
  for(int i=0;i<n;i++){
    if(arr[i]==del)
    {
        for(int j=i;j<n-1;j++)
        arr[j]=arr[j+1];
        n--;
        break;
    }
  } 
  cout<<"\nAfter Deletion:\n";
  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
  return 0;


}  


