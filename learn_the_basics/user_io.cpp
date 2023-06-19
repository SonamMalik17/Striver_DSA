#include<bits/stdc++.h>   // It includes all the C++ libraries
using namespace std;
// #include<iostream>

// function - pass by value
// void doSomething(string s)
// {
//     s[0]='t';
//     cout<<"outside main : "<<s<<endl;
// }


// function - pass by reference
// void doSomethingAgain(string &str)
// {
//     str[0]='t';
//     cout<<"outside main : "<<str<<endl;
// }


// arrays are always bydefault passed by reference only
// void doSthArray(int arr[],int n){
//     arr[0]+=100;
//     cout<<"Value outside int main: "<<arr[0]<<endl;
// }
int main()
{
    // std::cout<<"Hi Striver!";
    // cout<<"HI HELLO HIII"<<endl<<endl;


    // string str1,str2;
    // cout<<"Enter str1 : ";
    // cin>>str1;
    // cout<<"str1 : "<<str1<<endl<<endl;
    // cout<<"Enter str2 : ";
    // getline for reading space
    // getline(cin,str2);
    // cout<<"str2 : "<<str2<<endl;
    // int (4 Bytes)  (-2,147,483,648 to 2,147,483,647)


    // if else
    // int age;
    // cout<<"Enter age : ";
    // cin>>age;
    // if(age>=18)
    //     cout<<"Adult"<<endl;
    // else
    //     cout<<"Not an Adult"<<endl;


    // if else-if else
    // int marks;
    // cout<<"Enter marks: ";
    // cin>>marks;
    // if(marks<20)
    //     cout<<"A"<<endl;
    // else if(marks<60)
    //     cout<<"B"<<endl;
    // else if(marks<80)
    //     cout<<"C"<<endl;
    // else
    //     cout<<"D"<<endl;


    // Switch 
    // int day_no;
    // cout<<"Menu : \n1-Monday\n2-Tuesday\n3-Wednesday\n4-Thursday\n5-Friday\n6-Saturday\n7-Sunday\n";
    // cout<<"Enter day number : "<<endl;
    // cin>>day_no;
    // switch(day_no)
    // {
        // default: cout<<"Invalid"<<endl;
        //          break;
    //     case 1 : cout<<"Monday";
    //              break;
    //     case 2 : cout<<"Tuesday";
    //              break;
    //     case 3 : cout<<"Wednesday";
    //              break;
    //     case 4 : cout<<"Thursday";
    //              break;
    //     case 5 : cout<<"Friday";
    //              break;
    //     case 6 : cout<<"Saturday";
    //              break;
    //     case 7 : cout<<"Sunday";
    //              break;
    //     default: cout<<"Invalid"<<endl;
    //              break;
    // }


    // string
    // string strr="Striver";
    // int len=strr.size();
    // cout<<"Initial: "<<strr[len-1]<<endl;
    // strr[len-1]='u';
    // cout<<"Final: "<<strr<<endl;

    // inbuilit functions - max, min etc
    // int num1,num2;
    // cout<<"Enter num1 and num2 : "<<endl;
    // cin>>num1>>num2;
    // int maxx=max(num1,num2);
    // int minn=min(num1,num2);
    // int sq=sqrt(num1);
    // cout<<"max = "<<maxx<<endl<<"min = "<<minn<<endl<<"sqrt = "<<sq<<endl;


    // function - pass by value 
    // string s="raj";
    // doSomething(s);
    // cout<<"in main : "<<s<<endl;


    // function - pass by reference
    // string st="raj";
    // string is an array of characters and (array ka name) = (zeroth element of array ka address)
    // doSomethingAgain(st);
    // cout<<"in main : "<<st<<endl;

    // arrays are always bydefault passed by reference only
    // int size=5;
    // int arr[size];
    // cout<<"Enter array elememts : "<<endl;
    // for(int i=0;i<size;i=i+1)
    // {
    //     cin>>arr[i];
    // }
    // doSthArray(arr,size);
    // cout<<"Value inside int main: "<<arr[0]<<endl;
    return 0;
}