
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//int main(void)
//{
	//int num;
	//num = 1;
	//printf("I an a simple");
	//printf(" computer.\n");
	//printf("My favorite number is %d because it is first.\n", num);
//}
//int main(void)
//{
	//int feet, fathoms;
	//feet = 6 * fathoms;
	//printf("There are %d feet in %d fathoms!\n", feet, fathoms);
	//printf("Yes,I said %d feet!\n", 6 * fathoms);
	//return 0;
//}

//void butler(void);
//int main(void)
//{
	//printf("I will summon the butler function.\n");
	//butler();
	//printf("Yes.Bring me some tea and writeable DVDs.\n");
		//return 0;
//}
//void butler(void)
//{
	//printf("You rang,sir?\n");
//}

//int main(void)
//{
	//int n, n2, n3;
	//n = 5;
	//n2 = n * n;
	//n3 = n2 * n;
	//printf("n=%d,n squared=%d,n cubed=%d\n", n, n2, n3);
	//return 0;
//}

//int main(void)
//{
	//printf("Liu si miao\n");
	//printf("Liu\nsi miao\n");
	//printf("Liu");
	//printf("si miao");
	//return 0;
//}


//int main(void)
//{
	//int years;
	//years = 18;
	//int days;
	//days = 365 * years;
		//printf("I'm %d years,it's mean I have lived %d days!", years, days);
		//return 0;
//}


//int jolly(void);
//int deny(void);
//int main(void)
//{
	//jolly();
	//jolly();
	//jolly();
	//deny();
	//return 0;
//}

//int jolly(void)
//{
	//printf("For he's a jolly good fellow!\n");
//}
//int deny(void)
//{
	//printf("Which nobady can deny!\n");
//}

//int br(void);
//int ic(void);
//int main(void)
//{
	//br();
	//printf(",");
	//ic();
	//printf("\n");
	//ic();
	//printf(",\n");
	//br();
	//printf("\n");
	//return 0;
//}
//int br(void)
//{
	//printf("Brazil,Russia");
//}
//int ic()
//{
	//printf("India,Chian");
//}

//int main(void)
//{
	//int toes;
	//toes = 10;
	//printf("%d\n", toes);
	//printf("%d\n", toes * 10);
	//printf("%d", toes*toes);
	//return 0;
//}


//int xiao(void);
//int main(void)
//{
	//xiao(); xiao(); xiao();
	//printf("\n");
	//xiao(); xiao();
	//printf("\n");
	//xiao();
	//return 0;
//}
//int xiao()
//{
	//printf("Smile!");
//}



	//int one_three(void);
	//int two(void);
	//int main(void)
	//{
		//printf("starting now:\n");
		//one_three();
		//printf("done!");
		//return 0;
	//}
	//int one_three(void)
	//{
		//printf("one");
		//printf("\n");
		//two();
		//printf("\n");
		//printf("three");
		//printf("\n");
		//return 0;
	//}

	//int two(void)
	//{              
	//}


//int main(void)
//{
	//float weight;
	//float value;
	//printf("Are you worth your weight in platinum?\n");
	//printf("Let's check it out.\n");
	//printf("Please enter your weight in pounds:");
	//scanf("%f", &weight);
	//printf("Your weight in platinum is worth $%.2f.\n", value);
	//printf("You are easily worth that!If platinum prices drop,\n");
	//printf("eat more to maintain your value.\n");
	//getchar();
	//getchar();
	//return 0;
//}

//int main()
//{
	//int ten = 10;
	//int two = 2;
	//printf("Doing it right:");
	//printf("%d minus %d is %d\n",ten, 2, ten - two);
	//printf("Doing it wrong:");
	//printf("%d minus %d is %d\n",ten);
	//return 0;
//}

//int main(void)
//{
	//int x = 100; 
	//printf("dec=%d;octal=%o;hex=%x\n", x, x, x);
	//printf("dec=%d;octal=%#o;hex=%#x\n", x, x, x);
	//getchar();
	//return 0;
//}


//int main()
//{
	//int i = 2147483647;
	//unsigned int j = 4294967295;
	//printf("%d %d %d\n", i, i + 1, i + 2);
	//printf("%u %u %u\n", j, j + 1, j + 2);
	//return 0;
//}

//int main(void)
//{
	//unsigned int un = 3000000000;
	//short end = 200;
	//long big = 65537;
	//long long verybig = 12345678908642;
	//printf("un=%u and not %d\n", un, un);
	//printf("end=%hd and %d\n", end, end);
	//printf("big=%1d and not %hd\n", big, big);
	//printf("verybig=%11d and not %1d\n", verybig, verybig);
	//return 0;
//}


//int main(void)
//{
	//int a, b, c;
	//printf("Give me the value of a,b,c seperated with whitrspaces:\n");
	//scanf_s("%d%d%d", &a, &b, &c);
	//printf("a=%d,b=%d,c=%d\n", a, b, c);
	//return 0;
//}

//int main(void)
//{
	//char ch;
	//printf("Please enter a character.\n");
	//scanf("%c", &ch);
	//printf("The code for %c is %d.\n", ch, ch);
	//return 0;

//}


//#include <inttypes.h>
//int main(void)
//{
	//int32_t me32;
	//me32 = 45933945;
	//printf("First,assume int32_t is int:");
	//printf("me32=%d\n", me32);
	//printf("Next,let's not make any assumptions.\n");
	//printf("Instead,use a\"macro\"from inttypes.h:");
	//printf("me32=%"PRId32"\n", me32);
	//return 0;

//

//int main(void)
//{
	//float aboat = 32000.0;
	//double abet = 2.14e9;
	//long double dip = 5.32e-5;
	//printf("%f can be written %e\n", aboat, aboat);
	//printf("And it's %a in hexadecimal,powers of 2 notation\n", aboat);
	//printf("%f can be written %e\n", abet, abet);
	//printf("%Lf can be written %Le\n", dip, dip);
	//return 0;

//}


//int main(void)
//{
	//float toobig = 3.4E38 * 100.0f;
	//printf("%e\n", toobig);
	//return 0;
//}


//int main(void)
//{
	//float a, b;
	//b = 2.0e20 + 1.0;
	//a = b - 2.0e20;
	//printf("%f\n", a);
	//return 0;
//}


//int main(void)
//{
	//printf("Type int has a size of %zd bytes.\n", sizeof(int));
	//printf("Type char has a size of %zd bytes.\n", sizeof(char));
	//printf("Type long has a size of %zd bytes.\n", sizeof(long));
	//printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
	//printf("Type double has a size of %zd bytes.\n", sizeof(double));
	//printf("Type long double has a size of %zd byted.\n", sizeof(long double));
	//return 0;
//}

//int main(void)
//{
	//int n = 4;
	//int m = 5;
	//float f = 7.0f;
	//float g = 8.0f;
	//printf("%d\n", n, m);
	//printf("%d %d %d\n", n);
	//printf("%d %d\n", f, g);
	//return 0;

//}

//int main()
//{
	//float salary;
	//printf("\aEnter your desired monthly salary:");
	//printf("$_______\b\b\b\b\b\b\b");
	//scanf("%f", &salary);
	//printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
	//printf("rGee!\n");
	//return 0;
//}

//#include <float.h>
//#include <limits.h>
//int main(void)
//{
	//int big_int = 2147473647;
	//float big_float = 3.4e38;
	//float small_float = 10.0 / 3;
	//printf("The big int data is %d\n", big_int + 1);
	//printf("The big float data is %f\n", big_float*10);
	//printf("The big float data is %f\n", small_float);
	//printf("The MAX float data is %f\n", FLT_MAX);
	//printf("The MAX int data is %d\ln", INT_MAX);
	//return 0;
//}

//int main(void)//ASCII转二进制代码
//{
	//int input;
	//printf("Enter a value of char int ASCII");
	//scanf("%d", &input);
	//printf("You input value is %d,and char is %c\n", input, input);
	//return 0;
//}


//int main(void)
//{
	//char ch = '\a';
	//printf("%c", ch);
	//printf("Starled by the sudden soud ,Sally shouted,\n");
	//printf("\"By the Great Pumpkin, what was that!\"\n");
	//return 0;
//}

//int main()
//{
	//float input;
	//printf("Enter a floating-point value:");
	//scanf("%f", &input);
	//printf("fixed-point notation:%f\n",input);
	//printf("exponrntial notation:%e\n", input);
	//printf("p notation:%a\n", input);
	//return 0;

//}
//#define SEC_PER_YEAR 3.156e7
//int main(void)
//{
	//float second, year;
	//printf("Enter how many years old you are:");
	//scanf("%f", &year);
	//second = year * SEC_PER_YEAR;
	//printf("You are:%.1f years old.\n", year);
	//printf("And you are %e seconds old,too.\n", second);
	//return 0;
//}

//#define MASS_PER_MOLE 3.0e-23
//#define MASS_PER_QUART 950
//int main(void)
//{
	//float  quart, quantity;
	//printf("Enter how many quart:");
	//scanf("%f", &quart);
	//quantity = quart * MASS_PER_QUART / MASS_PER_MOLE;
	//printf("There are %e molecule.\n", quantity);
	//return 0;
//}

//#define INCH_TO_CM 2.54
//int main(void)
//{
	//float inch, cm;
	//printf("Enter the cm of your heigh: ");
	//scanf("%f", &cm);
	//inch = cm / INCH_TO_CM;
	//printf("Hi,your are %0.2f cm,or %0.2f inch heigh\n", cm, inch);
	//return 0;

//}

//#define PINT_CUP 2
//#define CUP_OUNCE 8
//#define OUNCE_SPOON 2
//#define SPOON_TEA 3
//int main(void)
//{
	//float pint, cup, ounce, spoon, tea_spoon;
	//printf("Enter how many cpu:");
	//scanf("%f", &cup);
	//pint = cup / PINT_CUP;
	//ounce = cup * CUP_OUNCE;
	//spoon = ounce * OUNCE_SPOON;
	//tea_spoon = spoon * SPOON_TEA;
	//printf("%.1f cup eqals,%.1f pint,%.1f ounce,%.1f spoon,%.1f tea_spoon.\n", cup, pint, ounce, spoon, tea_spoon);
	//return 0;
//}



//#include <string.h>
//#define DENSITY 62.4
//int main(void)
//{
	//float weight, volume;
	//int size, letters;
	//char name[40];
	//printf("Hi!What's your first name?\n");
	//scanf("%s", name);
	//printf("%s,what's your weight in pounds?\n", name);
	//scanf("%f", &weight);
	//size = sizeof(name);
	//letters = strlen(name);
	//volume = weight / DENSITY;
	//printf("Well,%s,your volume is %2.2f cubic feet.\n",
		//name, volume);
	//printf("Also,your first name has %d letters,\n",
		//letters);
	//printf("and we have %d bytes to store it.\n", size);
	//return 0;
//}


//#define PRAISE "You are an extraordinary being."
//int main(void)
//{
	//char name[40];
	//printf("What's your name?");
	//scanf("%s", name);
	//printf("Hello,%s. %s\n", name, PRAISE);
	//return 0;
//}

//#include <stdio.h>
//#define PRAISE "You are an extraordinary being."
//int main(void)
//{
	//char name[40];
	//printf("What's your name?");
	//scanf("%s", name);
	//printf("Hello,%s. %s\n", name, PRAISE);
	//printf("The phrase of praise has %zd letters",
		//strlen(PRAISE));
	//printf("and occupies %zd memory cells.\n", sizeof PRAISE);
	//return 0;

//}

// main(void)
//{
	//float area, circum, radius;
	//printf("What is the radius of your pizza?\n");
	//scanf("%f", &radius);
	//area = PI * radius * radius;
	//circum = 2.0 * PI * radius;
	//printf("Your basic pizza parameters are as follows:\n");
	//printf("circumference=%1.2f,area=%1.2f\n", circum, area);
	//return 0;
//}

//#include <limits.h>
//#include <float.h>
//int main(void)
//{
	//printf("Some number limits for this systen:\n");
	//printf("Biggedt int:%d\n", INT_MAX);
	//printf("Smallest long long:%lld\n", LLONG_MIN);
	//printf("One byte=%d bits on this system.\n", CHAR_BIT);
	//printf("Largrst foublr:%e\n", DBL_MAX);
	//printf("Smallest normal float:%e\n", FLT_MIN);
	//printf("float precision=%d digits\n", FLT_DIG);
	//printf("float epsilon=%e\n", FLT_EPSILON);
	//return 0;

//}

//#define PI 3.141593
//int main(void)
//{
	//int number = 7;
	//float pies = 12.75;
	//int cost = 7800;
	//printf("The %d contestants ate %f berry pies.\n", number,
		//pies);
	//printf("The value of pi is %f.\n", PI);
	//printf("Farewell!thou art too dear foe my possessing,\n");
	//printf("%c%d\n", '$', 2 * cost);
	//return 0;
//}


//#define PAGES 959
//int main(void)
//{
	//printf("*%d*\n", PAGES);
	//printf("*%2d*\n", PAGES);
	//printf("*%10d*\n", PAGES);
	//printf("*%-10d*\n", PAGES);
	//getchar();
	//return 0;
//}

//int main(void)
//{
	//const double RENT = 3852.99;
	//printf("*%f*\n", RENT);
	//printf("*%e*\n", RENT);
	//printf("*%4.2f*\n", RENT);
	//printf("*%3.1f*\n", RENT);
	//printf("*%10.3f*\n", RENT);
	//printf("*%10.3E*\n", RENT);
	//printf("*%+4.2f*\n", RENT);
	//printf("*%010.2f*\n", RENT);
	//return 0;
//}

//int main(void)
//{
	//printf("%x %X %#x\n", 31, 31, 31);
	//printf("**%d**% d**% d**\n", 42, 42, -42);
	//printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);
	//return 0;
//}

//#define BLURB "Authentic imitation!"
//int main(void)
//{
    //printf("[%2s]\n", BLURB);
	//printf("[%-24s]\n", BLURB);
	//printf("[%24.5s]\n", BLURB);
	//printf("[%-24.5s]\n", BLURB);
	//return 0;
//}

//int main(void)
//{
	//char name[40];
	//printf("What's your name:");
	//scanf("%s", name);
	//float cash;
	//cash = 666.66;
	//printf("The %s family just may be $%.2f dollars richer!\n", name, cash);
//}

//#define PAGES 336
//#define WORDS 65618
//int main(void)
//{
	//short num = PAGES;
	//short mnum = -PAGES;
	//printf("num as short and unsigned short: %hd %hu\n ", num, num);
	//printf("-num as short and unsigned short: %hd %hu\n", mnum,mnum);
	//printf("num as int and char: %d %c\n", num, num);
	//printf("WORDS as int,short,and char: %d %hd %c\n", WORDS, WORDS, WORDS);
	//return 0;
//}

//int main(void)
//{
	//float n1 = 3.0;
	//double n2 = 3.0;
	//long n3 = 2000000000;
	//long n4 = 1234567890;
	//printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
	//printf("%1d %1d\n", n3, n4);
	//printf("%1d %1d %1d %1d\n", n1, n2, n3, n4);
	//return 0;

//}

//int main(void)
//{
	//int bph2o = 212;
	//int rv;
	//rv = printf("%d F is water's boiling point.\n", bph2o);
	//printf("The printf() function printed %d characters.\n",
		//rv);
	//return 0;

  //}

//int main(void)
//{
	//int age;
	//float assets;
	//char pet[30];
	//printf("Enter your age,assets,and favorite pet.\n");
	//scanf("%d %f", &age, &assets);
	//scanf("%s", pet);
	//printf("%d $%.2f %s\n", age, assets, pet);
	//return 0;
//}

//int main(void)
//{
	//int num1, num2;
	//printf("请输入两个整数：");
	//scanf("%d %d", &num1, &num2);
	//if (num1 > num2) {
		//printf("max=%d\n", num1);
	//}
	//else {
		//printf("max=%d\n", num2);
	//}
	//return 0;
//}

//int main(void)
//{
	//unsigned width, precision;
	//int number = 256;
	//double weight = 242.5;
	//printf("Enter a field width:\n");
	//scanf("%d", &width);
	//printf("The number is :%*d:\n", width, number);
	//printf("Now enter a width and a precision:\n");
	//scanf("%d %d", &width, &precision);
	//printf("Weight=%*.*f\n", width, precision, weight);
	//printf("Done!\n");
	//return 0;
//}

//int main(void)
//{
	//int n;
	//printf("Please enter three integers:\n");
	//scanf("%*d %*d %d", &n);
	//printf("The last integer was %d\n", n);
	//return 0;
//}

//int main(void)
//{

	//printf("He sold the painting for $%2.2f.\n", 2.345e2);
	//return 0;
//}

//int main(void)
//{
	//printf("%c%c%c",'H',105,'\41');
	//return 0;
//}

//#define Q "His Hamlet was funny without being vulgar."
//int main(void)
//{
	//printf("\"%s\"\nhas %d characters.\n", Q, strlen(Q));
	//return 0;
//}

//#define	B "booboo"
//#define X 10
//int main(void)
//{
	//int age;
	//char name[40];
	//int xp;
	//printf("Please enter your first name:");
	//scanf("%s", name);
	//printf("All right,%s,what's your age?\n", name);
	//scanf("%d", &age);
	//xp = age + X;
	//printf("That's a %s!You must be at least %d.\n", B, xp);
	//return 0;

//}

//#define BOOK "War and Peace"
//int main(void)
//{
	//float cost = 12.99;
	//float percent = 80.0;
	//printf("This copy of %s sells for $%2.2f.\nThat is %2.0f%% of list.",BOOK,cost,percent);
	//return 0;
//}

//int main(void)
//{
	//char name[40];
	//char surname[40];
	//printf("Please input your first name:");
	//scanf("%s", name);
	//printf("Please input your surname:");
	//scanf("%s", surname);
	//printf("Hello,%s,%s", name, surname);
	//return 0;
//}

//int main(void)
//{
	//printf("Please input your name:");
	//char name[40];
	//scanf("%s", name);
	//printf("Hello \"%s\"\n", name);
	//printf("Hello \"%-20s\"\n", name);
	//printf("Hello \"%+20s\"\n", name);
	//int width;
	//width = printf("\"%s\"\n");
	//width -= 4;
	//printf("Hello \"%*s\"", (width + 3), name);
	//return 0;

//}

//int main() {
	//char name[100]; // 假设名字不会超过100个字符
	//printf("请输入你的名字：");
	//scanf("%s", name);

	//int width = strlen(name) + 3;
	//printf("%*s\n", width, name);

	//return 0;
//}


//int main(void)
//{
	//float input;
	//printf("Please enter a float number:");
	//scanf("%f", &input);
	//printf("The input is %.1f or %.1e\n", input, input);
	//printf("The input is %+.3f or %.3E", input, input);
	//return 0;
//}

//int main(void)
//{
	//float cm;
	//float m;
	//char name[40];
	//printf("Please enter your name:");
	//scanf("%s", name);
	//printf("Hi %s,how tall are you?", name);
	//scanf("%f", &cm);
	//printf("%s,you are %.3f meter tall ", name,cm/100);
	//return 0;
//}

//int main(void)
//{
	//float speed, size, time;
	//printf("Please input the net speed:");
	//scanf("%f", &speed);
	//printf("Please input the file size:");
	//scanf("%f", &size);
	//time = size * 8 / speed;
	//printf("At %.2f megabits per second,a file of %.2f megabytes download in %.2f sconds.", size, speed, time);
	//return 0;
//}

//int main(void)
//{
	//char name[40];
	//char surname[40];
	//int wname;
	//int wsurname;
	//printf("Please input your first name:");
	//scanf("%s", name);
	//printf("Please input your last name:");
	//scanf("%s", surname);
	//wname = printf("%s", name);
	//printf("");
	//wsurname = printf("%s", surname);
	//printf("\n%*d %*d", wname, wname, wsurname, wsurname);
//}

//#include <string.h>

//int main() {
	//char first_name[100];
	//char last_name[100];

//	printf("请输入您的名：");
	//scanf("%s", first_name);
//
	//printf("请输入您的姓：");
	//scanf("%s", last_name);

	// 计算名和姓的字母数
//	int first_name_length = strlen(first_name);
	//int last_name_length = strlen(last_name);

	// 打印名和姓，并与字母数对齐
	//printf("%s %s\n", first_name, last_name);
	//printf("%-*d %-*d\n", last_name_length, last_name_length, first_name_length, first_name_length);

	//return 0;
//}


//#include <float.h>
//int main(void)
//{
	//double d_third=1.0/3.0;
	//float f_third=1.0/3.0;
	//printf("%.6f\n", f_third);
	//printf("%.12f\n", f_third);
	//printf("%.16f\n", f_third);
	//printf("%.6lf\n", d_third);
	//printf("%.12lf\n", d_third);
	//printf("%.16lf\n", d_third);
	//printf("The FLT_DIG in float.h is %d\n", FLT_DIG);
	//printf("The DBL_DIG in float,h is %d\n", DBL_DIG);
	//return 0;
//}


//#define GALLON_TO_LITRE 3.785
//#define MILE_TO_KM 1.609

//int main(void)
//{
	//float oil, range;
	//printf("请输入你驾驶了多少英里：");
	//scanf("%f", &range);
	//printf("请输入你耗了多少油：");
	//scanf("%f", &oil);
	//printf("单位燃料的行程=%.1f\n", range / oil);
	//printf("单位行程的燃料=%.1f", (oil * GALLON_TO_LITRE) / range * (MILE_TO_KM));
	//return 0;
//}



//#define ADJUST 7.31
//int main(void)
//{
	//const double SCALE = 0.333;
	//double shoe, foot;
	//shoe = 9.0;
	//foot = SCALE * shoe + ADJUST;
	//printf("Shoe size (men's) foot length\n");
	//printf("%10.1f %15.2f inches\n", shoe, foot);
	//return 0;
//}


//int main(void)
//{
	//const double SCALE = 0.333;
	//double shoe, foot;
	//printf("Shoe size (men's) foot length\n");
	//shoe = 3.0;
	//while (shoe < 18.5)
	//{
		//foot = SCALE * shoe + ADJUST;
		//printf("%10.1f %15.2f inches\n", shoe, foot);
		//shoe = shoe + 1.0;
	//}
	//printf("If the shoe fits,wear it.\n");
	//return 0;
//}


//int main(void)
//{
	//int jane, tarzan, cheeta;
	//cheeta = tarzan = jane = 68;
	//printf("                    cheeta   tarzan   jane\n");
	//printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);
	//return 0;
//}

//int main(void)
//{
	//int num = 1;
	//while (num < 21)
	//{
		//printf("%4d %6d\n", num, num * num);
		//num = num + 1;
	//}
	//return 0;
//}


//#define SQUARES 64
//int main(void)
//{
	//const double CROP = 2E16;
	//double current, total;
	//int count = 1;
	//printf("square    grains       total        ");
	//printf("fraction of \n");
	//printf("          added        grains       ");
	//printf("world total\n");
	//total = current = 1.0;
	//printf("%4d %13.2e %12.2e %12.2e\n", count, current,
		//total, total / CROP);
	//while (count < SQUARES)
	//{
		//count = count + 1;
		//current = 2.0 * current;
		//total = total + current;
		//printf("%4d %13.2e %12.2e %12.2e\n", count, current,
			//total, total / CROP);
	//}
	//printf("That's all.\n");
	//return 0;
//}

//int main(void)
//{
	//printf("integer division:5/4 is %d \n", 5 / 4);
	//printf("integer division:6/3 is %d \n", 6 / 3);
	//printf("integer division:7/4 is %d \n", 7 / 4);
	//printf("floating division:7./4. is %1.2f \n", 7. / 4.);
	//printf("mixed division: 7./4. is %1.2f \n", 7. / 4.);
	//return 0;
  //}

//int main(void)
//{
	//int n = 0;
	//size_t intsize;
	//intsize = sizeof(int);
	//printf("n=%d, n has %zd bytrs; all ints have %zd bytes.\n",
		//n, sizeof n, intsize);
	//return 0;


	 //}


//时间  单位转换
//#define SEC_PER_MIN 60
//#define MIN_PER_HOU 60
//int main(void)
//{
	//int sec, min, hour ,left_1,left_2;
	//printf("Convert seconds to minutes and seconds!\n");
	//printf("Enter the number of seconds (<=0 to quit):\n");
	//scanf("%d", &sec);
	//while (sec > 0)
	//{
		//min = sec / SEC_PER_MIN;
		//hour = min / SEC_PER_MIN;
		//left_1 = sec % SEC_PER_MIN;
		//left_2 = min % MIN_PER_HOU;
		//printf("%d seconds is %d hour, %d minutes,%d second.\n", sec,
			//hour, left_2, left_1);
		//printf("Enter next value (<=0 to quit):\n");
		//scanf("%d", &sec);
	//}
	//printf("Done!\n");
	//return 0;

//}

//int main(void)
//{
	//int ultra = 0, super = 0;
	//while (super < 5)
	//{
		//super++;
		//++ultra;
		//printf("super=%d,ultra=%d\n", super, ultra);
	//}
	//return 0;
//}

//int main(void)
//{
	//int a = 1, b = 1;
	//int a_post, pre_b;
	//a_post = a++;
	//pre_b = ++b;
	//printf("a  a_post     b   pre_b \n");
	//printf("%1d   %5d %5d   %5d\n", a, a_post, b, pre_b);
	//return 0;

//}

//#define MAX 100
//int main(void)
//{
	//int count = MAX + 1;
	//while (--count > 0) {
		//printf("%d bottles of spring water on the wall,"
			//"%d bottles of spring water!\n", count, count);
		//printf("Take one down and pass it around,\n");
		//printf("%d bottles of spring water!\n\n", count - 1);
	//}
	//return 0;
//}

//int main(void)
//{
	//int count, sum;
	//count = 0;
	//sum = 0;
	//while (count++ < 20) {
		//sum = sum + count;
		//printf("sum=%d\n", sum);
	//}
	//return 0;
//}

//int main(void)
//{
	//char ch;
	//int i;
	//float f1;

	//f1 = i = ch = 'C';
	//printf("ch=%c,i=%d,f1=%2.2f\n", ch, i, f1);
	//ch = ch + 1;
	//i = f1 + 2 * ch;
	//f1 = 2.0 * ch + i;
	//printf("ch=%c,i=%d,f1=%2.2f\n", ch, i, f1);
	//ch = 1107;
	//printf("Now ch=%c\n", ch);
	//ch = 80.89;
	//printf("Now ch=%c\n", ch);
	//return 0;
//}


//void pound(int n);
//int main(void)
//{
	//int times = 5;
	//char ch = '!';
	//float f = 6.0;
	//pound(times);
	//pound(ch);
	//pound(f);
	//return 0;
//}

//void pound(int n)
//{

	//while (n-- > 0)
	
		//printf("#");
		//printf("\n");
	
//}

//const int S_PER_M = 60;
//const int S_PER_H = 3600;
//const double M_PER_K = 0.62137;
//int main(void)
//{
	//double distk, distm;
	//double rate;
	//int min, sec;
	//int time;
	//double mtime;
	//int mmin, msec;

	//printf("This progam converst your time for a metric race\n");
	//printf("to a time for running a mile and to your average\n");
	//printf("speed in miles per hour.\n");
	//printf("Please enter,in kilometers,the distance run.\n");
	//scanf("%lf", &distk);
	//printf("Next enter the time in minutes and seconds.\n");
	//printf("Begin by entering the minutes.\n");
	//scanf("%d", &min);
	//printf("Now enter the seconds.\n");
	//scanf("%d", &sec);

	//time = S_PER_M * min + sec;
	//distm = M_PER_K * distk;
	//rate = distm / time * S_PER_H;
	//mtime = (double)time / distm;
	//mmin = (int)mtime / S_PER_M;
	//msec = (int)mtime / S_PER_M;
	
	//printf("You ran %1.2f km (%1.2f miles) in %d min, %d sec.\n",
		//distk, distm, min, sec);
	//printf("That pace corresponds to running a mile in %d min,",
		//mmin);
	//printf("%d sec.\nYour average speed was %1.2f mph.\n", msec,
		//rate);
	//return 0;

//}

//int main(void)
//{
	//int i = 1;
	//float n;
	//printf("Watch out!Here come a bunch of fractions!\n");
	//while (i++ < 30) {
		//n = 1.0 / i;
		//printf("%f\n", n);
	//}
	//printf("That's all,folks!\n");
	//return 0;
	  //}

//int main(int argc, char*argv[])
//{
	//char c1, c2;
	//int diff;
	//float num;

	//c1 = 'S';
	//c2 = 'O';
	//diff = c1 - c2;
	//num = diff;
	//printf("%c%c%c:%d %3.2f\n", c1, c2, c1, diff, num);
	//return 0;
//}


//#define END 'g'
//int main(int argc, char* argv[]) {
	//char n = 'a' - 1;
	//while (n++ < END) {
		//printf("%5c", n);
		//printf("\n");
	//}
	//return 0;
//}

//int main(void)
//{
	//int x = 100;
	//while (x++ < 103)
		//printf("%4d\n", x);
	//printf("%4d\n", x);
	//return 0;
//}


//int main(void)
//{
	//char ch = 's';
	//while (ch < 'w') {
		//printf("%c",ch);
		//ch++;

	//}
	//printf("%c\n", ch);
	//return 0;

//}





























