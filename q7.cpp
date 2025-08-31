#include<iostream>
using namespace std;
void count(int arr[] ,int s){
  int k=0;
  for(int i=0;i<s;i++){
    for(int j=i+1;j<s;j++){
        if(arr[i]>arr[j]){
          int temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
          k++;
        }
      }
  }
  cout<<"the count of inversion is:\n"<<k;
  
}
int main(){
  int size;
  cout<<"enter the size of array:\n";
  cin>>size;
  int A[size];
  for(int i=0;i<size;i++){
    cin>>A[i];
  }
  count(A,size);
  
}
