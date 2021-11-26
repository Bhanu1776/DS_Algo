#include <iostream>
#include <algorithm>        //! Algorithim header files is used to access sorting algos for string .. Jump to line 50
#include <string>           //! Imp to use to use this header, in order to use string functions in cpp

using namespace std;

int main(){

    string str;
    // cin>>str;            // Note : Taking input of string with the help of cin doesn't include words after space .. Only 1st word include 
    //* getline(cin, str);      // Best way to take input of string ... as using getline function helps us to take input of full sentence (spaces included!)
    // cout<<str<<endl;
    

    string str1(5,'n');     // If we want to specific size of string then this is the way ..
    cout<<str1<<endl;

    string str2 = "SaxX";    //* Best way to Declare a string 
    // str2.clear();         //* This will clear whole string values ..
    cout<<str2<<endl;               

    if(str2.empty()){        //* This will check wheater a string is empty or not ..
        cout<<"String is empty"<<endl;
    }
    if (!str2.empty()){      // If its not true ..
        cout<<"String is not empty"<<endl;
    }

    string s1 = "Bhanu ";
    string s2 = "Sunka";

    s1.append(s2);          //* Append function is used to combine two values ...
    cout<<s1<<endl;

    cout<<s1[5] << endl;    // This is the way to access specific value of a string ..

    string s3 = "Fascinating";
    // s3.erase(2,5);      //* This will remove specific values from a string .. 2 is index no where deletion should start, and 5 is how many characters to delete from index no ..
    cout<<s3<<endl;
    cout<<s3.find("a")<<endl;       //* Find function is used to find specific values in defined string ..
    cout<<s3.insert(3,"ab")<<endl;        //* 3 index position, ab will insert after 3rd index position  
    cout<<s3.size()<<endl;

    string s4 = "143";
    int x = stoi(s4);       //* stoi func usually converts numeric string to integer ..
    cout<<x+2<<endl;

    cout<<to_string(x) + "2"<<endl;     //* to_string usually converts integer values to a string .. but 2 will act as a append

    string usefull = "absdhfflhzfhjdh";     
    sort(usefull.begin(), usefull.end());       //* Sort function usually sort all the alphabets in asc order of an string .. to use this func algorithim header file has to be include !!
    cout<<usefull<<endl;

    return 0;
}