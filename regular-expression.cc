#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
    string str = "My_birthday is/August 10,1998";
    regex expression("(\\w+)\\s\\w+/(\\w+)\\s(\\d+),(\\d+)");
    smatch m;
    
    if (regex_search(str, m, expression)) {
        cout << "titlle: " << m.str(0) << endl;
        cout << "theme: " << m.str(1) << endl;
        cout << "year: " << m.str(4) << endl;
        cout << "month: " << m.str(2) << endl;
        cout << "day: " << m.str(3) << endl;
    }
    
    else {
        cout << "failed" << endl;
    }
    return 0;
}
