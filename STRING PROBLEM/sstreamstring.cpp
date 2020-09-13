#include<iostream>
#include<sstream> // using string to int conversion
using namespace std;
   int main(){

     string str ="42";
     int i;

     istringstream (str)>>i;

       cout<<i;


   }
