#include <iostream>

using namespace std;

//==========================================================
//--------------      Fizz Buzz Program      ---------------
//==========================================================
//                Fizz   : Divisible by 3
//                Buzz   : Divisible by 5
//             Fizz Buzz : Divisible by 3 and 5
//==========================================================

void FizzBuzz(int n)
{
	if (n > 1)
		FizzBuzz(n - 1);

	if (n % 3 == 0 && n % 5 == 0)
		cout << "☆★☆★ [ FizzBuzz ] ★☆★☆" << endl;
	else if (n % 3 == 0)
		cout << "     ★ [ Fizz ] ★     " << endl;
	else if (n % 5 == 0)
		cout << "     ☆ [ Buzz ] ☆     " << endl;
	else
		cout << "        [ " << n << " ]         " << endl;
}

int main()
{
	std::cout << "==========================\n";
	std::cout << "   Let's Play FizzBuzz    \n";
	std::cout << "==========================\n";

	int num;
	std::cout << "-- Enter a number --\n";
	std::cin >> num;
	std::cout << "-- Count " << num << " times --\n";

	FizzBuzz(num);

	return 0;
}

// --------------------------------------------------------
//                      Sample Output
// --------------------------------------------------------

// ==========================
//    Let's Play FizzBuzz    
// ==========================
// ----  Enter a number  ----
// 20
// ----  Count 20 times  ----
//         [ 1 ]         
//         [ 2 ]         
//      ★ [ Fizz ] ★     
//         [ 4 ]         
//      ☆ [ Buzz ] ☆     
//      ★ [ Fizz ] ★     
//         [ 7 ]         
//         [ 8 ]         
//      ★ [ Fizz ] ★     
//      ☆ [ Buzz ] ☆     
//         [ 11 ]         
//      ★ [ Fizz ] ★     
//         [ 13 ]         
//         [ 14 ]         
// ☆★☆★ [ FizzBuzz ] ★☆★☆
//         [ 16 ]         
//         [ 17 ]         
//      ★ [ Fizz ] ★     
//         [ 19 ]         
//      ☆ [ Buzz ] ☆  
