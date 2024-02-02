Questions on C++ #1
Answer the questions below in writing both in English and Bulgarian Language

Note: Including real life examples is mandatory for every question below!

Point out your resources - slides, books, documentation, online resources, etc. with links. Add links after the answer you used the resource/s for.

NO CHAT BOTS ALLOWED! NO GOOGLE TRANSLATE! EXPLAIN IN YOUR WORDS

1.Syntax Explanation:
Describe what the following line of C++ code does: int* ptr = &var;.

  Този ред код показва пример за променлива пойтер в C++, променливата ptr пази адреса на променливата var.
По този начин и var и ptr сочат към едно място в паметта на компютъра, ако променим стойността на ptr ще
променим и стойността на var. 
Например int var = 5; int* ptr = &var; *ptr = 6; сега и ptr и var имат нова стойност - 6.

  This line of code demonstrates simple example of pointer variables in C++, the variable 'ptr' points to the address of the variable 'var'. 
In this way they share the same memory address in the computer. If we change the value of 'ptr' we will also change the value of 'var'. 
Example: int var = 5; int* ptr = &var; *ptr = 6; Now both 'ptr' and 'var' have a new value of 6.

2. Concept Clarification:
Explain the difference between a while loop and a do-while loop in C++.

  Разликата между while loop и do-while loop е, че do-while loop ще изпълни парчето код в полето на do{парче код}while(условие за прекъсване на цикъла); 
поне един път преди цикълът да приключи, докато в while loop първо ще се провери условието за цикъла и ако това условие не е вярно (връща 0) 
в полето на while(условие){ парче код за изпълнение} няма да се изпълни.
Пример: int n = 0; do { std::cout << n << std::endl;}while(++n < 1); - изпълнява се един път и принтира '0' на конзолата.
int n = 0; while(++n < 1) {std::cout << n << std::endl;} - прескача полето за изпълнение на код за цикъла, защото първо увеличаваме променливата с 1 и 
след това проверяваме дали е по малка от 1.

  Difference between while loop and do-while loop is that in do-while loop it's guaranteed that the piece of code inside the scope of the 'do {code goes here}' 
will be executed at least one time before the condition of the loop is checked, while in a 'while-loop' first we check the condition 
and then if the condition returns true the scope of the loop will be executed.
Example: int n = 0; do { std::cout << n << std::endl;}while(++n < 1); - executes one time and prints out 0 to the console.
int n = 0; while(++n < 1) {std::cout << n << std::endl;} - skips the scope of the loop since we first increment n and then check if n is smaller than 1.

3. Code Analysis:
Given a snippet of C++ code containing a for loop, explain what the loop does, including how many times it iterates and why.
  for(int i = 0; i < 10; i++) { std::cout << i << " ";} 
  В посоченият for цикъл, в скобите декларираме условието което ще се проверява при всяка итерация на цикъла.
'int i = 0;' -> декларираме променлива от тип int и придаваме стойност 0, в следващата стъпка 'i < 10;' -> проверява дали променливата е по-малка от 10, 
след това влизаме в полето на цикъла между къдравите скоби и изписваме на конзолата стойността на променливата 'i', след това програмата се връща обратно 
в кръглите скоби и се изпълнява третата операция от цикъла, а именно увеличаване на 'i' с 1 'i++', след това се връща на втората стъпка 
и проверява дали 1 < 10, тъй като 1 е по-малко от 10 отново кода в квадратните скоби ще се изпълни. Цикълът ще се повтаря докато 'i' стане 10 
тъй като 10 не е по-малко от 10. В този случай цикъла ще изпринтира числата от 0 до 9 на конзолата -> 0 1 2 3 4 5 6 7 8 9, ако искаме да изпринтираме и 
10, може в проверката дали 'i<10' да променим 'i<11' или 'i<=10' -> 10 по-малко или равно на 10.

  In the given for loop snippet, inside the round braces we declare the condition of the loop. First we declare variable 'int i = 0', second we check 
if the condition is true or false 'i<10', since 0 is smaller than 10 the code inside the curly braces will be executed, print out value of 'i' -> 0, 
then the loop goes back to the round braces executs the third statement in the for loop 'i++' incrementing the value of 'i' by 1, then goes back to the 
second statement 'i<10' and checks if 1 < 10, since 1 is smaller than 10 the loop continues to execute the code in the curly braces and prints out 1. 
The loop continues its execution untill 'i' becomes 10. The program prints out numbers from 0 to 9 -> 0 1 2 3 4 5 6 7 8 9. If we want to include 10 we can 
change the second statement in the loop (;i<11;) or (;i<=10).

4. Function Usage:
Write about how functions prevent code duplication and give an example of a simple C++ function that calculates the square of a number.
  Използването на функции предпазва от дубликирането на код тъй като функцията се пише един път, но може да се извика многократно в изпълнението на програмата.
Да речем че трябва да изведем информацията за един обект от клас, който има 10 атрибута и трябва да ги изпринтираме на конзолата. Пишем кода в main функцията
и принтираме всичко за този обект, но по надолу в кода имаме друг обект от същия клас и отново трябва да изпринтираме цялата информация за него. 
Вместо да пишем същото парче код, може да направим функция, която приема обект от този клас и се грижи за принтирането на информацията му. 
Тази функция след това може да я извикаме всеки път, когато искаме да принтираме информация за обекта.

  Using functions prevents of code duplication, since we declare and initialize the function one time, but we can use it multiple times inside the code. 
For example we want to print out information about an object of class that has 10 member attributes and we have to print the value for all of them.
We write inside the main function and print out all the information about the object, some lines below we have a new object of the same class and we need 
to do the same to this object. We can create a function that will accept object of this class and inside it, the function will print out the information about 
this object. Now we can use this function every time we need to print out information of objects of this class.

int powNum(int n){return n * n};

int main(){
  int number = powNum(5); -> 25
  number = powNum(6); -> 36
}

5. Memory Management:
Discuss the Importance of memory management in C++ and explain the difference between stack and heap memory allocation.
  В C++ програмиста трябва да внимава, когато създава динамични променливи (пример: int* n = new int; *n = 6), защото те заделят място в Heap паметта и 
ако той не ги изтрие преди приключването на програмата, те могат да останат записани в паметта и натрупвайки се все повече и повече при стартирането на 
програмата да заемат цялата памет на компютъра. Докато ако програмиста работи с променливи, които се записват в Stack паметта, той не трябва да ги трие 
ръчно, тъй като те автоматично спират да съществуват когато излезнат от полето където са били създадени или когато програмата приключи своето изпълнение.

  In C++ programmers have to be careful when creating variable dynamically (example int* n = new int; *n = 6), because they allocate memory in the Heap and 
if not deleted before program ends they might stay somewhere in the memory and after each run of the program all of the memory might be filled. 
If the programmer uses non-dynamic variables (int n = 5; char c = '1';) they go to the Stack memory and are automatically deleted upon end of scope where 
they were created or when the program end its execution.

Source: https://www.youtube.com/watch?v=wJ1L2nSIV1s

6. Object-Oriented Programming:
Explain the concept of encapsulation in C++ and how it is achieved using classes.
  Идеята на енкапсулацията в C++, а и в други обектно ориентирани програмни езици е да скрият информация, която може да се види или промени от потребителя 
директно. Затова когато декларираме класове, обикновено правим атрибутите private за да не могат директно да бъдат достъпни извън този клас. 
Тези атрибути и тяхната стойност се променят чрез публични методи в този клас, където може да се направи проверка за данните които потребителят въвежда и 
дали тези данни могат да се запишат в съответният атрибут (променлива).

 The idea of encapsulation in Object Oriented Programming Languages, such as C++ is to hide "sensitive" data from the user, which they can change directly.
This is why usually when declaring a class we make all member attributes (variables) private and using public functions we change the value of those variables,
because in the function we can check the data that the user in entering and decide wether it is suitable to assign to our variables.

class MyClass{
public:
  void setAttributeValue(int att){
  //check if parameter has desired value and then assign it to the private attribute
  // проверяваме дали подаденият параметър е валиден и гогава записваме стойността в променливата
    this->attribute = att;
  }

  int getAttributeValue(){
    // return the value of the attribute
    // в тази функция връщаме на потребителя стойността на атрибута
    return this->attribute;
  }
private:
 // private attribute that cannot be accessed outside this class
// private атрибут, който не може да бъде достъпен извън този клас
  int attribute;
}

Source: https://www.w3schools.com/cpp/cpp_encapsulation.asp#:~:text=The%20meaning%20of%20Encapsulation%2C%20is,public%20get%20and%20set%20methods.

7. Error Handling:
Describe how exceptions are used in C++ for error handling, with an example of a try-catch block.
  Когато програмиста пише програма, по някой път може да допусне грешка или пък при въвеждане на некоректни данни от потребителя отново да има грешка,
тогава програмата ще даде грешка. За да се защити от това програмиста може да използва try-catch block, преведено (опитай да изпълниш това нещо, 
ако то не работи хвани грешката). По този начин, може да даде на себе си грешка която той да дефинира и да изпише по такъв начин, че всеки програмист да я 
разбере или ако грешката е на потребителя ще покаже на потребителя съобщение каква е грешката и как да се поправи.

  When the programmer codes, sometimes the program might give an error, whether it was the programmers fault or the user. In this case the programmer 
can use the try-catch block to try and run a piece of code, but if the code throws and error, it will be catched and then an error defined by the programmer 
will be shown so they would know what went wrong, if it was a user error, again the programmer will print a message to the user what went wrong and how to fix it.

try {
  int temperature;
  std::cout << "Enter temperature for cooking: ";
  std::cin >> temperature;
  if (temperature < 250) {
    std::cout << "Cooking temperature set to: " << temperature << std::endl;
  } else {
    throw (temperature);
  }
}
catch(int temperature) {
  std::cout << "Temperature too high, max value is 250, you entered: " << temperature << std::endl;
}

Source: https://www.w3schools.com/cpp/cpp_exceptions.asp#:~:text=The%20try%20statement%20allows%20you,occurs%20in%20the%20try%20block.

8. STL Containers:
Write about the purpose and use of the std:: vector container in C++.
  Vector в C++ е вид масив, който динамично заделя своята памет, когато достигне края на паметта си, заема нова такава и докато слагаме нови променливи в
него той ще продължава да увеличава размера си докато компютърът остане без памет (RAM). Използва се когато искаме да имаме колекции от даден тип променлива,
може да е от всякакъв тип, int, float, char, string, class (обект). Може да се взимат и показват стойностите чрез индексиране, могат да се трият елементи 
както и да се сменят стойностите на вече същестуващи такива.

  Vectors in C++ are dynamic arrays, they increase their size the more elements are stored in them. We can use them to keep collection of variable, 
they can store all types of variables (int, float, char, string, Class ...). We can access values using indices, we can delete or change the values of already
stored elements.

std::vector<int> numbers;
numbers.push_back(1); numbers.push_back(2); numbers.push_back(3);
std::cout << numbers[0]; -> 1

Source: https://www.geeksforgeeks.org/vector-in-cpp-stl/

9. Pointers and References:
Discuss the difference between pointers and references in C++ and provide scenarios where one might be preferred over the other.
  Референциите служат за запазване на адрес на променлива, но не заделят отделно място в паметта за собствен адрес, докато пойнерите имат собствен адрес, 
който като стойност пази адреса на променливата към която сочат. Реално с референции и пойнтери можем да променим стойността на променливата към която са закачени.
С пойнтерите можем да създаваме динамични променливи, които могат да се използват когато имаме полиморфизъм. В повечето случаи бихме ползвали референции пред
пойтери, за да не заделяме място в паметта за пойтера, но когато имаме полиморфизъм е трябва да ползваме пойнтери.

  Reference type variables keep the address of another variable, but do not have own memory address, whereas pointers have their own address that keeps as value
the address of a variable they point to. Both reference and pointer variables can change the value of variable they refer or point to. With pointer we can create
dynamic variables which we often use when having Polymorphism. In most cases we we would use reference type variables instead of pointers, since we do not want
to allocate memory for the pointer, but when having Polymorphism and want to create dynamic derived object from base class we use pointers.

Source: https://www.geeksforgeeks.org/pointers-vs-references-cpp/
10. Advanced Features:
Explain the concept of templates in C++ and how they support generic programming. Include a simple example of a template function.
  Темплейтите в C++ могат да заместят функции които имат еднакво име, еднакъв брой на приеманите параметри (от различен вид)и връщане на стойност от различен вид.

  Templates in C++ can be used when we want function with same name, same amount of accepted parameters of different types and return value of different type.

template<typename T>
T myMax(T x, T y) {
  return (x>y) ? x : y;
}

int main(){
  cout << myMax<int>(3, 7) << endl;
  cout << myMax<char>('a', 'A') << endl;
}


Source: https://www.geeksforgeeks.org/templates-cpp/
