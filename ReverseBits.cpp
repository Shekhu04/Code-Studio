long reverseBits(long n) {
    
    unsigned long ans = 0;

    for(int i = 0; i<32; i++) {
        if((1 << i) & n) {
            ans |= static_cast<unsigned long>(1) << (31-i);
        }
    }

    return (ans);
}



