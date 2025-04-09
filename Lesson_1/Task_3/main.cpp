#include <iostream>

using namespace std;

    int main()
    {
        int rows;

        cout << "Enter how match you want" << endl;
        cin >> rows;


        for (int i = 0; i < rows; i++) {
            for (int j = 1; j <= rows - i; j++) {
                cout << " ";
            }

            for (int k = 0; k < i * 2 - 1; k++) {
                cout << "*";
            }

            cout << "\n";
        }

        for (int i = rows - 1; i > 0; i--) {
            for (int j = 0; j < rows - i; j++) {
                cout << " ";
            }

            for (int k = 0; k < i * 2 - 1; k++) {
                cout << "*";
            }

            cout << "\n";
        }

        return 0;
    }

