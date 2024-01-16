int getXOR(int a, int b) {

    return a^b;

}

 

int getBit(int c, int d) {

    return (d>>c)&1;

}

 

int setBit(int e, int f) {

    return f|(1<<e);

}
