#include<iostream>
using namespace std;
void count(int arr[],int s){
  int k=0;
  for(int i=0;i<s;i++){
   bool dis=true;
  for(int j=0;j<i;j++){
    if(arr[i]==arr[j]){
      dis=false;
    }
  }
  if(dis){
    k++;
  }
  }
  cout<<k;
}
int main(){
  int n;
  cout<<"enter the size of array:\n";
  cin>>n;
  int A[n];
  for(int i=0;i<n;i++){
    cin>>A[i];
  }
  count(A,n);
  
}
