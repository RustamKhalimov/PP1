#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Define a structure to represent a point
struct Point {
    int x, y;
};

// Function to compare points for sorting
bool comparePoints(const Point& a, const Point& b) {
    // Sort first by x coordinate and then by y coordinate if x coordinates are equal
    if (a.x == b.x) {
        return a.y < b.y;
    }
    return a.x < b.x;
}

int main() {
    // Read the input
    int n;
    cin >> n;

    // Input the points
    vector<Point> points(n);
    for (int i = 0; i < n; ++i) {
        cin >> points[i].x >> points[i].y;
    }

    // Sort the points using the comparePoints function
    sort(points.begin(), points.end(), comparePoints);

    // Output the sorted points
    for (const auto& point : points) {
        cout << point.x << " " << point.y << std::endl;
    }

    return 0;
}
