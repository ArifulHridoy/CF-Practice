#include<iostream>
using namespace std;
 int main()
 {
     int pbno, time;
     cin>>pbno>>time;
     int counter=0, remainingTime=240-time;
     for(int i=1; i<=pbno; i++)
     {
         remainingTime = remainingTime - (i*5);
         if(remainingTime >= 0) counter++;
         else break;
     }
     cout<<counter<<endl;
    return 0;
 }
