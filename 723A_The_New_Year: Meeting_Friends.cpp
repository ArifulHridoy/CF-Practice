#include<iostream>
using namespace std;
 int main()
 {
     int a,b,c;
     cin>>a>>b>>c;
 
     int minimum, maximum;
 
     if(a>b && a>c)
     {
         maximum = a;
         if(b>c) minimum = c;
         else minimum = b;
     }
     if(b>a && b>c)
     {
         maximum = b;
         if(a>c) minimum = c;
         else minimum = a;
     }
     if(c>b && c>a)
     {
         maximum = c;
         if(b>a) minimum = a;
         else minimum = b;
     }
     cout << maximum - minimum << endl;
    return 0;
 }
