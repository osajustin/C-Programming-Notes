typedef struct
{
    char address1[];
    char address2[];
    char city[];
    char state[];
    char zip[];
} RECORD;
RECORD myaddress = {  
            "1721 E Fowler Ave",
            "apt 0000",
            "Tampa",
            "Fl",
            "32311"
        };