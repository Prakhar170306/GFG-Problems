class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        int x = a, y = b;

        while (y != 0) {
            int rem = x % y;
            x = y;
            y = rem;
        }

        int gcd = x;
        int lcm = (a / gcd) * b;

        return {lcm, gcd};
    }
};