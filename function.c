/*Implant the function double function(duble x,double y) which
works as follows function(x,y)=x*x*x+x*x+2*x*y+y*y*y+y*y */

#include<iostream>
using namespace std;

double sakib(double x,double y){
      
   double sum=x*x*x+x*x+2*x*y+y*y*y+y*y;
    
   
   return sum; 
    
}
int main(){
    double x,y,z;
    
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
    
   z=sakib(x,y);
     cout<<"The result is : "<<z;
    
}
