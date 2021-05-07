
int retorna11() {
    int a;
    int b;
    int c;
    a = 1;
    b = 2;
    c = 5;
    return a + (b * c);
}


int retorna2() {
    int c;
    int d;
    d = 1 > 2;
    d = !d;
    c = 5 <= 6;
    return d + c;
}

int main() {
    int a;
    int b;
    int c;
    writeln("Digite um numero:");
    read(a);
    b = retorna11();
    c = retorna2();
    writeln("Aqui printa 11 menos o seu numero:");
    writeln(b - a);
    writeln("E aqui printa 2 vezes o seu numero:");
    writeln(c * a);
    return 0;
}