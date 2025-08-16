#include<iostream>
using namespace std;
int main(){
  //taking the array as an input from the user
  int size;
  cout<<"enter the size of array:\n";
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++){
    cout<<"enter the element of array:\n";
    cin>>arr[i];
  }
//linear search
int el;
cout<<"enter the element you need to find:\n";
cin>>el;

for(int i=0;i<size;i++){
  if(arr[i]==el){
    cout<<"the element is at"<<i+1<<"position in array";
  }
  
  
}
//binary search
int temp;
for(int i=0;i<size;i++){
  for(int j=0;j<size;j++){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    
  }
}
int start=0;
int end=size-1;
while(start<=end){
  int mid=(start+end)/2;
  if(arr[mid]==el){
    cout<<mid;
  }
  else if(arr[mid]>el){
    end=mid-1;
  }
  else if(arr[mid]<el){
    start=mid+1;
  }
}
  

  

  
  
}
