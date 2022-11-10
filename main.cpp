#include <iostream>
#include <cmath> //подключаем математическую библиотеку
#include <cstdlib>
#include <ctime>

//1.Вычислить площадь трапеции с основаниями b1 и b2 и высотой h


int task_1()
{
	std::cout << "Task_1" << std::endl;

	
	double b1, b2, h; //вводим переменные оснований и высоты трапеции
	std::cout << "Enter base b1: ";
	std::cin >> b1; //ввод с клавиатуры основания b1
	std::cout << "Enter base b2: ";
	std::cin >> b2; //ввод с клавиатуры основания b2
	std::cout << "Enter the height h: ";
	std::cin >> h; //ввод с клавиатуры высоты h
	std::cout << "S = ((b1 + b2) / 2) * h = " << "((" << b1 << " " << "+" << " " << b2 << ") / 2) *" << " " << h << " " << "=" << " " << 
		((b1 + b2) / 2) * h; //выводим формулу нахождения площади и результат
	
	std::cout << std::endl;
	return 0;
}



//2. Вычислить длину окружности и площадь круга радиуса г.


int task_2()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_2" << std::endl;


	const double PI = 3.1415; //вводим константу пи
	double r; //вводим переменную радиуса
	std::cout << "Enter the length of the radius r: ";
	std::cin >> r; //ввод с клавиатуры длины радиуса 
	std::cout << "C" << " " << "=" << " " << "2" << " " << "*" << " " << "PI" << " " << "*" << " " << "r" << " " << "="
		<< " " << "2 * " << "PI *" << " " << r << " " << "=" << " " << 2 * PI * r << std::endl; //вывод формулы длины и результата
	std::cout << "S = PI * r*r = " << "PI * " << pow(r, 2) << " " << "= " << PI * r * r; //вывод формулы площади и результат

	std::cout << std::endl;
	return 0;
}


//3. Вычислить площадь прямоугольного треугольника и гипотенузу.

int task_3()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_3" << std::endl;

	
	double a, b, c, S; //вводим переменные катетов, гипотенузы и площади трегольника 
	std::cout << "Enter the length of the catheter a: ";
	std::cin >> a; //ввод с клавиатуры длины катета а
	std::cout << "Enter the length of the catheter b: ";
	std::cin >> b; //ввод с клавиатуры длины катета b
	c = sqrt(a * a + b * b); //формула нахождения гипотенузы
	S = (a * b) / 2; //формула нахождения площади прямоуголного треугольника
	std::cout << "c" << " " << "=" << " " << c << std::endl; //вывод результата нахождения гипотенузы треугольника
	std::cout << "S" << " " << "=" << " " << "(a * b) / 2" << " " << "=" << " " << "(" << a << " " << "*" << " " << b << ")" << " " << "/ 2" << " " << "=" 
		<< " " << S; //выводим формулу нахождения площади и результат
	
	std::cout << std::endl;
	return 0;
}


//4. Дано десятичное четырехзначное число.Найти сумму его цифр

int task_4()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_4" << std::endl;

	
	int n; //вводим переменную для четырехзначного числа
	std::cout << "Enter a four-digit number: ";
	std::cin >> n; //ввод с клавиатуры четырехзначного числа
	int a = n % 10; //нахождение единиц числа
	int b = n / 10 % 10; //нахождение десятков числа
	int c = n / 100 % 10; //нахождение разряда сотых
	int d = n / 1000; //нахождение разряда тысячных 
	int s = a + b + c + d; //сумма цифр
	std::cout << "s =" << " " << s; //выводим найденную сумму цифр числа
	
	std::cout << std::endl;
	return 0;
}


//5. Выполнить переход от декартовых координат к полярным.


int task_5()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_5" << std::endl;

	
	double x, y, f, r; //вводим переменные декартовых координат (x, y) и полярного угла (f) и полярного радиуса (r)
	std::cout << "Cartesian coordinates: " << std::endl;
	std::cout << "Enter the value of x: ";
	std::cin >> x; //ввод с клавиатуры значения x
	std::cout << "Enter the value of y: ";
	std::cin >> y; //ввод с клавиатуры значения y

	std::cout << std::endl; //разрыв

	f = atan(y / x); //нахождение арктангенса
	std::cout << "Polar angle: " << std::endl;
	std::cout << "f = " << f << " " << "radians" << std::endl; //полярный угол в радианах
	std::cout << "f = " << f * 180 / 3.1415 << " " << "degrees" << std::endl; //полярный угол в градусах

	std::cout << std::endl;

	std::cout << "Polar radius: " << std::endl;
	r = sqrt(pow(x, 2) + pow(y, 2)); //нахождение полярного радиуса, pow (x, y) - это x в степени y
	std::cout << "r =" << " " << r; //полярный радиус
	
	std::cout << std::endl;
	return 0;
}

//6. Выполнить переход от полярных координат к декартовым.

int task_6()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_6" << std::endl;

	
	double r, f, x, y; //вводим переменные декартовых координат (x, y) и полярного угла (f) и полярного радиуса (r)
	const double PI = 3.1415; //вводим константу пи
	std::cout << "Polar coordinates: " << std::endl;
	std::cout << "Enter the value of the radius r: ";
	std::cin >> r; //ввод значения r (полярного радиуса)
	std::cout << "Enter the value of the angle f in degrees: ";
	std::cin >> f; //ввод значения f (полярного угла)

	std::cout << std::endl; //разрыв

	std::cout << "The value of x:" << std::endl;
	double a = cos(f * PI / 180); //вычисляем косинус угла, переведённого в радианы
	x = r * a; //нахождение координаты x
	std::cout << "x =" << " " << x << std::endl; //декартовая координата x
	std::cout << "x =" << " " << round(x * 10) / 10 << std::endl; //округление

	std::cout << std::endl; //разрыв

	std::cout << "Y value: " << std::endl;
	double b = sin(f * PI / 180); //вычисляем синус угла, переведённого в радианы
	y = r * b; //нахождение координаты y
	std::cout << "y =" << " " << y << std::endl; //декартовая координата y
	std::cout << "y =" << " " << round(y * 10) / 10 << std::endl; //округление

	std::cout << std::endl;
	return 0;
}


// 7.Найти корни квадратного уравнения.


int task_7()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_7" << std::endl;

	//вводим коэффициенты при квадратном уравнении
	std::cout << "Coefficients of the quadratic equation: " << std::endl;
	double a, b, c, x1, x2, x; //вводим переменные коэффициентов и корней
	std::cout << "The senior coefficient a is equal to: ";
	std::cin >> a; //вводим с клавиатуры коэффициент a
	std::cout << "The second coefficient b is equal to: ";
	std::cin >> b; //вводим с клавиатуры коэффициент b
	std::cout << "The free member c is equal to: ";
	std::cin >> c; //вводим с клавиатуры коэффициент c

	std::cout << std::endl;
	std::cout << "Answer: " << std::endl;


	double d = (pow(b, 2) - 4 * a * c); // d - дискриминант

	//проверяем коэффициенты
	if (a == 0 && b == 0) {
		std::cout << "A mistake!!!";
	}
	else if ((a == 0) && (b != 0)) {
		if (c == 0) {
			x = c / b;
			std::cout << "Root x = " << x << std::endl;
		}
		else {
			x = (-1 * c) / b;
			std::cout << "Root x = " << x << std::endl;
		}

	}
	//проверяем дискриминант, находим корни, если они существуют
	else {
		if (d > 0) {
			x1 = (-1 * b + sqrt(d)) / (2 * a);
			x2 = (-1 * b - sqrt(d)) / (2 * a);
			std::cout << "The first root x1 = " << x1 << std::endl;
			std::cout << "Second root x2 = " << x2 << std::endl;
		}
		else if (d == 0) {
			x = (-1 * b) / (2 * a);
			std::cout << "Root x = " << x << std::endl;
		}
		else {
			std::cout << "This equation has no roots";
		}
	}

	std::cout << std::endl;
	return 0;
}


// 8. Имеется треугольник со сторонами а, b, с.Найти медианы треугольника, сторонами которого
// являются медианы исходного треугольника.


int task_8()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_8" << std::endl;

	
	double a, b, c; //вводим переменные сторон треугольника
	std::cout << "Side a is equal to: ";
	std::cin >> a;
	std::cout << "Side b is equal to: ";
	std::cin >> b;
	std::cout << "Side c is equal to: ";
	std::cin >> c;

	std::cout << std::endl; //разрыв

	//Медианы исходного треугольника или стороны нового треугольника
	double m_c = (sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2))) / 2; //медиана, которая делит сторону c
	double m_b = (sqrt(2 * pow(a, 2) + 2 * pow(c, 2) - pow(b, 2))) / 2; //медиана, которая делит сторону b
	double m_a = (sqrt(2 * pow(c, 2) + 2 * pow(b, 2) - pow(a, 2))) / 2; //медиана, которая делит сторону a

	std::cout << "Medians of the original triangle:" << std::endl;
	std::cout << "The median that divides side c is equal to = " << m_c << std::endl;
	std::cout << "The median that divides side b is equal to = " << m_b << std::endl;
	std::cout << "The median that divides side a is equal to = " << m_a << std::endl;

	std::cout << std::endl; //разрыв

	//Медианы нового треугольника
	double m_c1 = (sqrt(2 * pow(m_a, 2) + 2 * pow(m_b, 2) - pow(m_c, 2))) / 2; //медиана, которая делит сторону m_c нового треугольника, pow(m_a, 2) - m_a в степени 2
	double m_b1 = (sqrt(2 * pow(m_a, 2) + 2 * pow(m_c, 2) - pow(m_b, 2))) / 2; //медиана, которая делит сторону m_b нового треугольника
	double m_a1 = (sqrt(2 * pow(m_c, 2) + 2 * pow(m_b, 2) - pow(m_a, 2))) / 2; //медиана, которая делит сторону m_a нового треугольника

	std::cout << "Medians of the new triangle: " << std::endl;
	std::cout << "The median that divides the new side of m_a is = " << m_a1 << std::endl;
	std::cout << "The median that divides the new side of m_b is = " << m_b1 << std::endl;
	std::cout << "The median that divides the new side of m_c is = " << m_c1 << std::endl;

	std::cout << std::endl;
	return 0;
}


//9.Идет k-я секунда суток. Определить, сколько целых часов и целых минут прошло с начала суток.

int task_9()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_9" << std::endl;


	setlocale(LC_ALL, "Rus");
	int k, h, m; //вводим переменные секунды (k), часов (h), минут (m)
	std::cout << "Enter the second k: ";
	std::cin >> k;

	h = k / 3600; //нахождение часов
	m = (k % 3600) / 60; //нахождение минут

	std::cout << "It is " << h << " hours и " << m << " minutes"; //вывод часов и минут

	std::cout << std::endl;
	return 0;
}


//10. Определить, является ли треугольник со сторонами a, b, c равнобедренным.


int task_10()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_10" << std::endl;

	setlocale(LC_ALL, "Rus");
	double a, b, c; //вводим переменные сторон треугольника
	std::cout << "Side a is equal to: ";
	std::cin >> a; //ввод с клавиатуры стороны a
	std::cout << "Side b is equal to: ";
	std::cin >> b; //ввод с клавиатуры стороны b
	std::cout << "Side c is equal to: ";
	std::cin >> c; //ввод с клавиатуры стороны c

	std::cout << std::endl; //разрыв

	//проверяем условие равнобедренности треугольника
	std::cout << "Answer:" << std::endl;
	if ((a == b) || (a == c) || (b == c)) {
		std::cout << "The triangle is isosceles";
	}
	else if (a == b == c) {
		std::cout << "The triangle is equilateral";
	}
	else {
		std::cout << "The triangle is not isosceles";
	}
	std::cout << std::endl;
	return 0;

}


//11. Вычислить стоимость покупки с учётом скидки. Скидка в 10% предоставляется, если сумма
//покупки превышает 1000 рублей.

int task_11() 
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_11" << std::endl;

	double sum; //Вводим переменную суммы покупки
	std::cout << "Enter the amount of purchases:";
	std::cin >> sum; //Ввод с клавиатуры суммы
	if (sum >= 1000) {
		double sum_new = sum * 0.9; //Здаем условие, при котором если сумма больше 1000, то применятся скидка 10% (*0.9)
		std::cout << "Sum = " << sum_new;
	}
	else {
		std::cout << "Sum = " << sum;
	}

	std::cout << std::endl;
	return 0;
}


//12. Дать рекомендации пользователю с известным ростом и весом похудеть или поправиться, если
//идеальный вес определяется формулой(рост - 100 = идеальный вес).

int task_12()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_12" << std::endl;

	double height; //Вводим переменную роста
	double weight;//Вводим переменную веса
	std::cout << "Enter your height:" << std::endl;
	std::cin >> height; // Ввод с клавиатуры роста
	std::cout << "Enter your weight:" << std::endl;
	std::cin >> weight; // Ввод с клавиатуры веса
	if (height - 100 == weight) { //Задаем условие, при котором рост - 100 должно быть рано весу
		std::cout << "You're in good shape." << std::endl;
	}
	else if (height - 100 >= weight) { // Задаем иное условие при котором рост - 100 больше веса
		std::cout << "I would advise you to eat more" << std::endl;
	}
	else {
		std::cout << " I would advise you to lose weight" << std::endl;

	}
	return 0; // Завершаем
}


//13. Программа генерирует два случайных числа в диапазоне от 1 до 9. Тестируемый вводит результат
//произведения этих чисел.Программа сообщает тестируемому ошибся он или нет.

int task_13() 
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_13" << std::endl;

	srand(time(NULL));
	int a = rand() % 9 + 1; // Вводим переменную рандомно числа, диапозон которго с 1 до 9
	int b = rand() % 9 + 1;
	std::cout << a << std::endl; //Вывод на экран первого числа
	std::cout << b << std::endl; //Вывод на экран второго числа
	int multy; // Вводим перменную произведения чисел
	std::cout << "Enter multiply: " << std::endl;
	std::cin >> multy; // Ввод с клавиатуры произведения
	if (multy == a * b) { // Задаем условие, при котором число должно быть равно произведению двух чисел 
		std::cout << "Correct" << std::endl;
	}
	else {
		std::cout << "Incorrect" << std::endl;
	} 
	return 0;

}


//14. Написать программу вычисления стоимости переговоров, если по субботам и воскресеньям
//предоставляется скидка 20 % .Ввести продолжительность разговора и день недели(число от 1 до 7).
	

int task_14() 
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_14" << std::endl;

	int day, hours, price; //вводим переменные дня недели, продолжительности и стоимости
	std::cout << "Enter price: ";
	std::cin >> price;
	std::cout << "Enter number of the day of the week: ";
	std::cin >> day;
	std::cout << "Enter duration of negotiations: ";
	std::cin >> hours;
	if (day == 6 || day == 7) {
		std::cout << "Price" << price * hours * 0.8 << std::endl;
	}
	else {
		std::cout << "Price=" << price * hours << std::endl;
	} 
	return 0;

}


int task_15() 
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_15" << std::endl;

	int num;
	std::cout << "Enter num" << std::endl;
	std::cin >> num;
	if (num == 1) {
		std::cout << "January" << std::endl;
		std::cout << "Winter" << std::endl;
	}
	else if (num == 2) {
		std::cout << "February" << std::endl;
		std::cout << "Winter" << std::endl;
	}
	else if (num == 3) {
		std::cout << "March" << std::endl;
		std::cout << "Spring" << std::endl;
	}
	else if (num == 4) {
		std::cout << "April" << std::endl;
		std::cout << "Spring" << std::endl;
	}
	else if (num == 5) {
		std::cout << "May" << std::endl;
		std::cout << "Spring" << std::endl;
	}
	else if (num == 6) {
		std::cout << "June" << std::endl;
		std::cout << "Summer" << std::endl;
	}
	else if (num == 7) {
		std::cout << "July" << std::endl;
		std::cout << "Summer" << std::endl;
	}
	else if (num == 8) {
		std::cout << "August" << std::endl;
		std::cout << "Summer" << std::endl;
	}
	else if (num == 9) {
		std::cout << "Septemder" << std::endl;
		std::cout << "Autumn" << std::endl;
	}
	else if (num == 10) {
		std::cout << "October" << std::endl;
		std::cout << "Autumn" << std::endl;
	}
	else if (num == 11) {
		std::cout << "November" << std::endl;
		std::cout << "Autumn" << std::endl;
	}
	else if (num == 12) {
		std::cout << "December" << std::endl;
		std::cout << "Winter" << std::endl;
	} 
	return 0;
}


//17. Написать программу, которая при вводе числа в диапазоне от 1 до 99 добавляет к нему слово
//"копейка" в правильной форме.

int task_17()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_17" << std::endl;
	
	
	int k; //вводим переменную k 
	std::cout << "Enter a number from 1 to 99: ";
	std::cin >> k;
	if (k % 10 == 1)
	{
		std::cout << k << " " << "Kopeika";
	}
	else if (k % 10 <= 4 && k % 10 >= 2)
	{
		std::cout << k << " " << "Kopeiki";
	}
	else if ((k % 10 <= 9 && k % 10 >= 5) || k % 10 == 0)
	{
		std::cout << k << " " << "Kopeek";
	}

	std::cout << std::endl;
	return 0;
}


//18. Дано натуральное четырехзначное число. Выяснить, является ли оно палиндромом.

int task_18() 
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_18" << std::endl;

	int n;

	std::cout << "Enter num: ";
	std::cin >> n;
	int m = n, x = 0;
	while (m)
	{
		x = x * 10 + m % 10;
		m /= 10;
	}
	if (x == n) {
		std::cout << "Answer: " << "Yes" << std::endl;
	}
	else {
		std::cout << "Answer: " << "No" << std::endl;
	}

	return 0;
}


//19. Дано трёхзначное число. Определить: 19.1 является ли произведение его цифр больше числа b
//19.2 кратна ли 7 сумма его цифр


int task_19() 
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_19" << std::endl;


	int x, b, multy, sum;
	std::cout << "Enter num: ";
	std::cin >> x;
	std::cout << "Enter b: ";
	std::cin >> b;

	//найдем цифры числа
	int a = x % 10;
	int c = x / 10 % 10;
	int d = x / 100;

	sum = a + c + d; //сумма цифр числа
	multy = a * c * d; //произведение цифр числа
	std::cout << "The product is equal to: " << multy << std::endl;
	std::cout << "The sum is equal to: " << sum << std::endl;


	//проверяем первое условие 
	if (multy > b) {
		std::cout << "Answer_1: " << "The product is greater than the number " << b << std::endl;
	}
	else if (multy == b) {
		std::cout << "Answer_1: " << "The product is equal to the number " << b << std::endl;
	}
	else if (multy < b) {
		std::cout << "Answer_1: " << "The product is less than a number " << b << std::endl;
	}

	//проверяем второе условие
	if (sum % 7 == 0) {
		std::cout << "Answer_2: " << "The sum is a multiple of 7" << std::endl;
	}
	else {
		std::cout << "Answer_2: " << "The sum is not a multiple of 7" << std::endl;
	}

	return 0;

}


//20. Даны вещественные положительные числа a, b, c, d. Выяснить, можно ли прямоугольник со
//сторонами a, b поместить в прямоугольник со сторонами c, d так, чтобы стороны одного
//прямоугольника были параллельны сторонам другого.

int task_20()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_20" << std::endl;

	double a, b, c, d;
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;
	std::cout << "Enter c: ";
	std::cin >> c;
	std::cout << "Enter d: ";
	std::cin >> d;
	if (((a < c) && (b < d)) || ((a < d) && (b < c))) {
		std::cout << "A rectangle with sides a and b can be placed in a rectangle with sides c and d." << std::endl;

	}
	else {
		std::cout << "A rectangle with sides a and b cannot be placed in a rectangle with sides c and d." << std::endl;
	} 
	return 0;

}

int main() 
{
	std::cout << task_1();
	std::cout << task_2();
	std::cout << task_3();
	std::cout << task_4();
	std::cout << task_5();
	std::cout << task_6();
	std::cout << task_7();
	std::cout << task_8();
	std::cout << task_9();
	std::cout << task_10();
	std::cout << task_11();
	std::cout << task_12();
	std::cout << task_13();
	std::cout << task_14();
	std::cout << task_15();
	std::cout << task_17();
	std::cout << task_18();
	std::cout << task_19();
	std::cout << task_20();
	return 0;
}