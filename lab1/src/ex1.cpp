
#include <stdio.h>
#include <locale.h>
int main (void)
{ 
   setlocale(LC_ALL,"russian");
   const char *str = "Группа: ПМ-32 \nКоманда №2 \nСостав: Каранкевич M., Комбаров Д., Комольцева Д.";
   puts (str);
               
   return 0;
}