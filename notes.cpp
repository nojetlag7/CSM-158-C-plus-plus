// #include <cmath>
// #include <iostream> (allows user to make input and computer to make output)
// #include <vector>
// #include <iomanip> = sets precision for floating point numbers
// #include <string> = (able to just do--- string name = cat)
// DATA TYPES AND NAMESPACE
/*namespace first{
    int x = 2;
}
namespace second{
    int x = 4;
}
int main(){

    //int(whole number)
    int ag = 21;
    int year = 2023;


    //double(number inculding decimals)
    double price = 10.99;
    double gpa = 2;

    // char(stores single character)
    char grade = 'A';
    char initial ='B';
    char dollarSign = '$';

    //boolean(true/false)[bool]
    bool student = false;
    bool power = true;
    bool forSale = true;


    // string(objects that represent a sequence of text)
    std::string name = "Jeremy";
    std:: string day = "sum";
    std:: string food = "bad pizza";

    // using const keyword
    const double PI = 3.14159;
    double radiuss = 14;
    double circumference = 2 *  PI * radiuss;
    double x = 9.98;
*/
/* Namespace = provides a solution for
preventing name confsuion in large projets.They allow
for elements to have the same name as long
as they have different name spaces.
(created outside the main function )
*/

// typedef = reserved keyword used to create
// an addtional name for another data type.
// we can better still use the 'using' keyword.
// eg>>  using text_t = std:: string;

// typedef std:: vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;

// LOGICAL OPERATORS
/*
 ! = reverses the logical state of its operand
 (basically makes a true condition false and vice versa)
 || = to check if at least one of two conditons are true
 && = to check if two  or more conditions are both true
*/
/* arithmetic operators = return the results of
a specific arithmetic operation(+ - / *)

int students = 20;
if we wanted to add one more,
students = students + 1;
students += 1
students ++ (used for increment of only 1)
#same goes for subtraction.

 for multiplication;
 students = students *2;
 students *= 2;

 #same goes for division(/)

 modulus operator(%)= for finding remainder of
 any division.

 NB * and / have the same precedence
 so if in the same eqn the program would
 solve them from left to right.

 NB for a user input having a string to contain spaces
 basicalluy a full name or or sentence,we may do:
 std::getline(std::cin, name);
*/

/* std::string name;
 std::cout<< "what is your name?"<<'\n';
 std::cin >> name ;
 std::cout << "what is your age?" <<'\n';
 std::cin >> age;
 std::cout<< "hey there " << name << " you are " << age << " years old" <<'\n';
*/
/*
  const double pi = 3.141;
    double radius ;
    double exponent = 2;

std::cout<<"please input radius"<< '\n';
std:: cin>> radius;
double area = pi * pow(radius,exponent);
std::cout << area <<'\n';


*/

/*
    if we want to accept  input from the user in
    the form of a string that contains spaces
    we should use the getline function:

    eg:   std::getline(std::cin,name)
    this would accept a name such as jeremy boateng
    whereas without the getline function the output
    would have been only jeremy.
*/

/* double a,b,c;
std::cout<<"Enter side A: " << '\n';
std::cin>> a;
std::cout<<"Enter side B: " << '\n';
std::cin>>b;
c = sqrt((pow(a,2) + pow(b,2)));
std::cout<<"The value of the hypotenuse is: " <<c;
*/

/*   int age;
   std::cout << "What is your age? ";
   std::cin>> age;

   if(age >= 100){
       std::cout<<"You are too old to enter the site!";
   }
   else if (age < 18)
   {
       std::cout<<"You cannot have access to the site";
   }
   else if (age < 0){
       std::cout<<"You have not been born yet";
   }
   else{
       std::cout<<"Welcome to the site";
   }
*/
/*SIMPLE CALCULATOR */

/*int month;
std::cout<<"Enter the month (1-3)";
std::cin>> month;
switch(month){
   case 1:
       std::cout<<"It is January.";
       break;
   case 2:
       std::cout<<"It is February.";
       break;
   case 3:
       std::cout<<"It is March.";
       break;
   default:
   std::cout << "Please enter number from 1 to 3.";
   break;
}
*/
/* char op;
double num1;
double num2;
double ans;
std::cout << "**************CALCULATOR************** \n";

std::cout<< "Please enter operand(+ - / *): ";
std::cin>> op;
std::cout << "Please input first number: ";
std:: cin >> num1;
std::cout << "Please input second number: ";
std:: cin >> num2;

switch(op){

    case '+':
    ans = num1 + num2;
    std:: cout <<"The answer is: " << ans<<'\n';
    break;

    case '-':
    ans = num1 - num2;
    std:: cout <<"The answer is: " << ans<<'\n';
    break;

    case '*':
    ans = num1 * num2;
    std:: cout <<"The answer is: " << ans<<'\n';
    break;

    case '/':
    ans = num1 / num2;
    std:: cout <<"The answer is: " << ans<<'\n';
    break;

    default:
    std::cout << "please enter valid operand \n";
    break;
}
std::cout << "***********************\n";
*/

// ternary operator '?' replacement to if/else statement
// condition ? expression 1 : expression2
/*you write the condition and if it is true then expression1
   will be carried out else expression two will be carried out
   bascially an if/else statement if only two possible outcomes.
 eg:
    int grade = 69
    grade >= 70 ? std::cout<<"you pass!" : std::cout<<"you fail."
    we can also write it as:
    std::cout << (grade >= 70?  "you pass" : "you fail")
   can be used for checking if num is even or odd.

   */

// TEMP CONVERSION PROGRAM
/*
double temp;
 char unit;


std::cout << "F = Fahrenheit"<< endl;
std::cout << "C = Celsuis\n";
 std::cout << "Kindly input unit of temperture(C or F): ";
 std:: cin >> unit;
 std::cout << "Please input temperature: ";
 std:: cin >> temp;

 switch (unit)
 {
case 'C':
    temp = (temp * 9 / 5) + 32;
    break;
case 'c':
    temp = (temp * 9 / 5) + 32;
    break;
case 'F':
    temp = (temp - 32) *  5/9;
    break;
case 'f':
    temp = (temp * 9 / 5) + 32;
    break;
 default:
 std::cout<< "Kindly enter proper unit in Caps.";
    break;
 }
 std::cout<< temp ;
 NB would have been better to use if else statement
 since atp i dont think switch function can work with or
 logical operator.*/
// int main(){
//   bool hungry = true;
//   //hungry ? std ::cout<<"Get some food" : std::cout<<"You are full";
//   std::cout << (hungry ? "you are hungry" : "you are full");
//  return 0;
//  }

/* string methods


#include <iostream>

int main(){

    std:: string name;
    std::cout<< "Enter your name: ";
    std:: cin >> name;
    //std::getline(std::cin,name);

    name.append("@gmail.com");
    std::cout<< "Your email is now: " << name;

    return 0;
}

*/
// while loops (already know how they work...just mind syntax)
//  do while loops are also in cpp(same format as in algorithm)
/* for loops excute block of code up to a denite number of times)

for loops in cpp:

for(int i = 1; i <= 3; i++) or for(int   i =0; i < 9; i += 2){
    it takes in 3 inputs usually
    first one being the index(i) start point
    second being the end point
    third being the step maker
}
*/
// break = break out of a current loop(can be seen in switch)
// continue = skip current iteration
/*
 eg of continue
 for(int i = 1; i <= 20; i ++){
    if(i == 13);
        continue;
    std::cout<< i << ' ';
 }

*/
// PRINTING A RECTANGLE
/*
  int rownum;
    int columnnum;
    char symbol;

    std::cout << "Input row number: ";
    std::cin >> rownum;
    std::cout << "Input column number: " << '\n';
    std::cin >> columnnum;
    std::cout << "Input symbol: ";
    std::cin >> symbol;
    for(int i = 1; i <= rownum; i ++){
        for(int j= 1; j <= columnnum; j ++){
         std::cout << symbol;

        }
        std::cout <<'\n';*/
// WORKING WITH RANDOM NUMBERS
/*
    to work with random numbers dont forget to
    use #include <ctime>

    #include <iostream>
    #include <ctime>

int main(){

    // pseudo random = not truly random(but close)
    // use srand(time(NULL))

    srand(time(NULL)); or srand(time(0))
    int num = rand() % 6 +1 ;
    //gives a random number from 0 to 5
    //but we want from 1 to 6 so we add + 1
    //the rand() itself has a range of 0 to i think 325600 or sumn
    std::cout << num;
    return 0;
*/
// RANDOM EVENT GENERATOR
/* #include <iostream>
#include <ctime>

int main(){

    srand(time(0));
    int randnum = (rand() % 5) + 1;

switch (randnum)
    {
    case 1: std::cout << "You've won a new car!\n";
        break;

    case 2: std::cout << "You've won a free lunch!\n";
        break;

    case 3:std::cout << "You've won a sticker!\n";
        break;

    case 4:std::cout << "You've concert tickets!\n";
        break;

    case 5:std::cout << "No prize!\n";
        break;
    }

    return 0;
}*/
// RANDOM NUMBER GUESSING GAME
/* #include <iostream>
#include <ctime>

int main(){

    srand(time(0));

    int num = (rand() % 10) + 1;
    int guess;
    int tries = 4;

    std::cout <<"*********NUMBER GUESSING GAME***********\n";
    std::cout <<"Guess a number from 1 to 10!\n";
    do
    {
       std::cout << "Guess: ";
       std::cin >> guess;
       tries -= 1;
        if (guess == num)
        {std::cout<<"You guessed correctly!";}
       std::cout << "You have " << tries << " tries left!" << "\n";
    } while (guess != num & tries > 0);

    std::cout <<"***********************\n";
    return 0;
}
*/
// FUNCTIONS
//  function = block of reuseable code
/*
    most people define function after the main fucntion to
    make code more readable.But this causes an error due
    to the sequencetial control structure.To fix this issue,
    you can declare the function first(ie. above the main func)
    and then define it later.

    delcare it by:  void "functionname"();
 */
/*
    void happybrithday(){ //naming the function
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday to you!\n";
}
void sing(int num){
    /*
    if we want to set parameters for functions we
    would have to do it like:
    void 'functionname'(std::string 'parametername'){}
or  void 'functionname'(int 'parametername')
or for multiple parameters:
'functionname'(std::string 'parameter1name', int 'parametername'){}


// also  parameters and arguements inside functions matter. reread on it

//try and create a function to concatenate two strings

//return = return a value back to the spot
//          where you called the encopassing function
 */
/*
#include <iostream>
#include <cmath>
double square(double length);
//'void' was changed at the declaration side and the definiton
// side of the function, square(double length)
double cube(double length);

int main(){

    double length = 5.6;
    double area = square(length);
    double volume = cube(length);
    std::cout << area << '\n';
    std:: cout << volume;
    return 0;
}

    /we changed the 'void' into double bc the return
    //is supposed to return a value with the
    //with the datatype double.

double square(double length){
    return  length * length;
}
double cube(double length){
    return length*length*length;
}
 */
// OVERLOADED FUNCTIONS
/*
    it is acceptable to have a many functions with the same
    name but theymust have different number parameters.

    // function signature = function name + parameters


    eg. void shout(){[prompts]}
        void shout(std::string name1){[prompts]}
        void shout(std::string name1, std::string name2){[prompts]}
*/

// local variables = declared inside of a function or block{}
// global variables = delcared outside of all functions
// in a function, local variables have precedence over global ones

// BANKING PROGRAM
/*    #include <iostream>
    #include <iomanip>

    void showBalance(double balance);
    double deposit();
    double withdraw(double balance);


int main()
{
    double balance = 0;
    int choice = 0;

    do{
        std::cout <<"***********************\n";
        std::cout <<"Enter your choice:\n";
        std::cout <<"***********************\n";
        std::cout <<"1. Show Balance\n";
        std::cout <<"2. Deposit Money\n";
        std::cout <<"3. Withdraw money\n";
        std::cout <<"4. Exit\n";
        std::cin >> choice;

        std::cin.clear(); //resests input function when standard input fails to interpret input.
        fflush(stdin); //clear input buffer
        switch(choice){
            case 1: showBalance(balance);
                    break;
            case 2: balance += deposit();
                    showBalance(balance);
                    break;
            case 3: balance -= withdraw(balance);
                    showBalance(balance);
                    break;
            case 4: std::cout <<"Thanks for using this program!\n";
                    break;
            default:std::cout <<"Please enter valid choice\n";
        }
    } while (choice != 4);

        return 0;
    }

    void showBalance(double balance){
        std::cout<< "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
        // sets the balance be to two d.p
    };
    double deposit(){

    double amount = 0;
    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if(amount > 0){
         return amount;
    }
    else{
        std::cout << "Thats not a valid amount\n";
    }
    };
    double withdraw(double balance){

        double amount = 0;
        std::cout << "Enter amount to be withdrawn: ";
        std::cin >> amount;

        if(amount > balance){
            std::cout << "Insufficient funds\n";
            return 0;
        }
        else if(amount < 0){
            std::cout << "Thats not a valid amount\n";
            return 0;
        }
        else{
            return amount;
        }
    };
*/

// ROCK PAPER SCISSORS GAME
/*
#include <iostream>

char getUserchoice();
char getCompChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;


    player = getUserchoice();
    std::cout << "Your choice: ";
    showChoice(player);
    computer = getCompChoice();
    std::cout << "Computer choice: ";
    showChoice(computer);

    chooseWinner(player, computer);
    return 0;
}

char getUserchoice(){

    char player;
    std::cout << "Rock Papaer Scissors game\n";
    do{
        std::cout << "Choose one of the following\n";
        std::cout << "**************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cin >> player;

    }
    while(player != 'r' && player !='s' && player !='p');


    return player;
};
char getCompChoice(){

    srand(time(0));
    int num = rand() % 3 +1;

    switch(num){
        case 1: return 'r'; // we dont need to break the switch if we are returning values
        case 2: return 'p';
        case 3: return 's';
    }

return 0;
};
void showChoice(char choice){

    switch(choice){
        case 'r': std::cout << "rock\n";
            break;
        case 'p': std :: cout << "Paper\n";
            break;
        case 's': std:: cout << "scissors\n";
            break;
    }
};
void chooseWinner(char player, char computer){
    switch(player){
        case 'r':   if (computer =='r')
                    {std:: cout << "Its a tie!\n";}
                    else if(computer == 'p')
                    {std::cout << "You lose!\n";}
                    else
                    {std::cout << "You win!\n";}
        break;

        case 'p': if (computer =='r')
                    {std:: cout << "You win!\n";}
                    else if(computer == 'p')
                    {std::cout << "You tie!\n";}
                    else
                    {std::cout << "You lose!\n";}
        break;

        case 's': if (computer =='r')
                    {std:: cout << "you lose!\n";}
                    else if(computer == 'p')
                    {std::cout << "You win!\n";}
                    else
                    {std::cout << "You tie!\n";}
        break;
    }
};
*/ 
// ARRAYS
/* #include <iostream>


int main(){

//array = a data structure that can hold multiple
//        values which are accessed by an index number
//        "kind of like a variable that holds multiple values"

// arrays can only contain data of the same type.
// hence you cannot have integers and strings in the same array
    // to make an array:
    std::string cars[] = {"Benz","Toyota","Corvette"};
    double prices[] = {5.89, 7.00, 67.9};
    std::cout << cars; //this wont print car, but rather the memory address of the car array
    std::cout << cars[0]; //will print Benz

// we can declare arrays and add the elements later but
// we must set the size of the array. for eg
// std::string cars[4]...this sets the size of the array to 4.

    return 0;
}*/

// sizeof() = used to find the size in bytes of datatypes and arrays

// FOREACH LOOP
/*
    basically  the equivalent of the 'for i in j'
    type of loop we have in python.
    for eg.
    int grades[] = {65, 89, 74, 45};
    for(int grade : grades){
        std::cout << grade '\n';
// the code above basically reads: for int grade in grades,
// perform the actions below
    }

*/
// NUMBER FORMATTING ALGORITHM
/*
#include <iostream>

int main(){
    double num;
    int count;
    int whole_part;
    int deci_part;
    int last_digit;
    using namespace std;
    string numpoint = ".";
    cout << "NUMBER FORMATTING PROGRAM\n";
    cout << "***************************\n";
    cout << "Please input number to two decimal places: ";
    cin >> num;
    //separating the decimal and whole parts
    whole_part = int(num);
    deci_part = (num - whole_part) * 100;

    while(whole_part > 0){
        last_digit = whole_part % 10;
        numpoint = to_string(last_digit) + numpoint;
        whole_part = whole_part / 10;
        count += 1;
        if(count % 3 == 0 && whole_part > 0){
            numpoint = "," + numpoint;
        }
    }
    if(deci_part > 9){
        cout << numpoint + to_string(deci_part) << "\n";
    }
    else{
        cout << numpoint + "0" + to_string(deci_part) << '\n';
    }
    cout << "***************************\n";
    return 0;
}
*/
// NB "sizeof" function
/*
    the function 'sizeof' gives the size of a datatype
    in bits. hence sizeof(9) which is an integer should give
    4..which should be the same for all integers.
    so for an array: arr[] = {0, 2, 3}
    sizeof(arr) should be equal to 3*4 bits since there
    are 3 integers in the array.

    NB: a string data type contains 32 bits regardless of its length.
*/
// LINEAR SEARCH FOR AN ARRAY OF INTEGERS.
/*
int searchArray(int array[],int size, int element);

int main()
{
    int index;
    int mynum;
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/ sizeof(numbers[0]);

    std::cout << "Enter element to search for: ";
    std::cin >> mynum;

    // when we return the value of i from the function we'll then store it in index.
    index = searchArray(numbers, size, mynum);

    if(index != -1){
        std::cout << mynum << " is at index " << index;
    }
    else{
        std::cout << mynum << " is not in the array";
    }
  return 0;
}
int searchArray(int array[],int size, int element){

    // first the start, next the end condition, then the stepper.
    for(int i = 0; i < size; i++){
        if(array[i] == element){
                return i;
        }
    }
    return -1; // meaning it was not found ig.
}
 */
// LINEAR SEARCH FOR AN ARRAY OF STRINGS.
/*
int searchArray(std::string array[],int size, std::string element);

int main()
{
    int index;
    std::string myfood;
    std::string foods[] = {"Pizza", "Fries", "Rice"};
    int size = sizeof(foods)/ sizeof(foods[0]);

    std::cout << "Enter food to search for: ";
    std::getline(std::cin >> myfood);

    // when we return the value of i from the function we'll then store it in index.
    index = searchArray(foods, size, myfood);

    if(index != -1){
        std::cout << myfood << " is at index " << index;
    }
    else{
        std::cout << myfood << " is not in the array";
    }
  return 0;
}
int searchArray(std::string array[],int size, std::string element){

    // first the start, next the end condition, then the stepper.
    for(int i = 0; i < size; i++){
        if(array[i] == element){
                return i;
        }
    }
    return -1; // meaning it was not found ig.
*/
// BUBBLE SORT FOR ARRAY
/*
#include <iostream>
void sort(int array[], int size);

int main(){

    int array[] = {10, 1, 5, 3, 8, 9, 7, 4, 2, 6};
    int size = sizeof(array)/ sizeof(array[0]);

    sort(array, size);
    for(int element : array){
        std::cout << element  << " ";
    }

    return 0;
 }

 void sort(int array[], int size){

    int temp;
    for (int i = 0; i < size -1; i++){
        for(int j = 0; j <size - i; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
 }
 */

// fill() = fills a range of elements with a specified value
//  syntax ==> fill(begin, end, value)
// more decription ==> fill(arrayname, array name + ending spot, value to be filled with)
/*
#include <iostream>

 int main(){
    using namespace std;

    const int size = 100;
    string foods[size];

    fill(foods, foods + (size), "repeat");
    // makes all  the elements in the array 'foods' be "repeat".
    // if the end was foods + (size/2), the first 5 half of the
    // array would be filled with the value you entered.

    // to fill the other half, we can type :
    // fill(foods + (size/2),foods + size, "no repeat")
    for(string food:foods){
        cout << food << '\n';
    }
    return 0;
 } */

/* #include <iostream>

int main(){
    using namespace std;

    int numbers[6] = {1, 2, 3, 4, 5, 6};
    for(int num :numbers){
        cout << num + 3 << '\n';
    }

    return 0;
}*/
//2D ARRAYS
//an array of arrays basically.
/* #include <iostream>
int main(){
    using namespace std;

    int matrix [3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    cout <<  matrix[0][2]; //displays content of row 0, column 2. which would display '3'
    // to iterate over the elements of a 2d array we may use nested loops
    // firstly calculating the number of rows and columns of the array
    int rows = sizeof(matrix)/sizeof(matrix[0]); //dividing the total size by the size of one of the inner arrays.
    int columns = sizeof(matrix[0])/sizeof(matrix[0][0]); // to determine the number of elements in each inner array
    
    for(int i = 0;i < rows;i++){
        for(int j = 0; j < columns;j++){
            cout << matrix[i][j] << " "; 
        }
     cout << '\n';}


    return 0;
}*/
//MEMORY ADDRESSES
/*
 a memory address is a location in memory where data is stored and it can be accessed with & (address-of operator)
 std::string name = "bto";
 int num =  896;
 bool old = false;

 std:: cout << &num; ----> this would displauy the memory address of where the data in variable num is stored
*/
// pointers - variable that stores memory address of another variable

// & address-of operator
// * deference operator
/*#include <iostream>
int main(){
//data type of pointer should be the same as the variable
    std::string name = "bro";
    std::string *pName = &name;
    std:: cout << pName; // this would print the memory address of the variable name
    std:: cout << *pName; //this would print what is in the memory address itself

    return 0;
}*/

// PASSBY VALUE,PASSBY REFERENCE
/* #include <iostream>
void swap(std::string &a, std:: string &b);
int main(){

std::string x = "name";
std::string y = "fish";
swap(x,y); //wouldnt work bc its a passby value. we need to pass by reference instead
// ie, use a memory address to reference the arguments
std::cout << y;

    return 0;
}
// void swap(std::string a, std:: string b this would passby value
void swap(std::string &a, std:: string &b){ //pass by refernce using '&' operator

 std::string temp = a;
 a = b;
 b = temp;
}*/


//CONST PARAMETERS
/* #include <iostream>
void print(const std::string &name, const int &age);
int main(){

std::string name = "Bro";
int age = 21;
print(name, age);

return 0;
}
void print(const std::string &name, const int &age){
    std::cout << name << '\n';
    std::cout << age;
}*/


//printf
/*
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int intValue = 42;
    unsigned int uintValue = 42;
    char charValue = 'A';
    const char* strValue = "Hello, World!";
    float floatValue = 3.14f;
    double doubleValue = 3.14;
    void* ptrValue = &intValue;

    printf("Signed integer: %d\n", intValue);
    printf("Unsigned integer: %u\n", uintValue);
    printf("Character: %c\n", charValue);
    printf("String: %s\n", strValue);
    printf("Float: %f\n", floatValue);
    printf("Double: %f\n", doubleValue);
    printf("Pointer: %p\n", ptrValue);
    printf("Hexadecimal: %x\n", uintValue);
    printf("Octal: %o\n", uintValue);

printf("Signed integer: %d\n", intValue);: Prints the signed integer value.
printf("Unsigned integer: %u\n", uintValue);: Prints the unsigned integer value.
printf("Character: %c\n", charValue);: Prints the single character.
printf("String: %s\n", strValue);: Prints the C-style string.
printf("Float: %f\n", floatValue);: Prints the floating-point number.
printf("Double: %f\n", doubleValue);: Prints the double precision floating-point number.
printf("Pointer: %p\n", ptrValue);: Prints the memory address stored in the pointer.
printf("Hexadecimal: %x\n", uintValue);: Prints the unsigned integer in hexadecimal format.
printf("Octal: %o\n", uintValue);: Prints the unsigned integer in octal format.
    return 0;
}
*/
/* #include <iostream>
int main(){
    // char i('k');
    // std::string name;
    // std::cout << "Enter your name: ";
    // getline(std::cin,name);
    // std::cout << sizeof(name) << std::endl;
    // std::cout << name << std::endl;
    // printf("Your name %% is %c\n", i);
    srand(time(NULL));
    int x = rand() % 14;
    std::cout << x;

    double flo = 89;
    return 0;
}*/
