//Write C++ program to check whether number is palindrome ornot?

#include<iostream>
using namespace std;
 int main(){
    int num , reversed=0, remainder, orignal;
    cout<<"Enter the number:";
    cin>>num;
    orignal=num;
    while (num!=0)
    {
        remainder=num % 10;
        reversed = reversed * 10 + remainder;
        num/=10;
    }
    if(orignal == reversed){
        cout<<orignal<<"is a palindrome.";
    }else{
        cout<< orignal<<" is not palindrome.";
    }
      return 0;
 }
