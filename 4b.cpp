#include<iostream>
using namespace std;
int main(){
  string str1;
  cout<<"enter the string:\n";
  cin.ignore();
  getline(cin,str1);
  int x=str1.length();
  for(int i=0,j=x-1;i<j;i++,j--){
    char temp=str1[i];
    str1[i]=str1[j];
    str1[j]=temp;
    
    
  }
  cout<<str1;
}
