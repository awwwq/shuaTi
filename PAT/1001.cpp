#include <iostream>
using namespace std;

int main() {
    int a,b,sum;
    string s;
    cin>>a>>b;
    sum = a+b;
    if(sum<0) cout<<'-';
    sum = abs(sum);
    s = to_string(sum);
    unsigned long length = s.length();
    switch((length-1)/3) {
        case 0:
            cout << s << endl;
            break;
        case 1:
            cout << s.substr(0, length - 3) << "," << s.substr(length - 3, 3);
            break;
        case 2:
            cout << s.substr(0, length - 6) << "," << s.substr(length - 6, 3) << "," << s.substr(length - 3, 3);
    }
    return 0;
}
