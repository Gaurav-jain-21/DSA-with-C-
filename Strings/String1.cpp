#include<iostream>
using namespace std;
// bool permutation(string s1, string s2) {
//     int freq[26] = {0};
//     for (int i=0; i<s1.length(); i++) {
//         int idx=s1[i] -'a';//a->0, b
//     }
//     int windSize=s1.length();
//     for (int i=0; i<s2.length();i++) {
//         int windIdx=0;
//         int idx=i;
//         while (windIdx<windSize) {
//
//         }
//     }
// }

string reverseWords(string s) {
    int n= s.length();
    string ans= "";
    reverse(s.begin(), s.end());
    for (int i=0; i<n; i++) {
        string word= "";
        while (i<n && s[i]!=' ') {
            word +=s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if (word.length()>0) {
            ans+=" "+word;
        }
    }
    return ans.substr();
}

int main() {

}