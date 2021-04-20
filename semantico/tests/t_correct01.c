int i;

int fib(int i)
{

    if (i == 1)
        return 1;

    else if (i == 2)
        return 1;

    else
        return fib(i - 1) + fib(i - 2);
}

int main()
{

    int i;

    read(i);

    if (i < 0)
        write('e');

    else
    {

        i = fib(i);

        write("O resultado é:");
        writeln(i);
    }

    return 0;
}
