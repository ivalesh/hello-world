#include <stdio.h>

int main (void)
{

int grade;

puts ("Enter the character");
puts ("Enter the EOF character to end input");

//цикл пока пользователь не введет EOF
	

	while ( (grade = getchar() ) != EOF) {
	//определить какая оценка введена
	switch (grade) { //инструкция switch вложена в while

	case '\n': //игнорировть символ новой строки
	case '\t': //игнорировать табуляцю
	case ' ': //игнорировать пробел
//	printf("Enter a new correct value\n");
	break;

	default: //любые другие символы
	printf( "Character %c has the value %d\n", grade, grade);
	break; //необязательно
	} //конец switch
} //конец while
}

