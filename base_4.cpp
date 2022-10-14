# include<iostream>
using namespace std;

    int main(){
    int num1, num2;

    cout<<"Enter the value of num1 : ";
    cin>>num1;
    
    cout<<"Enter the value of num2 : ";
    cin>>num2;

    //Arthmtics Operator
    cout<<"The Following are arthmtics operators :"<<endl;
    cout<<"The value of num1 + num2 = "<<num1+num2<<endl;
    cout<<"The value of num1 - num2 = "<<num1-num2<<endl;
    cout<<"The value of num1 * num2 = "<<num1*num2<<endl;
    cout<<"The value of num1 / num2 = "<<num1/num2<<endl;
    cout<<"The value of num1 % num2 = "<<num1%num2<<endl;
    cout<<"The value of num1 ++ = "<<num1++<<endl;
    cout<<"The value of num1 -- = "<<num1--<<endl;
    cout<<"The value of ++ num1  = "<<++num1<<endl;
    cout<<"The value of -- num1 = "<<--num1<<endl;
    cout<<endl;
    cout<<endl;

    //Comprassion operators
    cout<<"Following are the Comprassion Operators"<<endl;
    cout<<"The value of num1 is == num2 -->>   "<<(num1==num2)<<endl;
    cout<<"The value of num1 is != num2 -->>   "<<(num1!=num2)<<endl;
    cout<<"The value of num1 is < num2 -->>   "<<(num1<num2)<<endl;
    cout<<"The value of num1 is > num2 -->>   "<<(num1>num2)<<endl;
    cout<<"The value of num1 is <= num2 -->>   "<<(num1<=num2)<<endl;
    cout<<"The value of num1 is >=num2 -->>   "<<(num1>=num2)<<endl;
    cout<<endl;
    cout<<endl;

    //logical operators
    cout<<"Following are the logical operators :"<<endl;
    cout<<"The value of this logical operator is -->> "<<((num1==num2) && (num1 < num2))<<endl;
    cout<<"The value of num1 is != num2 -->>   "<<((num1==num2) || (num1<num2))<<endl;
    cout<<"The value of num1 is < num2 -->>   "<<(!(num1<num2))<<endl;
    cout<<endl;
    cout<<endl;

    
    return 0;
    }
