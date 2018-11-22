void combineArray(char *i, char *j)
{
int x;
//assumed length of *j is LENGTH
for (x = 0; x < LENGTH; x++)
{
    j[x] = i[x];
}

}