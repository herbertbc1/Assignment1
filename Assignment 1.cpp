#include <iostream>
using namespace std;

int main()
{
   int myId;
   int nLet;

   myId = 30;
   nLet = 7;

   cout << "Expression 1: " << myId / 2 << endl;

   cout << "Expression 2: " << myId % 2 << endl;

   cout << "Expression 3: " << 2 + 3 + 4 + 5 + 6 + nLet << endl;

   cout << "Expression 4: " << myId + nLet << endl;

   cout << "Expression 5: " << myId * nLet << endl;


   cout << "Expression 8: " << nLet++ << endl;

   cout << "Expression 9: " << ++nLet << endl;

   cout << "Expression 10: " << (myId) / (nLet + 1100) << endl;

   cout << "Expression 11: " << (nLet % nLet) && (myId * myId) << endl;

   cout << "Expression 12: " << (nLet -= nLet) || (myId) << endl;


   return (0);
}

/*------------------------------run----------------------------------------------
Hello World!

My family name is Herbert

My student ID is 20149626

Syllabus detail #1: One prerequisite for this course is Math 101 or elementary
algebra, as well as good english comprehension.

Syllabus detail #2: You can post code into the public forum but it cannot be
an exact copy of your assignment. You will need to translate the code into a
more generic thing that people cannot copy and paste.

Specific lab detail #1: You may not indent for any reason.

Specific lab detail #2: Absolutely no tabs.

Specific lab detail #3: Making readable code is a very important aspect of this
class. Just because it runs properly doesn't mean it is good.

Press any key to continue . . .
---------------------------------------------------------------------------*/