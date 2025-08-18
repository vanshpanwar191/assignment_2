#include<iostream>
using namespace std;
int main(){
  string name;
  cin.ignore();
  getline(cin,name);
  int x=name.length();
  for(int i=0;i<x;i++){
    if((int)name[i] >= 65 && (int)name[i] <= 90) // uppercase
{
      name[i]+=32;
    }
  
  else if((int)name[i] >= 97 && (int)name[i] <= 122) // uppercase

      name[i]-=32;
    
  }
cout<<name;
}
