#include <map>
#include <iostream>
#include <vector>
using namespace std;
void board(vector<vector<int>> &mat)
}

bool Iscompleted(vector<vector<int>> &mat)
}

bool Isvalid(vector<vector<int>> &mat)
}

int main()
{
    vector<vector<int>> mat = {
        {-5, -3, 0, 0, -7, 0, 0, 0, 0},
        {-6, 0, 0, -1, -9, -5, 0, 0, 0},
        {0, -9, -8, 0, 0, 0, 0, -6, 0},

        {-8, 0, 0, 0, -6, 0, 0, 0, -3},
        {-4, 0, 0, -8, 0, -3, 0, 0, -1},
        {-7, 0, 0, 0, -2, 0, 0, 0, -6},

        {0, -6, 0, 0, 0, 0, -2, -8, 0},
        {0, 0, 0, -4, -1, -9, 0, 0, -5},
        {0, 0, 0, 0, -8, 0, 0, -7, -9}};

    int r = -1, c, value;
    while (!Iscompleted(mat))
    {

        system("cls");
        board(mat);
        bool flag;
        do
        {
            flag = false;
            cout << "\nEnter the position (r,c) : ";
            cin >> r >> c;
            if (r > 9 || c > 9 || mat[r - 1][c - 1] != 0)
            {
                flag = true;
                cout << "\n\t Invalid Position \n";
            }
        } while (flag);

        do
        {
            flag = false;
            cout << "Enter the value : ";
            cin >> value;
            if (value > 9 || value < 1)
            {
                flag = true;
                cout << "\n\t Invalid Value \n";
            }
        } while (flag);
        mat[r - 1][c - 1] = value;
    }
    if (Isvalid(mat))
        cout << "You have done it ";
    else
        cout << "You lost ";

    return 0;
}
