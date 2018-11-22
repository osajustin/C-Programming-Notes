struct data
{
    int a;
    float b;
    float c;
} info;

struct data *ptr;
*ptr = &info;

(*ptr).a = 5.5;
//or
ptr->a = 5.5;