//music playlist 
#include<stdio.h>
#include<string.h>
#include<malloc.h>

struct playlist{
  char track_name[25];
  char artist[30];
  int year;
  struct playlist *next_track;
  struct playlist *prev_track;
};
struct playlist *start = NULL,*pointer,*new_node,*pre_pointer,*post_pointer;
void create();
void disply_whole();
void insert();



void main(){
 int choice;
 printf("\n--music--playlist--\n");
 do{
    printf("(you have following options:)\n");
    printf("1.CREATE\t2.DISPLAY PLAYLIST\t3.INSERT A TRACK\t4.EXIT\n");
    scanf("%d",&choice);
   
    switch(choice){
        case 1:
         create();
         break;
        case 2:
         disply_whole();
         break;
        case 3:
         insert();
         break;
        case 4:
         printf("exiting....");
         break;
        default:
         printf("invalid input:\n");
    }

 }
 while(choice !=4);
}


void create(){
char track_name[25],artist[30],optii;
int year;

printf("enter the name of the song:\n");
scanf("%24s", track_name);
fflush(stdin);
printf("enter the name of the artist\n");
scanf("%29s", artist);
fflush(stdin);
printf("enter the year of song release\n");
scanf("%d",&year);

start = (struct playlist *)malloc(sizeof(struct playlist));

strcpy(start->track_name,track_name);
strcpy(start->artist,artist);
start->year = year;
start->prev_track = NULL;
start->next_track = NULL;


printf("to add further tracks in this playlist enter Y or y:\n");
optii = getch();
pointer = start;
while(optii == 'Y' || optii == 'y'){

printf("enter the name of the song:\n");
scanf("%24s", track_name);
fflush(stdin);
printf("enter the name of the artist\n");
scanf("%29s", artist);
fflush(stdin);
printf("enter the year of song release\n");
scanf("%d",&year);

new_node = (struct playlist *)malloc(sizeof(struct playlist));

strcpy(new_node->track_name,track_name);
strcpy(new_node->artist,artist);
new_node->year = year;

new_node->prev_track = pointer;
pointer->next_track = new_node;
new_node->next_track = NULL;
pointer = pointer->next_track;

printf("to continue further insertion of tracks in this playlist enter Y or y\n");
optii = getch();

}
}


disply_whole(){
    if(start == NULL){
        printf("no playlist found:\n");
    }
    else{
         pointer = start;
        pre_pointer = start;
        post_pointer = start;
        
         int i=1;
         printf("--playlist--\n");
         printf("\n");
         while(pointer != NULL){
        
        post_pointer = pointer->next_track;

        if(pre_pointer == start){
            printf("previous track:NULL;\n");
        }
        else{
        printf("previous track:%s\n",pre_pointer->track_name);
        } 
        printf("\n");
        printf("track numer:%d\n",i);
        printf("TRACK NAME:%s\n",pointer->track_name);
        printf("ARTIST:%s\n",pointer->artist);
        printf("YEAR:%d\n",pointer->year);
        
        printf("\n");
        if(pointer->next_track == NULL){
            printf("next track:ended\n");
        }
        else{
        printf("NEXT TRACK:%s\n",post_pointer->track_name);
        }
        pre_pointer = pointer;
        pointer = pointer->next_track;

        i++;
         }
    }
}

void insert(){
if(start == NULL){
    printf("no playlist found:\n");
}
else{
char track_name[25],artist[30],optii;
int year;

printf("enter the name of the song:\n");
scanf("%24s", track_name);
fflush(stdin);
printf("enter the name of the artist\n");
scanf("%29s", artist);
fflush(stdin);
printf("enter the year of song release\n");
scanf("%d",&year);

new_node = (struct playlist *)malloc(sizeof(struct playlist));

strcpy(new_node->track_name,track_name);
strcpy(new_node->artist,artist);
new_node->year = year;

pointer = start;
while(pointer->next_track != NULL){
    pre_pointer = pointer;
    pointer = pointer->next_track;    
}
pre_pointer->next_track = new_node;
new_node->prev_track = pre_pointer;
new_node->next_track =NULL;
printf("new track to the playlist successfully added:\n");

}
}
