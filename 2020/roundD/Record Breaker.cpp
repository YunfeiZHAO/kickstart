#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("./test.txt", "w", stdout);
    printf("this sentence is redirect to a file");
    fclose(stdout);
    return 0;
}