#include <iostream>
using namespace std;

struct Point {
    int x, y;
};
//translatepoint function
void translatePoint(Point& p, int dx, int dy) {
    p.x += dx;
    p.y += dy;
}
//printpoints
void printPoints(Point* points, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Point " << i + 1 << ": (" << points[i].x << ", " << points[i].y << ")\n";
    }
}

int main() {
    int n, dx, dy;
    cout << "Enter number of points: ";
    cin >> n;

    Point* points = new Point[n];
    cout << "Enter the coordinates (x y) for each point:\n";
    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }

    cout << "Before translation:\n";
    //printpoints function call
    printPoints(points, n);

    cout << "Enter translation offsets (dx dy): ";
    cin >> dx >> dy;

    for (int i = 0; i < n; i++) {
        translatePoint(points[i], dx, dy);
    }

    cout << "After translation:\n";
    printPoints(points, n);
//free up memory
    delete[] points;
    return 0;
}

