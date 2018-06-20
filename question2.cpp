#include <iostream>
#include <string>
#include <array>
using namespace std;


string decodeString(string s){
    string answer;
    string n;
    int f = s.find_first_of('[');
    int e = s.find_first_of(']');
    string t = s.substr(0,f); // find number of total repetitions
    string useful = s.substr(f+1,((e-1)-(f))); // find useful section removing first num and '] '
    int rep = stoi(t); // turn string to int

    int i=0;
    while(isdigit(useful[i])== false && i<useful.size()){// find digit or end of string
        i++;
        }
    string temp = useful.substr(0, i); // cut substring up to digit
    answer+=temp; // add to answer once
    useful = useful.substr(i, (useful.size()-i)); // revise/reduce useful section

    while(useful.size()>0){ // breakdown rest of string until done
        int a = useful.find_first_of('['); // find bracket
        string num = useful.substr(0, a); // cut out num section
        int mult = stoi(num); // make it an int
        useful = useful.substr(a+1, useful.size()); //reduce string
        int i =0;
        while(isdigit(useful[i])== false && i < useful.size() ){ // find non-digit section
            i++;}
        string letters = useful.substr(0, i);
        useful = useful.substr(i, useful.size()); //reduce useful section

        for (int j = 0; j<mult; j++){// add sections to answer j number of times
            answer+= letters;
        }
    }// close while loop

    for (int i = 0; i<rep; i++){//multiply final answer by first number
         n+= answer;
        }

    return n;
}

int main()
{
    string s ;
    cout<<"Please enter encoded string : "<<endl;
    cin>>s;

    cout<<decodeString(s);
}
