
#include <iostream>
using namespace std;
int main (){
    string text = "Test1 fr%om32 aR23 *&dost h3re";
    int num =0, leters = 0, other = 0;
    for (int j = 0; j < text.length() ; ++j) {
        if(isdigit(text[j])){
            num++;
        }
        else if(isalpha(text[j])){
            leters++;
        }
        else{
            other++;
        }
    }

    cout << "Numbers: " << num<<endl;
    cout << "Leters: " << leters<<endl;
    cout << "Other(Special symbols): " << other;

    return 0;
}