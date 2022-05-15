#include <stdio.h>
#include <stdlib.h>

struct
{
int id;
char name[51];
char lastName[51];
float price;
char flycode[10];
int typePassenger;
int statusFlight;
int isEmpty;
}typedef Passenger;

int InitPassenger(Passenger list[],int len);
int AddPassenger(Passenger list[],int len,int id,char name[],char lastName[],float price,int typePassenger,char flyCode[]);
int FindPassengerById(Passenger list[],int len, int id);
int RemovePassenger(Passenger list[], int len, int id);
int SortPassengers(Passenger list[],int len, int order);
int PrintPassenger(Passenger list[], int length);
int SortPassengerByCode(Passenger list[], int len, int order);

