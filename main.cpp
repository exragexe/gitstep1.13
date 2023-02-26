
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter word: ";
    getline(cin,str);
    int i = 0, j = str.length() - 1;
    bool isPalindrome = true;
    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }
    if (isPalindrome) {
        cout << str << " is palindrom" <<endl;
    } else {
        cout << str << " is not palindrom" <<endl;
    }

    return 0;
}