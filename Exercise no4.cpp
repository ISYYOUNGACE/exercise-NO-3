#include<iostream>
using namespace std;

int main(){
    int age;
cout<<"enter your age"<<endl;
cin>>age;
if(age>=18)
    cout<<"You are in the age limit"<<endl;
else if(age<=20)
  cout<<"You are in the age limit"<<endl;
else
    cout<<"do not fit the description"<<endl;
int weight;
cout<<"enter your weight in kg"<<endl;
cin>>weight;
if(weight >= 45 )
    cout<<"you're in the weight limit"<<endl;
else if (weight<= 65)
    cout<<"you are  in the weight limit"<<endl;
else
    cout<<"you do not fit the description"<<endl;
int height;
cout<<"enter your height in meters"<<endl;
  cin>>height;
  if(height>= 1.5 )

    cout<<"you fit the description"<<endl;
  else if(weight<= 1.7 )
    cout<<"fit the description"<<endl;

    cout<<"do not fit the description"<<endl;


cout<<" If you happen to like football, thats a bonus point"<<endl;
    return 0;

}
