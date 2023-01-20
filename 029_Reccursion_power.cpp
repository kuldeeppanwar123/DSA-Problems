int optimizedPower(int x, int n)
{

    if (n == 0)
        return 1;

    int halfpower = optimizedPower(x, n / 2);
    int halfpowersq = halfpower*halfpower; 

    if (n % 2 == 1)
        return x * halfpowersq;

    return halfpowersq;
}
