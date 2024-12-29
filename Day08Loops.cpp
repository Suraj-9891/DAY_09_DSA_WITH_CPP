#include<iostream>
using namespace std;
int main(){
    /*
    Q1: Write a program to print ten times Good Morning using for loop.?
    */
    int n;
    cout<<"Enter a Number for print the good morning : "<<endl;
    cin>>n;
    cout<<"The show of ten times Good Morning : "<<endl;
    for(int i=0; i<n; i++){
        cout<<"Good Morning."<<endl;
    }

    /*
    Question 2: Print hello word 'n' times. Take 'n' as input from user.?
    */
    int n;
    cout<<"Enter the number for the print Hello world. "<<endl;
    cin>>n;
    cout<<"The show of Hello world for "<< n <<"times : "<<endl;
    for(int i=0; i<n; i++){
        cout<<"Hello world."<<endl;
    }

    /*
    Question 3: Print number from 1 to  100.?
    */
    int n;
    cout<<"Enter a number for the (1 to N ) : "<<endl;
    cin>>n;
    cout<<"The show of number for "<< n<<" time"<<endl;
    for(int i=0; i<n; i++){
        cout<<i<<endl;
    }

    /*
    Question 4: Write a program print all the even numbers from 1 to 100.?
    */
   
    int n;
    cout<<"Enter a Number to find even number (1-N) : "<<endl;
    cin>>n;
    cout<<"The show of even for "<< n<<"times"<<endl;
    for(int i=0; i<=n; i++){
        if(n%2==0){
            cout<<i<<" ";
        }
    }

    /*
    Question 5: Write a program this AP- 1,3,5,7,9....n
    */
    int n;
    cout<<"Enter a Number to find  Odd AP series number (1-N) : "<<endl;
    cin>>n;
    cout<<"The show of Odd  AP series for "<< n<<"times"<<endl;
    for(int i=1; i<=n; i+=2){
        cout<<i<<endl;
    }

    /*
    Question 6: Write a Program to print the table of 19.?
    */
    cout<<"The show of print the 19 table : "<<endl;
    for(int i=17; i<=170; i+=17){
        cout<<i<<endl;
    }

    /*
    Question 7: Display this AP 4 7 10 13 17.......N.?
    */
    int n;
    cout<<"Enter a Number to find  Odd AP series number (1-N) : "<<endl;
    cin>>n;
    cout<<"The show of Odd  AP series for "<< n<<"times"<<endl;
    for(int i=4; i<=n; i+=3){
        cout<<i<<endl;
    }

    /*
    Question 8:  Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms.
    */
    int n;
    cout<<"Enter a Number to find Square number : "<<endl;
    cin>>n;
    int term=1;
    cout<<"The show of GP series 1,2,4,8,16,32........."<<endl;
    for(int i=0; i<=n; i++){
        cout<<term<<endl;
        term *=2;
    }

    /*
    Question 9:  Display this AP - 100,97,94,..upto all 
    terms which are positive.
    */
    cout<<"The show of Series 100, 97, 94..............1"<<endl;
    for(int i=100; i>=1; i-=3){
        cout<<i<<endl;
    }


    /*
    Question 10: Print all alphabets (Uppercase) with their ASCII.?
    */
    cout<<"The ASCII Value is show A 65 : "<<endl;
    for(int i=65; i<=90; i++){
        cout<<char(i)<<" "<<i<<endl;
    }

    
    


    
}