class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int m = flowerbed.size();

        for (int i = 0; i < m; i++) {
            if (flowerbed[i] == 0) {
                // Check previous and next plots
                bool prev_empty = (i == 0) || (flowerbed[i - 1] == 0);
                bool next_empty = (i == m - 1) || (flowerbed[i + 1] == 0);
                
                if (prev_empty && next_empty) {
                    flowerbed[i] = 1;  // Plant a flower
                    count++;
                    if (count == n) {
                        return true;
                    }
                }
            }
        }

        return count >= n;
    }
};
