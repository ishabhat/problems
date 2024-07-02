class Solution {
    int mod = 1e9+7;
private:
    long long power(long long x, long long n){
        if(n == 0)
            return 1;
        long long ans = power(x, n/2);
        ans *= ans;
        ans %= mod;
        if(n % 2 == 1){
            ans *= x;
            ans %= mod;
        }
        return ans;
    }

public:
    int countGoodNumbers(long long n) {
        long long evenPlaces = (n+1)/2;
        long long oddPlaces = n/2;
        return (power(5,evenPlaces) * power(4,oddPlaces)) % mod;    
    }
};