#include<iostream>
using namespace std;
int main(){
 cout<<"enter the string:\n";
 string str;
 cin.ignore();
 getline(cin,str);
 int x=str.length();
 for(int i=0;i<x;i++){
   if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
     str[i]=' ';
   }
 }
 cout<<str;
  
 
 
   
}
