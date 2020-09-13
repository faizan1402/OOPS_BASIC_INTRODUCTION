#include<iostream>
#include<string>
#include<string.h>
using namespace std;
  int main(){

  	   string s1;
  	    s1.assign(" Hello") ;//assign member function and member function is object.member fucntion()
  	    cout<<s1<<endl;

  	    // append function from cancatinate

  	    string s2 ="HELLO NOORI";
  	    s2.append(" JI");
  	    cout<<s2;

  	    // insert function cancatinate

  	    string s3 ="Good Night";
  	       s3.insert(4,"Day");// Means 4h index insert the day word
  	       cout<<s3<<endl;

  	       // replace function basically object.replace(index,length,"add the string at replaced placed")
  	       string s4 ="Hello";

  	       s4.replace(1,2,"A");//(replace (index no 1 to , length 1 to 2 add "A" )
  	       cout<<s4<<endl;
  	        // Erase output is erase
  	           s4.erase();// output is erase 
  	           cout<<s4;

  	       // find function

  	       string s5 ="Hello online Students";

  	         int i= s5.find("online");// find basically find the index no inside string ,which index on show index
  	               cout<<i<<endl;

  	       // rfind check the reverse string of index means string is ending then this side index is count

                  string s6 ="Faizan Ahmad";
                  int j= s6.rfind("Ahmad");// so reverse index value is print
                  cout<<j<<endl;

                   string s7 ="Faizu";
                   string s8 ="Noori";

                   // compare function

                  int k =s7.compare(s8);// Means string is not mismatch so -1 return but string is mismatch then retur 0
                  /*
                  return o- means result is mismatch and dictinoray order is same 
                  retrun -(-1) return means both are string not mismatch but dictinary order according 
                  suppose -string s1 ="Aman" and string s2 ="Amit"  so compare the string s2compare(s1) so out put is -1 return dectionary string according 
                  letter is alphabetcall order is come but string compare s1comapre(s2) then return +1 because before aman dectionary letter is come after that amit is come
                  */
                  cout<<k<<endl;
                  //  c_str style through string print
                  string s9 = "Hello";
                  char str[20];

                  strcpy(str, s9.c_str()); // declare the <string .h> header file because c_str c style string is print
                  cout<<str<<endl;
                  

                  // size function through string size find
                    string s10 ="Hello";

                   int l= s10.size();// string size find 
                   cout<<l;





  	       return 0;

  }