#include<iostream>
using namespace std;
int main()
{      //Declaration of varibles
       int dollars;
       float B,M,J,P;
       //input American dollars
       cout<<"Enter currency in American Dollars"<<endl;
       cin>>dollars;
       
       
if(dollars<0) {
  cout<< "enter a valid amount of dollar"<<endl;
}
 
  else {
    //calculations
    B=dollars*85.74;
       M=dollars*10.7956;
       J=dollars*112.212;
       P=dollars*102.243;
    //output
         cout<<dollars<<" American dollars are equal to "<<B<<" Bangladrshi Taka"<<endl;
       cout<<dollars<<" American dollars are equal to "<<M<<" Mexican pesos"<<endl;
       cout<<dollars<<" American dollars are equal to "<<J<<" Japanese yen"<<endl;
       cout<<dollars<<" American dollars are equal to "<<P<<" Pakistani rupees"<<endl;
}
  };