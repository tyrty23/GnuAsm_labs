
#include < stdio.h >
#include <locale.h>
int main (void)
{ 
   setlocale(LC_ALL,"russian");
   const char *str = "ГРуппа: ПМ-32 \n Команда №2 \n Состав: Каранкевич M., Комбаров Д., Комольцева Д.";
   puts (str);
               
   return 0;
}