// #include<iostream>

/*int main()
{
	float b, h, a;
	std::cout << "Enter base and height";
	std::cin >> b >> h;
	a = (b * h) / 2;
	std::cout << "The area is " << a;

	return 0;

}*/
//
//int main()
//{
//	int n, sum;
//	std::cout << "Enter the natural number ";
//	std::cin >> n;
//	sum = (n * (n + 1)) / 2;
//	std::cout << "The sum is " << sum;
//
//
//	return 0;
//
//
//}

// int main()
//{
//	 int i = 1;
//	 std::string esk1 = "Y";
//	 while (i) //Defining main loop
//	 {
//		 double d, r1, r2, a, b, c;
//		 //std::cin >> a >> b >> c;
//		 std::cout << "Enter A "; // Enter numbers for equasion
//		 std::cin >> a;
//		 std::cout << "Enter B ";
//		 std::cin >> b;
//		 std::cout << "Enter C ";
//		 std::cin >> c;
//		 std::cout << "Your equasion is " << a << "x*x" << "+" << +b << "x" << "+" << +c << "=0" << std::endl; //Prints equasion (note to clever change the sign on print for read)
//
//		 // Check if the equasion is valid
//		 d = pow(b, 2) - 4 * a * c;
//		 if (d > 0) 
//		 {
//			 r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a); // Calculating first answer
//			 r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a); // Calculating second answer
//			 std::cout << "Roots are " << r1 << " " << r2 << std::endl;
//		 }
//		 else if (d == 0)
//		 {
//			 r1 = -b / (2 * a);
//			 std::cout << "Root is " << r1 << std::endl; // Calculation answer
//		 }
//		 else
//		 {
//			 std::cout << "The equasion is unsolvable" << std::endl; // Stating insolvency
//		 }
//		 std::cout << "Continue Y/N ";
//		 std::cin >> esk1;
//		 if (esk1 == "N" or esk1 == "n")
//			 i = 0;
//
//	 }
//	return 0;
//
//
//} 

/*int main()
{
	int x = 5;
	bool comparisonResult = x == 5;
	if (comparisonResult)
	{
		std::cout << "Hello world!";

	}
	std::cin.get();

}*/


//#include <iostream>
//
//class Entity
//{
//public:
//	float X, Y;
//
//	Entity()
//	{
//		X = 0.0f;
//		Y = 0.0f;
//
//
//	}
//
//	Entity(float x, float y)
//	{
//		X = x;
//		Y = y;
//	
//	}
//
//	void Print()
//	{
//
//		std::cout << X << ", " << Y << std::endl;
//
//	}
//
//
//};
//
//int main()
//{
//	Entity e(10.0f, 5.0f);
//	
//
//	
//	e.Print();
//
//
//	std::cin.get();
//
//
//
//
//}

#include <iostream>

class Log
{
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;

private:
	int m_LogLevel = LogLevelInfo;

public:
	void SetLevel(int level)
	{
		m_LogLevel = level;

	};

	void Error(const char* message)
	{
		if (m_LogLevel >= LogLevelError)
			std::cout << "[ERROR]: " << message << std::endl;

	}

	void Warn(const char* message)
	{
		if (m_LogLevel >= LogLevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;

	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LogLevelInfo)
			std::cout << "[INFO]: " << message << std::endl;

	}

};

int main()
{
	Log log;
	log.SetLevel(log.LogLevelWarning);
	log.Warn("Hello!");
	log.SetLevel(log.LogLevelInfo);
	log.Info("FYI!");

	std::cin.get();



}