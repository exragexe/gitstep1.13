
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str = "Its my exercise testing ";
    cout <<"Original - " << str<<endl;
    replace(str.begin(), str.end(), ' ', '\t');
    cout << "Replaced - "<<str << endl;
    return 0;
}