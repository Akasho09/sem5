#include <iostream>
#include <string>
using namespace std;

int main() {



string input;
string text,ans;
vector<int>v;
getline(cin , input);
string key;
cin >>key;
int j=0;

for (int i=0;i<input.size();i++){
if (input[i]>='A' && input[i]<='Z') {
    input[i] = input[i] + ('a' - 'A'); 
    v.push_back(i);
}
}
for (int i=0;i<key.size();i++){
if (key[i]>='A' && key[i]<='Z') {
    key[i] = key[i] + ('a' - 'A'); 
}
}


// cout <<input <<endl;
for (int i=0;i<input.size();i++){
    if(input[i]!=' ') {
        // text[i]=key[j++];
        text.push_back(key[j++]);
        j=j%key.size();
}
else {
        text.push_back(input[i]);
}
}
// cout <<text <<endl;

for (int i=0;i<input.size();i++){
  if(input[i]!=' ') { 
    int a=((input[i]+(122-text[i]))%97 +98);
    if (a>122) a=a-26;
    char b=a;
    ans.push_back(b);
  }
  else
  ans.push_back(input[i]);
}

for (int i=0;i<v.size();i++){
ans[v[i]]=ans[v[i]]-('a'-'A');
    }

cout <<ans;




return 0;
}