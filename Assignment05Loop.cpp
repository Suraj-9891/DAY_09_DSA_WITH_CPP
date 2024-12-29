#include<iostream>
using namespace std;
int main(){
    /*
    C++ Assignments | Loops 1 | Week 2
    */

    /*
    Question 1: Print the odd number from 1 to 100.?
    */
    int n;
    cout<<"Enter a Number to print 1 to N odd Number : "<<endl;
    cin>>n;
    cout<<"The show of all Odd number for "<< n<<" times"<<endl;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }

    /*
    Question 2: Print all numbers from 1 to 100 that are divisible by 3
    */
    int n;
    cout<<"Enter a Number to print 1 to N divisible by 3 : "<<endl;
    cin>>n;
    cout<<"The show of all divisible number for "<< n<<" times"<<endl;
    for(int i=1; i<=n; i++){
        if(i%3==0){
            cout<<i<<endl;
        }
    }

    /*
    Question 3: Print the table of ‘n’. Here ‘n’ is an integer which the user will input.?
    */
    int n;
    cout<<"Enter a number to find time : "<<endl;
    cin>>n;
    int table = n;
    int tableEnd = n*10;
    cout<<"The show of  "<< n<<" table"<<endl;
    for(int i=table; i<=tableEnd; i+=table){
        cout<<i<<endl;
    }

    /*
    Question 4: Display this AP - 4,7,10,13,16.. upto ‘n’ terms. 
    */
    int n;
    cout<<"Enter a Number for the print AP series 4,7,10,13....N : "<<endl;
    cin>>n;
    cout<<"The show of all this AP series 4,7,10,13......N for "<< n<<" times"<<endl;
    for(int i=4; i<=n; i+=3){
        cout<<i<<endl;
    }

    /*
    Question 5: Display this GP - 3,12,48,.. upto ‘n’ terms
    */
    int n;
    cout<<"Enter a Number for this GP 3,12,48.......N : "<<endl;
    cin>>n;
    int term = 3;
    cout<<"The show of all GP series terms "<< n<<" times"<<endl;
    for(int i=1; i<=n; i++){
        cout<<term<<endl;
        term *=4;
    }

    /*
    Question 6: Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop
    */
    int i=65;
    cout<<"The show of all the value the ASCII value : "<<endl;
    while(i<=90){
        cout<<char(i)<<" "<<i<<endl;
        i++;
    }


    
}