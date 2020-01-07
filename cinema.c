#include<stdio.h>
struct Movie
{
    char lengthOfMovie[6],
    char genreOfMovie[10],
    char contentOfMovie[100],
    char listOfActors[100]
};
struct Sans
{
    char nameOfMovie[20],int dayOfSans,
    int monthOfSans,
    int yearOfSans,
    int hourOfSans,
    int minuteOfSans,
    int capacityRemaining,
    struct Movie
};
struct Salon
{
    struct Sans sans,
    struct Sans sans,
    struct Sans sans,
}
int main()
{
    struct Salon salon1={struct Sans sans1={"Motreb","5","1","2020","16","30","50",struct Movie movie1={"120min","comedy","ina aslan maro ghabul nadaran behemun migan motreb","parviz parastooyi,mohsen kiayi,elnaz shakerdoost"}},
    struct Sans sans2={"Jandar","20","1","2020","17","45","60",struct Movie movie2={"120min","drama","vaghti badtarin kare donya mishe behtarin rah chikar mishe kard?","fateme motamedaria,hamed behdad,baran kosari"}},
    struct Sans sans3={"Ashoftegi","22","1","2020","15","15","60",struct Movie movie3={"100min","drama","ashoftegi realisti va ejtemayi nist, dastanist darbare eshgho jenayat","bahram radan,mahnaz afshar,mehran ahmadi"}}
    };
    file *fptr;
    fptr=fopen("cinema","wb");
    fwrite(&salon1,sizeof(struct Salon),1,fptr);
    
}
