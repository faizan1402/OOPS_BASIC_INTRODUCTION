#include<iostream>
using namespace std;
 int main (){
 	   string str = "GeeksforGeeks"; 
 	   cout<<str.length()<<endl;
 	   cout<<str.size()<<endl;

 	   int i=0;
 	   while(str[i]){
 	   	i++;
 	   cout<< i<<endl;
 	}
 	return 0;
 }