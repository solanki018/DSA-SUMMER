#include <string>
using namespace std;

bool isRotation(const string& s1, const string& s2) {
    if (s1.length() != s2.length()) return false;
    string temp = s1 + s1;
    return temp.find(s2) != string::npos;  //no position
}
