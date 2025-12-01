#include <iostream>
#include <string>
using namespace std;

struct Staff {
    string name;
    string level;
    int papers;
    int hours;
    int score;
    string tier;
};
int main() {
    const int SIZE = 4;
    Staff staffList[SIZE] = {
        {"DR Ashraf", "professor", 8, 80},
        {"DR Mohanad", "lecturer", 6, 120},
        {"ENG Wael", "assistant", 2, 160},
        {"DR Taha", "associate", 4, 140}
    };
    for (int i = 0; i < SIZE; i++) {
        staffList[i].score = (staffList[i].papers * 10) + (160 - staffList[i].hours);
}
}

