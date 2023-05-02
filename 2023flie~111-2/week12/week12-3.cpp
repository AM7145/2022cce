int hammingWeight(uint32_t n) {
        if (n==0){
        return 0;
    }
    int ans=0;

    while (n){
        if (n & 1){
            ans++;
        }
        n >>= 1;
    }
    return ans;
}
