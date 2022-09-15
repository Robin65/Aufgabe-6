#include<stdio.h>
#include<math.h>

#include<string.h>


int stringtoint (char *arr ) { //definierung der funktion 

int i;
int value;
int number;
int trig;

  
  trig = 1; //set trig true 
  i = value = 0; //var value && i is 0;
  for 
    (i=0; i<strlen(arr);i++) // for-loop from 0 to string lenght
  {
    if  
      (i==0 && arr[i]=='-') // if arr eine negative Zahl enthält
    //then
    {
      trig = -1;
    continue;
    }
    
    number = arr[i] - '0'; 
    
    value = value * 10 + number;
    }
     value = value * trig; 
    return value;  
    }
   //end_if;
int main()
//then
{
char arr[10]
printf("eingabe"); //aufforderung zur eingabe eines Strings als zahl.
scanf("%s" ,arr); //einlesen der iengabe in die var arr
int result = stingtoint (arr); //ausführeung der funktion und übergabe in die Variabele result die vorher definiert war. 
printf ("\n %d",ans); //rückgabe der zahl
return 0; 
}
//end_if;
