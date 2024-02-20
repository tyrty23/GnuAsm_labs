
#include <stdio.h>
#include <cstring>

#include <locale.h>
int main (void)
{ 
   setlocale(LC_ALL,"russian");
   char str[150];
   strcpy(str,"Группа: ПМ-32 \nКоманда №2 \nСостав: Каранкевич M., Комбаров Д., Комольцева Д.");
   puts (str);
               
   return 0;
}