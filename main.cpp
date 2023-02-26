
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main (){
    string text = "Test1 fr%om32, aR23 *&dost h3re";
    stringstream ss(text);
    string word;
    int leters=0;
    while(ss>>word){
        leters++;
    }
    cout << "Leters: " << leters<<endl;
    return 0;
}