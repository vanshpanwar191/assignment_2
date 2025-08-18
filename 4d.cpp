#include<iostream>
using namespace std;
int main(){
  string name;
  cin.ignore();
  getline(cin,name);
  int x=name.length();
  for(int i=0;i<x;i++){
    for(int j=i+1;j<x;j++){
      
      if((int)name[i]>(int)name[j]){
        char temp;
        temp=name[i];
        name[i]=name[j];
        name[j]=temp;
      }

        }   
       
  }
  cout<<name;

  
}
