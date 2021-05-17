int f(int a, int b, int c){
    return 0;
}


int main() {
    int a;
    int b;
    float c;
    c = a + b - 1.5;
    a = c - 1;
    f(f(a, b, c), b, c);
    return 0;
}