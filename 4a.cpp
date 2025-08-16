#include<iostream>
using namespace std;
int main(){
  cout<<"enter the first string:\n";
  string str1;
  cin.ignore();
  getline(cin,str1);
  cout<<"enter the second string:\n";
  string str2;
  cin.ignore();
  getline(cin,str2);
  string str3;
  str3=str1 +" "+ str2;
  cout<<str3<<" is the combined string";
  
  
}
