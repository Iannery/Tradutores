int a() {

    if (1)

        if (2) return 3;

        else return 4;

    return 5;

}
int main() {

    int i;

    if (2)

        for (i = 0; i < 10; i = i + 1)

            if (i < 8) {

                writeln(42);

            }

            else {

                writeln(81);

            }

}