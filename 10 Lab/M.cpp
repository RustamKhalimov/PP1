#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> vec1(N);
    std::vector<int> vec2(M);

    for (int i = 0; i < N; ++i) {
        std::cin >> vec1[i];
    }

    for (int i = 0; i < M; ++i) {
        std::cin >> vec2[i];
    }

    // Remove consecutive duplicates in both vectors
    vec1.erase(std::unique(vec1.begin(), vec1.end()), vec1.end());
    vec2.erase(std::unique(vec2.begin(), vec2.end()), vec2.end());

    std::vector<int> mergedVec;
    mergedVec.reserve(N + M);

    // Merge vectors alternately
    auto it1 = vec1.begin();
    auto it2 = vec2.begin();
    while (it1 != vec1.end() || it2 != vec2.end()) {
        if (it1 != vec1.end()) {
            mergedVec.push_back(*it1++);
        }
        if (it2 != vec2.end()) {
            mergedVec.push_back(*it2++);
        }
    }

    // Remove consecutive duplicates in the merged vector
    mergedVec.erase(std::unique(mergedVec.begin(), mergedVec.end()), mergedVec.end());

    // Output the final merged and unique vector
    for (int num : mergedVec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
