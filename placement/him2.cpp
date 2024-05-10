#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string findLongestRegex(const std::string& A, const std::string& B, const std::string& C) {
    int n = A.size();
    std::string regexA = "", regexB = "";

    for (int i = 0; i < n; ++i) {
        char minCharA = 'A', minCharB = 'A';
        while (minCharA <= 'Z') {
            if (minCharA != A[i] && minCharA != C[i]) {
                break;
            }
            ++minCharA;
        }
        while (minCharB <= 'Z') {
            if (minCharB != B[i] && minCharB != C[i]) {
                break;
            }
            ++minCharB;
        }

        if (minCharA > 'Z' || minCharB > 'Z') {
            return "-1";
        }

        regexA += "[" + std::string(1, minCharA) + "]";
        regexB += "[" + std::string(1, minCharB) + "]";
    }

    return regexA + " " + regexB;
}

int main() {
    std::string A, B, C;
    std::cin >> A >> B >> C;

    std::string regex = findLongestRegex(A, B, C);
    std::cout << regex << std::endl;

    return 0;
}
