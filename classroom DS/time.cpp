#include<iostream>
using namespace std;
struct time
{
    int hour;
    int min;
    int sec;
};
int main(){
   time t1;
   cin>>t1.hour>>t1.min>>t1.sec;
   time t2;
   cout<<endl;
   cin>>t2.hour>>t2.min>>t2.sec;
   time t3;
   t3.sec=t1.sec+t2.sec;
   t3.min=t1.min+t2.min+t3.sec/60;
   t3.hour=t1.hour+t2.hour+t3.min/60;
   t3.min=t3.min%60;
   t3.sec=t3.sec%60;
   cout<<t3.hour<<" "<<"hour"<<" "<<t3.min<<" "<<"min"<<" "<<t3.sec<<" "<<"sec";
}