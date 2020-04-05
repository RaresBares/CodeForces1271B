#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    bool cols[n];

    vector<int> dos;
    int black = 0;
    int white = 0;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        if (c == 'W') {
            white++;
            cols[i] = true;
        }
        if (c == 'B') {
            black++;
            cols[i] = false;
        }

    }

    if (black % 2 == 0){
        for (int i = 0; i < n; i++) {

            if (!cols[i]) {

                if ((cols[i] == cols[i + 1])) {
                    dos.push_back(i + 1);
                    cols[i] = cols[i + 1] = true;

                } else {
                    if (i == n - 1) {
                        cout << "-1";
                        return 0;
                    } else {
                        dos.push_back(i + 1);
                        cols[i] = true;
                        cols[i + 1] = false;
                    }
                }


            }
        }
} else if (white% 2 == 0){


        for (int i = 0; i < n; i++) {

            if (cols[i]) {

                if ((cols[i] == cols[i + 1])) {
                    dos.push_back(i + 1);
                    cols[i] = cols[i + 1] = false;

                } else {
                    if (i == n - 1) {
                        cout << "-1";
                        return 0;
                    } else {
                        dos.push_back(i + 1);
                        cols[i] = false;
                        cols[i + 1] = true;
                    }
                }


            }
        }

    } else{

        cout << "-1";
        return 0;

    }


    cout << dos.size() << "\n";
    for (int &i : dos) {
        cout << i << "\n";
    }

//  B B B B B
        return 0;
    }

