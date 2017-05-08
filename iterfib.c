unsigned fibiter(unsigned n)
{
    unsigned accumulator = 1;
    if (n <= 1) return accumulator;
    while (n > 1)
    {
        accumulator *= n;
        n--;
    }
    return accumulator;
}
