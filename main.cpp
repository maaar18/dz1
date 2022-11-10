#include <iostream>
#include <cmath> //���������� �������������� ����������
#include <cstdlib>
#include <ctime>

//1.��������� ������� �������� � ����������� b1 � b2 � ������� h


int task_1()
{
	std::cout << "Task_1" << std::endl;

	
	double b1, b2, h; //������ ���������� ��������� � ������ ��������
	std::cout << "Enter base b1: ";
	std::cin >> b1; //���� � ���������� ��������� b1
	std::cout << "Enter base b2: ";
	std::cin >> b2; //���� � ���������� ��������� b2
	std::cout << "Enter the height h: ";
	std::cin >> h; //���� � ���������� ������ h
	std::cout << "S = ((b1 + b2) / 2) * h = " << "((" << b1 << " " << "+" << " " << b2 << ") / 2) *" << " " << h << " " << "=" << " " << 
		((b1 + b2) / 2) * h; //������� ������� ���������� ������� � ���������
	
	std::cout << std::endl;
	return 0;
}



//2. ��������� ����� ���������� � ������� ����� ������� �.


int task_2()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_2" << std::endl;


	const double PI = 3.1415; //������ ��������� ��
	double r; //������ ���������� �������
	std::cout << "Enter the length of the radius r: ";
	std::cin >> r; //���� � ���������� ����� ������� 
	std::cout << "C" << " " << "=" << " " << "2" << " " << "*" << " " << "PI" << " " << "*" << " " << "r" << " " << "="
		<< " " << "2 * " << "PI *" << " " << r << " " << "=" << " " << 2 * PI * r << std::endl; //����� ������� ����� � ����������
	std::cout << "S = PI * r*r = " << "PI * " << pow(r, 2) << " " << "= " << PI * r * r; //����� ������� ������� � ���������

	std::cout << std::endl;
	return 0;
}


//3. ��������� ������� �������������� ������������ � ����������.

int task_3()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_3" << std::endl;

	
	double a, b, c, S; //������ ���������� �������, ���������� � ������� ����������� 
	std::cout << "Enter the length of the catheter a: ";
	std::cin >> a; //���� � ���������� ����� ������ �
	std::cout << "Enter the length of the catheter b: ";
	std::cin >> b; //���� � ���������� ����� ������ b
	c = sqrt(a * a + b * b); //������� ���������� ����������
	S = (a * b) / 2; //������� ���������� ������� ������������� ������������
	std::cout << "c" << " " << "=" << " " << c << std::endl; //����� ���������� ���������� ���������� ������������
	std::cout << "S" << " " << "=" << " " << "(a * b) / 2" << " " << "=" << " " << "(" << a << " " << "*" << " " << b << ")" << " " << "/ 2" << " " << "=" 
		<< " " << S; //������� ������� ���������� ������� � ���������
	
	std::cout << std::endl;
	return 0;
}


//4. ���� ���������� �������������� �����.����� ����� ��� ����

int task_4()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_4" << std::endl;

	
	int n; //������ ���������� ��� ��������������� �����
	std::cout << "Enter a four-digit number: ";
	std::cin >> n; //���� � ���������� ��������������� �����
	int a = n % 10; //���������� ������ �����
	int b = n / 10 % 10; //���������� �������� �����
	int c = n / 100 % 10; //���������� ������� �����
	int d = n / 1000; //���������� ������� �������� 
	int s = a + b + c + d; //����� ����
	std::cout << "s =" << " " << s; //������� ��������� ����� ���� �����
	
	std::cout << std::endl;
	return 0;
}


//5. ��������� ������� �� ���������� ��������� � ��������.


int task_5()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_5" << std::endl;

	
	double x, y, f, r; //������ ���������� ���������� ��������� (x, y) � ��������� ���� (f) � ��������� ������� (r)
	std::cout << "Cartesian coordinates: " << std::endl;
	std::cout << "Enter the value of x: ";
	std::cin >> x; //���� � ���������� �������� x
	std::cout << "Enter the value of y: ";
	std::cin >> y; //���� � ���������� �������� y

	std::cout << std::endl; //������

	f = atan(y / x); //���������� �����������
	std::cout << "Polar angle: " << std::endl;
	std::cout << "f = " << f << " " << "radians" << std::endl; //�������� ���� � ��������
	std::cout << "f = " << f * 180 / 3.1415 << " " << "degrees" << std::endl; //�������� ���� � ��������

	std::cout << std::endl;

	std::cout << "Polar radius: " << std::endl;
	r = sqrt(pow(x, 2) + pow(y, 2)); //���������� ��������� �������, pow (x, y) - ��� x � ������� y
	std::cout << "r =" << " " << r; //�������� ������
	
	std::cout << std::endl;
	return 0;
}

//6. ��������� ������� �� �������� ��������� � ����������.

int task_6()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_6" << std::endl;

	
	double r, f, x, y; //������ ���������� ���������� ��������� (x, y) � ��������� ���� (f) � ��������� ������� (r)
	const double PI = 3.1415; //������ ��������� ��
	std::cout << "Polar coordinates: " << std::endl;
	std::cout << "Enter the value of the radius r: ";
	std::cin >> r; //���� �������� r (��������� �������)
	std::cout << "Enter the value of the angle f in degrees: ";
	std::cin >> f; //���� �������� f (��������� ����)

	std::cout << std::endl; //������

	std::cout << "The value of x:" << std::endl;
	double a = cos(f * PI / 180); //��������� ������� ����, ������������ � �������
	x = r * a; //���������� ���������� x
	std::cout << "x =" << " " << x << std::endl; //���������� ���������� x
	std::cout << "x =" << " " << round(x * 10) / 10 << std::endl; //����������

	std::cout << std::endl; //������

	std::cout << "Y value: " << std::endl;
	double b = sin(f * PI / 180); //��������� ����� ����, ������������ � �������
	y = r * b; //���������� ���������� y
	std::cout << "y =" << " " << y << std::endl; //���������� ���������� y
	std::cout << "y =" << " " << round(y * 10) / 10 << std::endl; //����������

	std::cout << std::endl;
	return 0;
}


// 7.����� ����� ����������� ���������.


int task_7()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_7" << std::endl;

	//������ ������������ ��� ���������� ���������
	std::cout << "Coefficients of the quadratic equation: " << std::endl;
	double a, b, c, x1, x2, x; //������ ���������� ������������� � ������
	std::cout << "The senior coefficient a is equal to: ";
	std::cin >> a; //������ � ���������� ����������� a
	std::cout << "The second coefficient b is equal to: ";
	std::cin >> b; //������ � ���������� ����������� b
	std::cout << "The free member c is equal to: ";
	std::cin >> c; //������ � ���������� ����������� c

	std::cout << std::endl;
	std::cout << "Answer: " << std::endl;


	double d = (pow(b, 2) - 4 * a * c); // d - ������������

	//��������� ������������
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
	//��������� ������������, ������� �����, ���� ��� ����������
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


// 8. ������� ����������� �� ��������� �, b, �.����� ������� ������������, ��������� ��������
// �������� ������� ��������� ������������.


int task_8()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_8" << std::endl;

	
	double a, b, c; //������ ���������� ������ ������������
	std::cout << "Side a is equal to: ";
	std::cin >> a;
	std::cout << "Side b is equal to: ";
	std::cin >> b;
	std::cout << "Side c is equal to: ";
	std::cin >> c;

	std::cout << std::endl; //������

	//������� ��������� ������������ ��� ������� ������ ������������
	double m_c = (sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2))) / 2; //�������, ������� ����� ������� c
	double m_b = (sqrt(2 * pow(a, 2) + 2 * pow(c, 2) - pow(b, 2))) / 2; //�������, ������� ����� ������� b
	double m_a = (sqrt(2 * pow(c, 2) + 2 * pow(b, 2) - pow(a, 2))) / 2; //�������, ������� ����� ������� a

	std::cout << "Medians of the original triangle:" << std::endl;
	std::cout << "The median that divides side c is equal to = " << m_c << std::endl;
	std::cout << "The median that divides side b is equal to = " << m_b << std::endl;
	std::cout << "The median that divides side a is equal to = " << m_a << std::endl;

	std::cout << std::endl; //������

	//������� ������ ������������
	double m_c1 = (sqrt(2 * pow(m_a, 2) + 2 * pow(m_b, 2) - pow(m_c, 2))) / 2; //�������, ������� ����� ������� m_c ������ ������������, pow(m_a, 2) - m_a � ������� 2
	double m_b1 = (sqrt(2 * pow(m_a, 2) + 2 * pow(m_c, 2) - pow(m_b, 2))) / 2; //�������, ������� ����� ������� m_b ������ ������������
	double m_a1 = (sqrt(2 * pow(m_c, 2) + 2 * pow(m_b, 2) - pow(m_a, 2))) / 2; //�������, ������� ����� ������� m_a ������ ������������

	std::cout << "Medians of the new triangle: " << std::endl;
	std::cout << "The median that divides the new side of m_a is = " << m_a1 << std::endl;
	std::cout << "The median that divides the new side of m_b is = " << m_b1 << std::endl;
	std::cout << "The median that divides the new side of m_c is = " << m_c1 << std::endl;

	std::cout << std::endl;
	return 0;
}


//9.���� k-� ������� �����. ����������, ������� ����� ����� � ����� ����� ������ � ������ �����.

int task_9()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_9" << std::endl;


	setlocale(LC_ALL, "Rus");
	int k, h, m; //������ ���������� ������� (k), ����� (h), ����� (m)
	std::cout << "Enter the second k: ";
	std::cin >> k;

	h = k / 3600; //���������� �����
	m = (k % 3600) / 60; //���������� �����

	std::cout << "It is " << h << " hours � " << m << " minutes"; //����� ����� � �����

	std::cout << std::endl;
	return 0;
}


//10. ����������, �������� �� ����������� �� ��������� a, b, c ��������������.


int task_10()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_10" << std::endl;

	setlocale(LC_ALL, "Rus");
	double a, b, c; //������ ���������� ������ ������������
	std::cout << "Side a is equal to: ";
	std::cin >> a; //���� � ���������� ������� a
	std::cout << "Side b is equal to: ";
	std::cin >> b; //���� � ���������� ������� b
	std::cout << "Side c is equal to: ";
	std::cin >> c; //���� � ���������� ������� c

	std::cout << std::endl; //������

	//��������� ������� ���������������� ������������
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


//11. ��������� ��������� ������� � ������ ������. ������ � 10% ���������������, ���� �����
//������� ��������� 1000 ������.

int task_11() 
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_11" << std::endl;

	double sum; //������ ���������� ����� �������
	std::cout << "Enter the amount of purchases:";
	std::cin >> sum; //���� � ���������� �����
	if (sum >= 1000) {
		double sum_new = sum * 0.9; //����� �������, ��� ������� ���� ����� ������ 1000, �� ���������� ������ 10% (*0.9)
		std::cout << "Sum = " << sum_new;
	}
	else {
		std::cout << "Sum = " << sum;
	}

	std::cout << std::endl;
	return 0;
}


//12. ���� ������������ ������������ � ��������� ������ � ����� �������� ��� �����������, ����
//��������� ��� ������������ ��������(���� - 100 = ��������� ���).

int task_12()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_12" << std::endl;

	double height; //������ ���������� �����
	double weight;//������ ���������� ����
	std::cout << "Enter your height:" << std::endl;
	std::cin >> height; // ���� � ���������� �����
	std::cout << "Enter your weight:" << std::endl;
	std::cin >> weight; // ���� � ���������� ����
	if (height - 100 == weight) { //������ �������, ��� ������� ���� - 100 ������ ���� ���� ����
		std::cout << "You're in good shape." << std::endl;
	}
	else if (height - 100 >= weight) { // ������ ���� ������� ��� ������� ���� - 100 ������ ����
		std::cout << "I would advise you to eat more" << std::endl;
	}
	else {
		std::cout << " I would advise you to lose weight" << std::endl;

	}
	return 0; // ���������
}


//13. ��������� ���������� ��� ��������� ����� � ��������� �� 1 �� 9. ����������� ������ ���������
//������������ ���� �����.��������� �������� ������������ ������ �� ��� ���.

int task_13() 
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_13" << std::endl;

	srand(time(NULL));
	int a = rand() % 9 + 1; // ������ ���������� �������� �����, �������� ������� � 1 �� 9
	int b = rand() % 9 + 1;
	std::cout << a << std::endl; //����� �� ����� ������� �����
	std::cout << b << std::endl; //����� �� ����� ������� �����
	int multy; // ������ ��������� ������������ �����
	std::cout << "Enter multiply: " << std::endl;
	std::cin >> multy; // ���� � ���������� ������������
	if (multy == a * b) { // ������ �������, ��� ������� ����� ������ ���� ����� ������������ ���� ����� 
		std::cout << "Correct" << std::endl;
	}
	else {
		std::cout << "Incorrect" << std::endl;
	} 
	return 0;

}


//14. �������� ��������� ���������� ��������� �����������, ���� �� �������� � ������������
//��������������� ������ 20 % .������ ����������������� ��������� � ���� ������(����� �� 1 �� 7).
	

int task_14() 
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_14" << std::endl;

	int day, hours, price; //������ ���������� ��� ������, ����������������� � ���������
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


//17. �������� ���������, ������� ��� ����� ����� � ��������� �� 1 �� 99 ��������� � ���� �����
//"�������" � ���������� �����.

int task_17()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Task_17" << std::endl;
	
	
	int k; //������ ���������� k 
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


//18. ���� ����������� �������������� �����. ��������, �������� �� ��� �����������.

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


//19. ���� ���������� �����. ����������: 19.1 �������� �� ������������ ��� ���� ������ ����� b
//19.2 ������ �� 7 ����� ��� ����


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

	//������ ����� �����
	int a = x % 10;
	int c = x / 10 % 10;
	int d = x / 100;

	sum = a + c + d; //����� ���� �����
	multy = a * c * d; //������������ ���� �����
	std::cout << "The product is equal to: " << multy << std::endl;
	std::cout << "The sum is equal to: " << sum << std::endl;


	//��������� ������ ������� 
	if (multy > b) {
		std::cout << "Answer_1: " << "The product is greater than the number " << b << std::endl;
	}
	else if (multy == b) {
		std::cout << "Answer_1: " << "The product is equal to the number " << b << std::endl;
	}
	else if (multy < b) {
		std::cout << "Answer_1: " << "The product is less than a number " << b << std::endl;
	}

	//��������� ������ �������
	if (sum % 7 == 0) {
		std::cout << "Answer_2: " << "The sum is a multiple of 7" << std::endl;
	}
	else {
		std::cout << "Answer_2: " << "The sum is not a multiple of 7" << std::endl;
	}

	return 0;

}


//20. ���� ������������ ������������� ����� a, b, c, d. ��������, ����� �� ������������� ��
//��������� a, b ��������� � ������������� �� ��������� c, d ���, ����� ������� ������
//�������������� ���� ����������� �������� �������.

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