#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//#define MESG "COMPUTER BYTE DOG"
//int main(int argc, char* argv[]) {
	//int n = 0;
	//while (n < 5) {
		//printf("%s\n", MESG);
		//n++;
		//printf("That's all.\n");
	//}
	//return 0;
//}

//#define HOUR_MIN 60 
//int main(void)
//{
	//int min, hours,last;
	//printf("Please input time in min:");
	//scanf("%d", &min);
	//while (min > 0) {
		//hours = min / HOUR_MIN;
		//last = min % HOUR_MIN;
		//printf("%d mins is same to %d hours and %d mins\n", min, hours, last);
		//printf("Please input time in min:");
			//scanf("%d", &min);
	//}
	//return 0;
//}

//mine
//int main(void)
//{
	//int num,input;
	//printf("请输入一个整数：");
	//scanf("%d", &input);
	//num = input;
	//while (num++ <= input + 10) {
		//printf("%d ", num-1);


	//}
	//return 0;
//}

//anwser

//int main(int argc, char* argv[]) {
	//int counter, i = 0;
	//printf("PRINT COUNTINUE 10 NUMBERS!\n");
	//printf("PLEASE INPUT THE START NUMBER:");
	//scanf("%d", &counter);
	//while (i++ < 11) {
		//printf("%d \n", counter++);
	//}

	//printf("PROGRAM EXIT!\n");
	//return 0;
//}

//Chat GPT
//int main() {
	//int num;

	//printf("请输入一个整数：");
	//scanf("%d", &num);

	//printf("从%d到%d的整数是：\n", num, num + 10);

	//for (int i = num; i <= num + 10; i++) {
		//printf("%d\n", i);
	//}

	//return 0;
//}

//int main() {
	//int num, end;

	//printf("请输入一个整数：");
	//scanf("%d", &num);

	//end = num + 10;

	//printf("从%d到%d的整数是：\n", num, end);

	//while (num <= end) {
		//printf("%d\n", num);
		//num++;
	//}

	//return 0;
//}


//#define WEEK_PER_DAY 7
//int main(void)
//{
	//long days, weeks, input;
	//printf("请输入天数(小于0时自动退出）:");
	//scanf("%ld", &input);
	//while (input > 0) {
		//weeks = input / WEEK_PER_DAY;
		//days = input % WEEK_PER_DAY;
		//printf("%ld天等于%ld星期%ld天\n", input, weeks, days);
		//printf("请继续输入天数（小于0时自动退出）：");
		//scanf("%ld", &input);
	//}
	//return 0;
//}


//#define FEET_TO_CM 30.48
//#define INCH_TO_CM 2.54
//int main(int argc, char* argv[])
//{
	//float cm, inch, feet;
	//printf("请输入你的身高(单位cm)：");
	//scanf("%f", &cm);
	//feet = cm / FEET_TO_CM;
	//inch = cm / INCH_TO_CM;
	//while (cm > 0) {
		//printf("%.2f cm= %.2f feet= %.2f inch\n", cm, feet, inch);
		//printf("请输入你的身高：");
		//scanf("%f", &cm);


	//}

	//return 0;





//}


//int main(int argc,char*argv[])
//{
	//printf("请输入你工作了多少天：");
	//int days, money=0;
	//scanf("%d", &days);
	//while (days > 0) {
		//money = money + days--;

	//}
	//printf("你一共赚了：%d", money);
	//return 0;


//}

//#include <stdio.h>
//int main(void)
//{
	//int num1, num2;
	//printf("请输入两个整数：");
	//scanf("%d %d", &num1, &num2);
	//if (num1 < num2) {
		//printf("max=%d", num2);
	//}
	//else {
		//printf("max=%d", num1);
	//}
	//return 0;
//}


//nt main(int argc, char* argv[])
//{
	//printf("我将计算平方和：\n");
	//long a=0, b ;
	//scanf("%d", &b);
	//while (b > 0) {
		//a = a + b*b;//以b为平方关系算，避免多次相加
		//b--;

	//}
	//printf("从0到%d的平方和为%d", b, a);
	//return 0;



//}

//double cubic(double n);
//int main(int argc, char* argv[])
//{
	//double input;
	//printf("Enter the double datum to calc cubic:");
	//scanf("%lf", &input);
	//cubic(input);
	//printf("PROGRAM EXIT!\n");
	//return 0;
//}
//double cubic(double n) {
	//double t = n * n * n;
	//printf("The %lg's cubic is %lg !\n",n,t);
	//return t;
//}

//int main(void)
//{
	//printf("This program computes moduli.\n");
	//printf("Enter an integer to server as the second operand:");
	//int first, second,output;
	//scanf("%d", &second);
	//printf("Now enter the first operand:");
	//scanf("%d", &first);
	//while (first > 0) {
		//output = first % second;
		//printf("%d %% %d is %d\n", first, second, output);
		//printf("Enter next number for first operand(<=0 to quit):");
		//scanf("%d", &first);
	//}
	//printf("Done!");
	//return 0;
//}


//int Temperatures(double fahrenheit);
//int main(void) {
	//double input;
	//printf("This program convert fahrenheit to celsius and kelvin.\n");
	//printf("Enter a fahrenheit to start:");
	//while (scanf("%lf", &input) == 1) {
		//Temperatures(input);
		//printf("Enter next fahrenheit!(q to quit):");
	//}
	//printf("Done!\n");
	//return 0;
//}
//int Temperatures(double fahrenheit) {
	//const double F_TO_C = -32;
	//const double C_TO_K = 273.16;
	//double celsius, kelvin;
	//celsius = 5.0 / 9.0 * (fahrenheit + F_TO_C);
	//kelvin = celsius + C_TO_K;
	//printf("%.2f fahrenheit,equal %.2f celsius,and %.2f kelvin\n", fahrenheit, celsius, kelvin);
	//return 0;
//}

//int main(void)       
//{
	//long num;
	//long sum = 0L;
	//int status;
	
	//printf("Please enter an integer to be summed");
	//printf("(q to quit):");
	//status = scanf("%ld", &num);
	//while (status == 1) {
		//sum = sum + num;
		//printf("Please enter next integer (q to quit):");
		//status = scanf("%ld", &num);
	//}
	//printf("Those integers sum to %ld.\n", sum);

	//return 0;
//}

     
//int main(void)
//{
	//long num;
	//long sum = 1;
	//int status;

	//printf("请输入一个数字:");
	//printf("输入q将退出");
	//status = scanf("%ld", &num);
	//while (status == 1) {
		//sum = sum * num;
		//printf("请输入下一个数字:");
		//status = scanf("%ld", &num);
	//}
	//printf("这些数相乘等于%ld", sum);
	//return 0;
//}

//#include <math.h>
//int main(void)
//{
	//const double ANSWER = 3.14159;
	//double response;

	//printf("What is the value of pi?\n");
	//scanf("%lf", &response);
	//while (fabs(response - ANSWER) > 0.0001)
	//{
		//printf("Try again!\n");
		//scanf("%lf", &response);
	//}
	//printf("Close enough!\n");

	//return 0;

//}


//int main(void)
//{
	//int true_val, false_val;

	//true_val = (10 > 2);
	//false_val = (10 == 2);
	//printf("true=%d;flase=%d\n", true_val, false_val);

	//return 0;
//}

//int main(void)
//{
	//int n = 3;

	//while (n)
		//printf("%2d is true\n", n--);
	//printf("%2d is false\n", n);

	//n = -3;
	//while (n)
		//printf("%2d is true\n", n++);
	//printf("%2d is false\n", n);

	//return 0;
//}

//int main(void)
//{
	//long num;
	//long sum = 0L;
	//int status;
	//printf("Please enter an integer to br summed");
	//printf("(q to quit):");
	//status = scanf("%ld", &num);
	//while (status == 1)
	//{
		//sum = sum + num;
		//printf("Please enter next integer (q to quit):\n");
		//status = scanf("%ld", &num);
	//}
	//printf("Those integers sum to %ld.\n", sum);
	//return 0;
//}

//int main(void)
//{
	//long num;
	//long sum = 0L;
	//_Bool input_is_good;

	//printf("Please enter an integer to be summed");
	//printf("(q to quit):");
	//input_is_good = (scanf("%ld", &num) == 1);

	//while (input_is_good)
	//{
		//sum = sum + num;
		//printf("Please enter next integer (q to quit):");
		//input_is_good = (scanf("%ld", &num) == 1);

	//}
	//printf("Those integers sum to %ld.\n", sum);

	//return 0;

//}
     
//int main(void)
//{
	//const int NUMBER = 22;
	//int count;
	//for (count = 1; count <= NUMBER; count++)
		//printf("Be my Valentine!\n");
	//return 0;
//}


//int main(void)
//{
	//const int NUMBER = 22;
	//int count = 1;

	//while (count <= NUMBER)
	//{
		//printf("Be my Valentine!\n");
		//count++;
	//}
	//return 0;
//}

//int main(void)
//{
	//int num;
	//printf("    n  n cubed\n");
	//for (num = 1; num <= 6; num++)
		//printf("%5d %5d\n", num, num * num * num);
	//return 0;
//}


//int main(void)
//{
	//int secs;
	//for (secs = 5; secs > 0; secs--)
		//printf("%d seconds!\n", secs);
	//printf("We have ignition!\n");
	//return 0;

//}


//int main(void)
//{
	//int n;
	//for (n = 2; n < 60; n = n + 13)
		//printf("%d\n", n);
	//return 0;
//}


//int main(void)
//{
	//char ch;
	//for (ch = 'a'; ch <= 'z'; ch++)
		//printf("The ASCII value for %c is %d.\n", ch, ch);
	//return 0;
//}

  
//int main(void)
//{
	//const int FIRST_OZ = 46;
	//const int NEXT_OZ = 20;
	//int ounces, cost;

	//printf("    ounces   cost\n");
	//for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
		//printf("%5d        $%4.2f\n", ounces, cost / 100.0);
	//return 0;
//}

//int main(void)
//{
	//int t_ct;
	//double time, power_of_2;
	//int limit; 

	//printf("Enter the number of terms you want:");
	//scanf("%d", &limit);
	//for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit;
		//t_ct++, power_of_2 *= 2.0)
	//{
		//time += 1.0 / power_of_2;
		//printf("time=%f when terms=%d.\n", time, t_ct);
	//}
	//return 0;
//}


//#define ROWS 6
//#define CHARS 10
//int main(void)
//{
	//int row;
	//char ch;

	//for (row = 0; row < ROWS; row++)
	//{
		//for (ch = 'A'; ch < ('A' + CHARS); ch++)
			//printf("%c", ch);
		//printf("\n");
	//}
	//return 0;
//}



//#define SIZE 10
//#define PAR 72
//int main(void)
//{
	//int index, score[SIZE];
	//int sum = 0;
	//float average;

	//printf("Enter %d golf scores:\n", SIZE);
	//for (index = 0; index < SIZE; index++)
		//scanf("%d", &score[index]);
	//printf("The scores read in are as follows:\n");
	//for (index = 0; index < SIZE; index++)
		//	printf("%5d", score[index]);
	//printf("\n");
	//for (index = 0; index < SIZE; index++)
		//sum += score[index];
	//average = (float)sum / SIZE;
	//printf("Sum of scores=%d,average=%.2f\n", sum, average);
	//printf("That's a handicap of %.0f.\n", average - PAR);
	//return 0;
//}



//double power(double n, int p);

//int main(void)
//{
	//double x, xpow;
	//int exp;

	//printf("Enter a number and the positive integer power to which\n");
	//printf("the number will be raised.Enter q to quit.\n");
	//while (scanf("%lf%d", &x, &exp) == 2)
	//{
		//xpow = power(x, exp);
		//printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		//printf("Enter next pair of numbers or qu to quit.\n");
	//}
	//printf("Hope you enjoyed this power trip--bye!\n");
	//return 0;
//}
//double power(double n, int p)
//{
	//double pow = 1;
	//int i;
	//for (i = 1; i <= p; i++)
		//pow *= n;
	//return pow;
//}


//int main(void)
//{
	//int quack = 64;
	//float anwser;
	//anwser = quack /= 8;
	//printf("%f", anwser);
	//return 0;

//}


//int main(void)
//{
	//double value;
	//for (value = 36; value > 0; value /= 2)
		//printf("%3d", value);
	//return 0;
//}

//int main(void)
//{
	//int i, j, list[11];
	//list[0] = 1;
	//for (i = 1; i <= 10; i++)
	//{
		//list[i] = list[i - 1] + 2;
		//for (j = 1; j <= i; j++)
		//{
			//printf("%d", list[j]);
		//}

		//printf("\n");
	//}
	//return 0;
//}









//int main() {
	//printf("九九立方表:\n");

	//for (int i = 1; i <= 9; i++) {
		//for (int j = 1; j <= i; j++) {
			//for (int k = 1; k <= 9; k++)
			//{
				//printf(" %d*%d*%d=%.3d ", i, j, k,i*j*k);
			//}
			//printf("\n");
		//}		
	//}

	//return 0;
//}


//int main(void)
//{
	//char ch=36;
	//int i, j;
	//for (i = 1; i <= 4; i++)
	//{
		//for (j = 1; j <= 8; j++)
			//printf("%c", ch);
		//printf("\n");
	//}
	//return 0;
//}


//int main(void)
//{
	//int i = 0;
	//while (++i < 4)
		//printf("Hi!");
	//do
		//printf("Bye!");
	//while (i++ < 8);
	//return 0;

//}



//int main(void)
//{
	//int i;
	//char ch;
	//for (i = 0, ch = 'A'; i < 4; i++, ch += 2 * i)
		//printf("%c", ch);
	//return 0;
//}


//int main(void)
//{
	//int i;
	//long long n = 1;
	//for (i = 1; i < 32; i++)
	//{
		//n *= 2;
		//printf("%lld\n", n);
	//}
	//return 0;
//}


//int main(void)
//{
	//char ch;
	//scanf("%c", &ch);
	//while (ch != 'g')
	//{
		//printf("%c", ch);
		//scanf("%c", &ch);

	//}
	//return 0;
//}


//int main(void)
//{
	//char ch;
	//do{
		//scanf("%c", &ch);
		//printf("%c", ch);
	//} while (ch != 'g');
	//return 0;
//}


//int main(void)
//{
	//char ch;
	//scanf("%c", &ch);
	//for (ch = '$'; ch != 'g'; scanf("%c", &ch))
		//printf("%c", ch);
	//return 0;

//}


//int main(void)
//{
	//int n, m;

	//n = 30;
	//while (++n <= 33)
		//printf("%d|", n);
	
	//n = 30;
	//do
		//printf("%d|", n);
	//while (++n <= 33);

	//printf("\n***\n");

	//for (n = 1; n * n < 200; n += 4)
		//printf("%d\n", n);

	//printf("\n***\n");

	//for (n = 2, m = 6; n < m; n *= 2, m += 2)
		//printf("%d %d\n", n, m);

	//printf("\n***\n");

	//for (n = 5; n > 0; n--)
	//{
		//for (m = 0; m <= n; m++)
			//printf("=");
		//printf("\n");
	//}
	//return 0;
//}


//int main(void)
//{
	//int k;
	//for (k = 1, printf("%d:Hi!\n", k); printf("k=%d\n", k), k * k < 26; k += 2, printf("Now k is %d\n", k))
		//printf("k is %d in the loop\n", k);
	//return 0;
//}


//int main(void)
//{
	//int ch[26];
	//char i;
	//for (i = 97; i <= 122; i++)
	//{
		//ch[i - 1] = i;
		//printf("%c\n", ch[i - 1]);

	//}

	//return 0;
//}


//int main(void)
//{
	//int i, j;
	//for (i = 1; i <= 5; i++)
	//{
		//for (j = 1; j <= i; j++)
			//printf("$");
		//printf("\n");
	//}

	//return 0;
//}


//int main(void)
//{
	//int ch[26];
	//char i;
	//int j,k;
	//for (j = 1; j <= 6; j++)
	//{		
	  //      for (i = 70; i > 70-j; i--)
		//	{
			//	ch[i - 1] = i;
				//	printf("%c", ch[i - 1]);
			//}
			//printf("\n");
//	}
	//return 0;
//}

//int main(void)
//{
	//int ch[26];
	//char i;
	//int j, k;

	//for (j = 0; j < 6; j++)
	//{
		//for (i = 'F'; i >= 'F' - j; i--)
		//{
			//ch[i - 'A'] = i; // 修改索引起始位置
			//printf("%c", ch[i - 'A']);
		//}
		//printf("\n");
	//}

	//return 0;
//}

//int main(void)
//{
	//int i, j;
	//char c = 'A';

	//for (i = 1; i <= 6; i++)
	//{
		//for (j = 1; j <= i; j++, c++)
			//printf("%c", c);
		//printf("\n");
	//}

	//return 0;
//}


//int main(void)
//{
	//int i, j, num;
	//char c;
	//printf("Enter the core char you want to print(A...Z):");
	//scanf("%c", &c);
	//char ch = 'A';
	//num = c - 'A' + 1;
	//for (i = 1; i <= num; i++)
	//{
		//for (j = 0; j < num - i; j++)
			//printf(" ");
		//for (ch = 'A'; j < num; j++)
			//printf("%c", ch++);
		//for (j = 1, ch -= 2; j < i; j++, ch--)
			//printf("%c", ch);
		//printf("\n");
	//}
	//return 0;

//}
 
//int main(void)
//{
	//int a = 2, b = 1, c = 1;
	//if (a = b + c)  printf("*** a=%d\n", a); 
	//else  printf("$$$ a=%d\n", a); 
	//return 0;
//}

//int main(void)
//{
	//int a, b, c;
	//scanf("%d %d %d", &a, &b, & c);
	//switch (b)
	//{
	//case 12:
	//case 10:
	//case 8:
	//case 7:
	//case 5:
	//case 3:
	//case 1:if (c < 1 || c>31) printf("day is error.\n");
	//case 4:
	//case 6:
	//case 9:
	//case 11:if (c < 1 || c>30) printf("day is error.\n");
	//case 2:if (c < 1 || c>29 || c == 29 && a % 4 != 0) printf("day is error.\n");
		//if (c == 29 && a % 100 == 0 && a % 400 != 0) printf("day is error.\n");
	//default:printf("month is error.\n");
	//}



//}



//int main(void)
//{
	//int year, month, day,century;
	//int week = 0;
	//printf("请输入年月日,我将得出他是星期几：\n");
	//scanf("%d %d %d", &year, &month, &day);
	//century = year / 100+1;
	//if (year < 1900) {
		//printf("year is error");
		//return 0;
	//}

	//if (month < 1 || month>12) {
		//printf("month is error");
		//return 0;


	//}

	//if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		//if (day < 1 || day>31) {
			//printf("day is error");
			//return 0;
		//}
	//}
	//else if (month == 4 || month == 6 || month == 9 || month == 11) {
		//if (day < 1 || day>30) {
			//printf("day is error");
			//return 0;
		//}

	//}
	//else if (month == 2) {
		//if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
			//if (day < 1 || day>29) {
				//printf("day is error");
				//return 0;
			//}

		//}
		//else {
			//if (day < 1 || day>28) {
				//printf("day is error");
				//return 0;
			//}

		//}

	//}
	
	//week = (year + year / 4 + century/4-2*century + 26 * (month + 1) / 10 + day ) % 7;
	//switch (week)
	//{
	//case 0:
		//	printf("星期天");
		//break;
	//case 1:
		//printf("星期一");
		//break;
	//case 2:
		//printf("星期二");
		//break;
	//case 3:
		//printf("星期三");
		//break;
	//case 4:
		//printf("星期四");
		//break;
	//case 5:
		//printf("星期五");
		//break;
	//case 6:
		//printf("星期六");
		//break;



	//}
	
	//return 0;





//}


//int main(void)
//{
	//const int FREEZING = 0;
	//float temperature;
	//int cold_days = 0;
	//int all_days = 0;

	//printf("Enter the list of daily low temperatures.\n");
	//printf("Use Celsius,and enter q to quit.\n");
	//while (scanf("%f", &temperature) == 1)
	//{
		//all_days++;
		//if (temperature < FREEZING)
			//cold_days++;
//
	//}
	//if (all_days != 0)
	//	printf("%d days total: %.1f%% were below freezing.\n",
		//	all_days,100.0*(float) cold_days/all_days);
	//if (all_days == 0)
		//printf("No data entered!\n");
	//return 0;
//}


//#define SPACE ' '
//int main(void)
//{
	//char ch;

	//ch = getchar();
	//while (ch != '\n')
	//{
		//if (ch == SPACE)
		//	putchar(ch);
		//else
		//	putchar(ch+1);
		//ch = getchar();
	//}
//	putchar(ch);
	//return 0;

//}





//int is_leap_year(int year) {
	// 判断是否为闰年
	//return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}

//int is_valid_date(int year, int month, int day) {
	//// 判断日期是否合法
	//int days_in_month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	//if (month < 1 || month > 12) {
	//	printf("month is error.\n");
		//return 0;
	//}

	//if (month == 2 && is_leap_year(year)) {
		days_in_month[2] = 29;
	}

	if (day < 1 || day > days_in_month[month]) {
		printf("day is error.\n");
		return 0;
	}

	return 1;
}

int calculate_weekday(int year, int month, int day) {
	// 计算星期几
	if (month < 3) {
		month += 12;
		year -= 1;
	}

	int h = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
	return h;
}

int main() {
	int year, month, day;

	// 输入年月日
	printf("Enter year month day: ");
	scanf("%d %d %d", &year, &month, &day);

	// 判断日期是否合法
	if (is_valid_date(year, month, day)) {
		// 计算星期几
		int weekday = calculate_weekday(year, month, day);
		printf("%d\n", weekday);
	}

	return 0;
}

































