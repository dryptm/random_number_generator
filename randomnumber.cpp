#include <chrono>
#include <iostream>
#include <math.h>
using namespace std;
using namespace std::chrono;
 
int main()
{
 {
     auto start = high_resolution_clock::now();
 


    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);

     int g=duration.count();
int h=g%10;
int  k;
if(h==0)
{
k=6;
}
else
{
k=round(((h+1)*6)/10);
}
cout<<"The no. is ="<<k;
     
 }
    return 0;
}