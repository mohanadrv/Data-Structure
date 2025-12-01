#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    string username;
    cin >> username;

    set<char> distinct_chars;

    for (char c : username) {
        distinct_chars.insert(c);
    }

    if (distinct_chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
