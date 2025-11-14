#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[100]; 

    for(int i = 0; i < n; i++) scanf("%d", &nums[i]);

    for(int i = 0; i < n; i++) nums[i] = nums[i] % 2 ? 1 : 0;

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] > nums[j]) {
                int t = nums[i];
                nums[i] = nums[j];
                nums[j] = t;
            }
        }
    }

    for(int i = 0; i < n; i++) 
    {printf("%d ", nums[i]);}

    return 0;
}
