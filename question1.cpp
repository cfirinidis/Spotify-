#include <iostream>
#include <string>
#include <array>
using namespace std;

//sort letters in s by the order they occur in t

void sortByStrings(string s, string t){
    string answer;

    for (int i = 0; i<t.size();i++){
            for(int j =0; j<s.size();j++){
                if (t[i]==s[j]){
                    answer+=s[j];
                }
            }
    }

cout<<endl<<answer<<endl;
}

int main()
{
    string s ;
    string t ;

    cout<<"Please enter word : "<<endl;
    cin>>s;

    cout<<"Please enter sort order : "<<endl;
    cin>>t;


sortByStrings(s,t);

}
