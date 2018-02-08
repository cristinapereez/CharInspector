//Author:
#include<iostream>

using namespace std;

int main()
{
char Letter;
  cout<<"What character do you want to know about?\n";
cin>>Letter;
if(Letter>='A' && Letter<='Z')
{
  //when user's entry is between A-Z...
  cout<<Letter<<" is an upper case letter!\n";
}
else if(Letter>='a' && Letter<='z')
{
  //when user's entry is between a-z...
  cout<<Letter<<" is a lower case letter!\n";
}
else
{
  //in all other cases...
  cout<<Letter<<"?! Pssh. What are you talking about?\n";
 }
 
  //no matter what they enter...
  cout<<"The ASCII value is: "<<(int) Letter<<endl;

  return 0;
}
