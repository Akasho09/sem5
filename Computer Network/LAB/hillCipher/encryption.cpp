#include <iostream>
#include <string>
using namespace std ;

int main () {
    
    string input ;
    cin >> input ;
    string key ;
    cin >> key ;
    int n = input.length();
    string output="";
    for(int i=0;i<key.length();i++) {
    int t=0;
    // bool isSmall= false ;
    for(int j=0;j<n;j++){
    t+=(key[i++]-65)*(input[j]-65);
    }
    i--;
    t=t%26;
    char m =(t+'A');
    // if(isSmall) m+=('a');
    output+=m;
    }

cout << output ;
   
}

