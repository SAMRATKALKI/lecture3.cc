#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    cout<< a <<endl;  

    // positive or negitive no
    // if else statement 
    if(a>0) {
        cout<< a << " is positive "<<endl;
    }
    else {
        cout<< a << " is negitive "<<endl;
    }

    // greater no program

    int c,d; // double data type declartion
    cout<< "enter first no - " <<endl; // input statement
    cin>>c; // input
    cout<< "enter second no - " <<endl;
    cin>>d;
    if(c>d) {
        cout<< c << " is greater then " <<d <<endl;
    }
    else{
        cout<<d<<" is greater then "<<c<<endl;
    
    }
    // either no is negitive or positive or 0

    int e;
    cout<<"enter the no - "<<endl;
    cin>>e;
    if(e==0) {
        cout<< e << " is 0 "<<endl;

    }
    else { // nested if else statement
        if(e<0){
            cout<< e << " is negitive "<<endl;
        
        }
        else{
            cout<< e << " is positive "<<endl;
        } 
    }
                                                                        
    //  positive or negitive or 0 using else if statement
    if (e==0) {
        cout<<e << " is 0 " <<endl;

    } 
    else if (e<0){
        cout<< e << " is negitive " <<endl;

    }
    else {
        cout<<  e << " is positive "<< endl;
    

    }
    
    // while loops 

    int f;
    cout<< "enter a number - "<<endl;
    cin>>f;
    
   int  i = 1; // initialing the variable for loop 
    while (i<=f){
        cout<< i << endl;
        i = i + 1 ;// increment in the value of i
    }
    
    // sum of no from 1 to n using while loop
     
    int g ;
    cout<< "enter a number n for the sum 1 to n - "<<endl;
    cin>>g;
    int sum = 0;
    int h = 1;
    while (h<=g){
        sum = sum + h;
        h = h + 1;
    }
    cout<< "form 1 to "<< g << " sum is " <<sum<<endl;

    // sum of even no from 1 to n 
    int j;
    cout<< "enter a no  n to sum even no from 1 to n "<<endl;
    cin>>j;
    int total  = 0;
    int k = 1;
    while (k<=j){
        if (k%2==0){
            total = total + k;
            k += 1; // k = k+1 also k += 1
        }
        else{
            k += 1;
        }
    }
    cout<<"sum of 1 to "<< j<< " is "<<total<<endl;

    // find prime or not 
    int l;
    cout << "enter a no to find prime or not - "<<endl;
    cin>>l;
    int m = 2;
    while(m<=l){
        if (m<l){
            if (l%m==0){
                cout<<"not prime "<<endl;
                m = l;
            }
            else{
                m += 1;
            }
        }
        else{
            cout<<"prime no"<<endl;
            m = l + 1;
        }

    }

    // pattern using while loop
    int n ;
    cout<<"enter the no of time you want to print patterns"<<endl;
    cin>>n;
    int o = 0;
    while(o<n){
        
        int p = 0;
        while (p<n){ // loop in a loop 
            cout<<"*";
            p += 1;
        }
        cout<<endl;
        o += 1;

    }
    // pattern of no using while loop 
    int q;
    cout<<"enter the no of time you want the patter to print  - "<<endl;
    cin>>q;
    int r = 1;
    while (r<=q){
        int s = 1;
        while (s<=q){
            cout<<r;
            s += 1;
        }
        cout<<endl;
        r += 1;
    }
    
    
    

        





    
    
       
}