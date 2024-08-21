int add(int x, int y);

int main()
{
    int d0;
    int *ptrD0 = &d0;
    int d1 = 1;
    int d2 = 127;
    int d3 = 128;
    unsigned int d4 = 255;
    int d5 = -1;
    int *ptrD5 = &d5;
    char c;
    char c0 = '0';
    char c1 = 'A';
    char c2 = 'a';
    char s1[] = "01234";
    char s2[] = "ABCDE";
    char s3[] = "abcde";
    char *ptrS = s3;

    d0 = add(d1, d2);

    return 0;
}

int add(int x, int y)
{
    return x + y;
}