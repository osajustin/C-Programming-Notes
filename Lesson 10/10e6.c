int longestString(char s[], char t[])
{
    int x, y;
    x = strlen(s);
    y = strlen(t);

    if (x > y)
        return x;
    else
        return y;
}