//Structure: A collection of one or more variables grouped under a single name for easy manipulation

//example of a simple struct for coordinate points
struct coord
{
    int x;
    int y;
};

//Two ways to declare structures
//1. This declares two structsures of type coord, first and second
struct coord
{
    int x;
    int y;
} first, second;

//2. Declaring inside the main function
struct coord
{
    int x;
    int y;
} 

int main()
{
    struct coord first, second;
}

//"." is the dot operator and is used to access members of a structure
first.x = 50;
first.y = 100;

//To display member values of a structure
printf("%d,%d", second.x, second.y);

//Equivalences
first = second;

first.x = second.x;
firsty.y = second.y;

//SYNTAX for struct
struct tag {
    structure_members;
    //additional statements
} instance;

struct tag instance;

//Example structs
struct SSN {
    int first_three;
    char dash1;
    int second_two;
    char dash2;
    int last_four;
} customer_ssn;

struct date {
    char month[2];
    char day[2];
    char year[4];
} current_date;

struct time {
    int hours;
    int minutes;
    int seconds;
} time_of_birth = {8, 45, 0};

//Strcutures can contain other structures
struct rectangle {
    struct coord topleft;
    struct coord bottomrt;
} mybox;

//To access the location of a struct in a struct
mybox.topleft.x = 0;
mybox.topleft.y = 10;
mybox.bottomrt.x = 100;
mybox.bottomrt.y = 200;

//structs with arrays
struct data
{
    short x[4];
    char y[10];
} record;

//to individually access elements of array that are struct members
record.x[2] = 100;
record.y[1] = 'x';

record.y //pointer to the first element of array y[] in struct record
puts(record.y); //to print the contents of y[] onscreen

//array of structs example to hold name and phone number
struct entry {
    char fname[10];
    char lname[12];
    char phone[12];
}
//to declare the array of struct
struct entry list[100];

//intializing structures
struct sale {
    char customer[20];
    char item[20];
    float amount;
} mysale = {
            "Acme Industries",
            "Left-handed widget";
            1000.00
        };

//example 2
struct customer {
    char firm[20];
    char contact[25];
}

struct sale {
    struct customer buyer;
    char item[20];
    float amount;
} mysale = {
            {"Acme Industries", "George Adams"},
            "Left-handed widget";
            1000.00    
        };

//using structures and pointers
struct data
{
    int *value;
    int *rate;
} first;

//to assign them (initializing)
first.value = &cost;    //*first.value now evaluates to cost
first.rate = &interest; //*first.rate now evaluates to interest

//Pointers being used to point to a string
struct msg 
{
    char *p1;
    char *p2;
} myptrs;
myptrs.p1 = "Teach yourself C in one hour a day";
myptrs.p2 = "By SAMS Publishing";

//Remeber pointers and arrays are almost the same
//arrays you can define the size [n] but may waste memory since all the space may not be used
//pointers point to the first element of the array, they don't waste memory

//pointers to structs
struct part
{
    short number;
    char name[10];
};

struct part *p_part;
//must declare an instance of type part before anything can point to it
struct part gizmo;

p_part = &gizmo;
(*p.part).number = 100; //assigns 100 to gizmo.number;

//indirect membership operator (structure pointer operator) -> can be used to access struct members using a pointer to the structure
p_part->number

//all 3 are equivalent
str.memb
(*p_str).memb
p_str->memb

//unions are like structures except you may only use one member at a time
union shared
{
    char c;
    int i;
};
//This can hold c or i at once, not both at a time
union shared generic_variable = {'@'};

//Quiz
//1
    //A structure is different from an array because it can hold one or more different variable types
//2
    //The structure member operator is "."
//3
    //struct is the keyword used in C to create a structure.
//4
    //The code fragment creates a struct address called myaddress and stores the name Bradley Jones in 
    //char name[], RTSoftware in char add1[], "P.O. Box 1213" in char add2[], Carmel in char city[], 
    //IN in char state[], and 46082-1213 in char zip[].

//5
    //word myWord;
//6
    //By using ptr++.
//4
    //a structure tag is the name of the struct, a structure instance is an allocated structure that can hold data