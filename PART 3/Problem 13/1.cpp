#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int N, arr[8], ans;

int main() {
    scanf("%d", &N);
    for (int i = 0; i < N; ++i)
        scanf("%d", &arr[i]);

    sort(arr, arr + N);
    do {
        int sum = 0;
        for (int i = 1; i < N; ++i)
            sum += abs(arr[i - 1] - arr[i]);

        ans = max(ans, sum);
    } while (next_permutation(arr, arr + N));

    printf("%d\n", ans);

    return 0;
}