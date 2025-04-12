#include <iostream>
using namespace std;

int main() {
    const int rows = 5, seatsPerRow = 5;
    int theater[rows][seatsPerRow] = {0};
    int reservedSeats = 0;

    while (true) {
        int row, seat;
        cout << "Enter the row (0-4) and seat (0-4) to reserve, or -1 to exit: ";
        cin >> row;

        if (row == -1) break;

        cin >> seat;

        if (theater[row][seat] == 1) {
            cout << "Seat already reserved." << endl;
        } else {
            theater[row][seat] = 1;
            reservedSeats++;
            cout << "Seat reserved!" << endl;
        }

        cout << "Total reserved seats: " << reservedSeats << endl;
    }

    cout << "Final reserved seats: " << reservedSeats << endl;
    return 0;
}

