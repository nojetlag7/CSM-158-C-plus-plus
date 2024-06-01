// NB: can initialise variables by : int number = 5 or int number(5);
//Question 1(JB AND SONS)
/* #include <iostream>

int main(){


using namespace std;
    double hours_worked;
    char gender;
    int num_children;
    double overtime_pay,gross_pay,income_tax,NHIS,district_tax,net_pay,edu_fund;
    
    cout << "Welcome to Salary calculator" << endl;
    cout << "************************************" << endl;
    cout << "Enter your gender(m or f): ";
    cin >> gender;
    cout << "Enter the number of hours worked: ";
    cin >> hours_worked;
    if(gender == 'm' && hours_worked > 40){
        overtime_pay = (hours_worked - 40) * (1.5 * 500);
        gross_pay = 40 * 500 + overtime_pay;
    }
    else if(gender == 'm' && hours_worked < 40 && hours_worked > 0){
        gross_pay = hours_worked * 500;
    }
    else if(gender == 'f' && hours_worked > 40){
         overtime_pay = (hours_worked - 40) * (1.5 * 550);
         gross_pay = 40 * 550 + overtime_pay;
    }
    else if(gender == 'f' && hours_worked < 40 && hours_worked > 0 ){
        gross_pay = hours_worked * 550;
    }
    else{
        cout << "Enter appropraite gender(m or f) and accurate hours worked";
    }
    income_tax = 0.15 * gross_pay;
    NHIS = 0.025 * gross_pay;
    district_tax = 0.01 * gross_pay;
    cout << "Enter the number of children: ";
    cin >> num_children;
    if(num_children < 0){
        cout << "Number of children cannot be negative." << endl;
    } 
    else if(num_children > 3 && gender == 'm'){
        edu_fund = num_children * 10;
    }
    else if(num_children > 3 && gender == 'f'){
        edu_fund = num_children * 20;
    }
    else{
        cout << "You pay no educational fund" << endl;
    }
    double total_deductions = NHIS + district_tax + income_tax + edu_fund;
    net_pay = gross_pay - total_deductions;

    cout << "Your wage for this week is " << net_pay << " cedis" << endl;
    cout << "End of program" << endl;
    cout << "******************************************";

    sytem("pause>0")
    return 0;
}
*/
//Question 2(exchanging values of 2 variables)
/* #include <iostream>
int main(){
    double var1;
    double var2;
    double temp;
    std::cout << "Enter the first variable value: ";
    std::cin >> var1;
    std::cout << "Enter the second variable value: ";
    std::cin >> var2;
    temp = var1;
    var1 = var2;
    var2 = temp;
    std::cout << "variable 1 is now: " << var 1 << endl;
    std::cout << "variable 2 is now: " << var2;


    return 0;    
} */
// Question 3(position of last occurence)
/* #include <iostream>
using namespace std;
int main(){
    int listsize;
    int numsearch;
    int num;
    int position;
    cout << "How many numbers are in your list? ";
    cin >> listsize;
    cout << "What number are you looking for? ";
    cin >> numsearch;
    for(int i=1; i<=listsize; i++){
        cout << "Enter next number in list: ";
        cin >> num;
        if(num == numsearch){
            position = i;
        }
    }
    cout << "The number " << numsearch << " appears last at position " << position << '\n';


    return 0;
}*/
//QUESTION 4(MEAN AND MEDIAN)
/*
#include <iostream>
#include <algorithm>//allows us to use the sort function

using namespace std;
int main(){

    int listsize;
    double sum = 0;
    double median;
    cout << "What is the size of your list? ";
    cin >> listsize;
    double list[listsize];
    for(int i = 0;i < listsize;i++){
        cout << "Enter next number in your list: ";
        cin >> list[i];
        sum += list[i];
    }
    sort(list, list + listsize);// to sort the array. syntax = sort(arrayname, arrayname + arraysize)
    double mean = sum/ listsize;
    if(listsize % 2 == 1){
        median = list[(listsize / 2)+1];
    }
    else{
        median = (list[listsize/2] + list[(listsize/2)-1])/2;
    }

    cout << "The mean of your list is " << mean << '\n';
    cout << "The median of your list is " << median << '\n';

    return 0;
}*/
//QUESTION 5(SUM OF FIRST N EVEN AND ODD INTEGERS)
/* #include <iostream>
using namespace std;
int main(){

    //finding the sum of the first n even numbers and n odd numbers
    int sum_even = 0;
    int sum_odd = 0;
    int n;
    cout << "Enter the number of even and odd integers to sum:  ";
    cin >> n;
    if(n < 0){
        cout << "PLease enter a positive integer.\n";
    }
    else{
        for(int i = 0;i <= 2*n;i++){
            if(i % 2 == 0){sum_even += i;}
            else{sum_odd += i;}
        }
    }
    int total = sum_even + sum_odd;
    cout << "The sum of the first " << n << " odd numbers is " << sum_odd << '\n';
    cout << "The sum of the first " << n << " even numbers is " << sum_even << '\n';
    cout << "The sum of teh first " << n << " even and odd numbers is " << total << '\n';

    return 0;
}*/
//QUESTION 6(NUMBER OF TIMES A DIGIT APPEARS IN A NUMBER)
/* #include <iostream>
using namespace std;
int main(){
   int counter = 0; //never forget to initialise counting variables
   int number;
   int numfind;
   int check;
   cout << "Enter number to be used for program: ";
   cin >> number;
   int original_number = number; //to store orginal number for later input
   cout << "Enter number to be checked for its appearances: ";
   cin >> numfind;
   while(number > 0){
    check = number % 10;
    if(numfind == check){
        counter++;
    }
    number /= 10;//to remove last digit of number by integer division
   }
   cout << "The number " << numfind << " appears " << counter << " times in " << original_number ;
   return 0;
}*/
//QUESTION 7(NUMBER OF TIMES A CHARACTER APPEARS IN A STRING)
/* #include <iostream>
#include <string>
using namespace std;
int main(){
    string myString;
    char search; //the character we are to count its appearances
    int count = 0;
    cout << "Enter your string to be used: \n";
    getline(cin,myString); //to be able to store the full string in the variable myString
    cout << "What character in the string are you looking for? ";
    cin >> search;
    for(char letter: myString){ //to iterate over each character in the string(works like 'for i in range' in python)
        if(search == letter){
            count++;
        }
    }
    cout << "The number of times the character " << search << " appears in the string is " << count;

    return 0;
} */
//QUESTION 8(NO OF DIGITS AND SUM OF DIGITS IN A NUMBER)
/*
#include <iostream>
using namespace std;
int main(){
    int number;
    int sum = 0;
    int count = 0;
    int remainder;
    cout <<  "Enter number to be used: ";
    cin >> number;
    while(number > 0){
        remainder = number % 10;
        sum += remainder;
        number /= 10;
        count++;
    }
    cout << "The sum of numbers in your number is " << sum << " and it has " << count << " digits\n";  

    return 0;
} */
//QUESITON 9(FINDING PRIME NUMBERS)
/*#include <iostream>
using namespace std;
int main(){
    int number;
    int nofactors = 0;
    cout << "Enter number to check if it is a prime number: ";
    cin >> number;
    for(int i = 1;i <= number/2;i++){
        if(number % i == 0){
            nofactors++;
        }
    }
    if(nofactors == 2){
        cout << number << " is a prime number.";
    }
    else{
        cout << number << " is not a prime number.";
    }


    return 0;
}
    OR
#include <iostream>
using namespace std;
int main(){
    int nofactors = 0;
    for(int i =1;i<=1000;i++){
        for(int j = 1;j <= i;j++){
            if(i % j == 0){
                nofactors++;
            }
        }   
        if(nofactors == 2){
            cout << i << " is a prime number.\n" ;
        }
        nofactors = 0;
    }

    return 0;
}

*/
//QUESTION 10(TWIN PRIMES)
/*#include <iostream>
using namespace std;
bool isprime(int number){ //function to check prime numbers
    int nofactors=0;
    for(int i = 1;i <= number;i++){
        if(number % i == 0){
            nofactors++;
        }
    }
    if(nofactors != 2){
        return false;
    }
    return true;
}
int main(){
    int n;
    cout << "Enter a positive integer to use as the ceiling value: ";
    cin >> n;

    while(n < 1){
        cout << "Your value must be a positive integer: "; // to prevent user from entering negative values
    }
    for(int i = 1;i <= n;i++){
        if(isprime(i) && isprime(i+2)){  //calling the function defined earlier into the main fucntion
            cout << i << " and " << i+2 << " are twin primes.\n";
        }
    }
return 0;
}*/
// DIVISION WITHOUT THE SIGN
/* #include <iostream>
using namespace std;
int main(){
    // 9 / 2 = 4R1 (9 is dividend, 2 is divisor, 4 is quotient and 1 is remainder)
    int quotient = 0;
    int divisor;
    int dividend;
    int remainder;
    cout << "Enter number to be divided(dividend): ";
    cin >> dividend;
    cout << "Enter number to do the dividing(divisor): ";
    cin >> divisor;
    remainder = dividend;
    while(remainder >= divisor){
        remainder -= divisor;
        quotient++;
    }
    cout << divisor << " goes into " << dividend << " " << quotient << " times with a remainder of " << remainder ;
  

    return 0;
}*/
//  QUESTION 12(VILLAGE ----> CITY)
/* 
#include <iostream>
using namespace std;
int main(){
    int population;
    double time = 0;
    double rate;
    cout << "Enter the current population of the village: ";
    cin >> population;
    cout << "Enter rate at which the village is growing every six months: ";
    cin >> rate;
    while(population <= 2000000){
        population *= (1+rate)
        time += 0.5;
    }
    cout << "It will take approximately " << time << " years for your village to be considered a city";

    return 0;
}*/
//  QUESTION 13(NEWTONIAN SQRT GUESS)
/*
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double new_guess,N,last_guess;
    cout << "Enter number who's square root is to be determined: ";
    cin >> N;
    cout << "Enter your guess of the square root: ";
    cin >> last_guess;
    new_guess = last_guess;
    do{
        last_guess=new_guess;
        new_guess = 0.5*(last_guess + N/last_guess);
    }
    while(fabs(last_guess-new_guess) > 0.0000001);
cout << "The approximate square root of " << N << " is " << new_guess;

    return 0;
}*/
//QUESTION 14(PERFECT,ABUNDANT AND DEFECIENT NUMBERS)
/* #include <iostream>
using namespace std;
int main(){
    int fact_sum = 0;
    int number;
    cout << "Enter number to be used for program: ";
    cin >> number;
    for(int i = 1;i < number/2;i++){
        if(number % i == 0){
            fact_sum += i;
        }
    }
    if(fact_sum < number){
        cout << number << " is a deficient number.";
    }
    else if(fact_sum > number){
        cout << number << " is an abundant number.";
    }
    else{
        cout << number << " is a perfect number.";
    }

    return 0;
}*/
// QUESTION 15(RUSSIAN PEASANT METHOD)
/*
#include <iostream>
using namespace std;
int main(){

    int product=0;
    int A,B;
    cout << "Enter value of first number: ";
    cin >> A;
    cout << "Enter value of second number: ";
    cin >> B;
    while(A >= 1){
        if(A % 2 == 1){
            product += B;
        }
    A /= 2;
    B *= 2;
    }
    cout << "The product of the two numbers is " << product ;

    return 0;
}*/
// QUESTION 16(AIRLINE DISTANCE COVERTER)
/* #include <iostream>
using namespace std;
int main(){
    //1 mile = 1760 yards = 5280 feet.
    //1 yard = 3 feet
    int distance,miles,yards,feet;
    cout << "Enter distance travelled in feet: ";
    cin >> distance;
    miles = distance / 5280;
    int milesrem = distance % 5280; //storing remainder of distance divided my miles in "milesrem" 
    yards = milesrem / 3;
    int yardrem = milesrem % 3;  //storing remainder of milesrem divided my yards in "yardrem"
    feet = yardrem;
    cout << "Distance travlled is ";
    if(miles > 0){
        if(miles == 1){
            cout << "1 mile ";} // accounting for sitaution if only 1 unit is calculated
        else{
            cout << miles << " miles ";
        }
    }
    if(yards > 0){
        if(yards == 1){
            cout << " 1 yard ";
        }
        else{
            cout << yards << " yards ";
        }
    }
    if(feet > 0){
        if(feet == 1){
            cout << "and 1 foot";
        }
        else{
            cout << "and " << feet << " feet";
        }
    }

    return 0;
}*/
// QUESTION 17(UNIVERSITY FEES)
/* #include <iostream>
using namespace std;
int main(){
    int cred_hours,total_fees = 700000,student_id; //7000000 because of the fixed cost
    char grad_stat,room_type;
    cout << "Enter student ID: ";
    cin >> student_id;
    while(student_id < 0 || student_id > 9999){ //as it was mentioned that student id must be 4 digits.
        cout << "Please input appropriate student ID number: ";
        cin >> student_id;
    }
    cout << "Enter number of credit hours: ";
    cin >> cred_hours;
    while(cred_hours < 15 || cred_hours > 21){ //prevent user from doing too many or less credit hours
        cout << "Credit hours per semester must be at least 15 hours and at most 21 hours.Enter accurate credit hours: ";
        cin >> cred_hours;
    }
    total_fees += (1000* cred_hours);
    cout << "Enter your graduation status(Y or N): ";
    cin >> grad_stat;
    if(grad_stat == 'Y' || grad_stat == 'y'){
        total_fees += 300000;
    }
    cout << "Enter your room type. 'A' for Airconditoned and 'R' for a regular room: ";
    cin >> room_type;
// Calculate fees based on room type
    while (room_type != 'A' && room_type != 'R') {
        cout << "Please enter appropriate room type ('A' or 'R'): ";
        cin >> room_type;
    }

    if (room_type == 'A') {
        total_fees += 1000000;
    } else if (room_type == 'R') {
        total_fees += 500000;
    }

    cout << "The total fees for the semester for student number " << student_id << " is " << total_fees << " cedis only.";

    return 0;
}*/

 // QUESTION 18(TRANSPORTATION FARE)
/* #include <iostream>
using namespace std;
int main(){
    int fare=2000,distance;
    cout << "Enter distance travelled in kilometers: ";
    cin >> distance;
    //using separate if loops beacuse of the nature of the question to make the code simplier.
    if(distance > 10 && distance <= 40){
        fare += (distance-10)*100;
    }
    if(distance > 40 && distance <= 150){
        fare += 3000 + (distance-40)*175;
    }
    if(distance > 150){
        fare += (distance-150)*50;
    }
    cout << "Your fare for travelling a distance of " << distance << " kilometers is " << fare << " cedis.";
    return 0;
}*/
//QUESTION 20(2D ARRAY)
/* #include <iostream> 
using namespace std;
int main(){

    int array[10][10];
    for(int i = 0;i<10;i++){
        for(int j = 0;j < 10;j++){
            array[i][j] = i * 10 + j;
            cout << array[i][j] << '\t'; // to vertically separate the numbers
        }
        cout << '\n'; // to horizontally separate each row
    }

    return 0;
}*/
//QUESTION 21(NUMERIC PALINDROME)
/* #include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter number to be turned into a numeric palindrome: ";
    cin >> number;
    long long palindrome = number;
    while(number > 0){
        int last_d = number % 10;
        palindrome = palindrome * 10 + last_d;
        number /= 10;
    }
    cout << "The palindrome is: " << palindrome;
//In C++, int is typically a 32-bit signed integer, which means it can store values between -2,147,483,648 and 2,147,483,647.
// hence the program above wont work for very large numbers(anything beyond 5 digits i think)
//To fix this issue, you can use a larger integer type, such as long long (64-bit signed integer), 
//which can store values between -9,223,372,036,854,775,808 and 9,223,372,036,854,775,807.
return 0;
}*/
// QUESTION 22(LARGEST NUM)
/* #include <iostream>
using namespace std;
int main(){

    int firstnum,n,largest, nextnum;
    cout << "enter first number: ";
    cin >> firstnum;
    largest = firstnum;
    cout << "Enter number of numbers remaining: ";
    cin >> n;
    for(int i = 1;i <= n;i++){
        cout << "Enter next number: ";
        cin >> nextnum;
        if(nextnum > largest){
            largest = nextnum;
        }
    }
cout << "The largest is " << largest;
system("pause>0") //to wait for user to press a key which will then close the console or terminate the program.
    return 0;
}*/
//CREDIT CARD VALIDATION. PERSONAL
/*

1. double every second digit from right to left. if doubled number
is 2 digits, spilt them
2. add all single digits from step 1
3.Add sll odd numbered digits from right to left
4. if step 4 is divisble by 10, # is valid
*/
//REVERSING A STRING INPUT
/* #include <iostream>
#include <string>

// --i is the pre-decrement operator whereas i-- is the post decrement operator
// --i changes the value before assigning whereas i-- assigns before chnaging. both have the same effect in a loop
int main(){

    std::string original;
    std::string reversed = "";
    std::cout << "Enter string to be reversed: ";
    std::getline(std::cin,original);
    for(int i = original.length() -1;i >= 0;i--){
        reversed += original[i];
    }
    std::cout << "The reversed string is " << reversed;

    return 0;
 }*/
//ROCK PAPER SCISSORS
/* #include <iostream>
#include <string>


char playerchoice();
char compchoice();
void showChoice(char player, char computer);
void chooseWinner(char player, char comp);

using namespace std;

int main(){

    char player = playerchoice();
    char computer = compchoice();
    showChoice(player, computer);
    chooseWinner(player, computer);
    
    return 0;
}

char playerchoice(){
    cout << "***********ROCK PAPER SCISSORS GAME************" << '\n';
    char player;
    do{
        cout << "Enter your choice for the game: " << endl;
        cout << "Choose p for paper.";
        cout << "\nChoose r for rock";
        cout << "\nChoose s for scissors." << endl;
        cout << "Your choice: ";
        cin >> player;
    }
    while(player != 'p' && player !='r' && player != 's');

    return player;
};
char compchoice(){
    srand(time(NULL));
    int comp = rand() % 3 + 1;
    switch(comp){
        case 1 : return 'r';
        case 2 : return 'p';
        case 3 : return 's';
    }

    return 'x';
}
void showChoice(char player,char computer){
    string Pchoice;
    if(player == 'p'){
        Pchoice = "Paper";
    }
    else if(player == 's'){
        Pchoice = "Scissors";
    }
    else{
        Pchoice = "Rock";
    }
    string Cchoice;
        if(player == 'p'){
        Cchoice = "Paper";
    }
    else if(player == 's'){
        Cchoice = "Scissors";
    }
    else{
        Cchoice = "Rock";
    }
    cout << "Your choice was: " << Pchoice<< "!\n";
    cout << "The computer choice was: " << Cchoice << "!\n";
};
void chooseWinner(char player, char comp){
    if(player == 'p'){
        switch(comp){
            case 'p': cout << "It was a draw!";
                break;
            case 'r': cout << "You win!";
                break;
            case 's': cout << "You lose!";
                break;
        }
    }
    else if(player == 'r'){
        switch(comp){
            case 'p': cout << "You lose!";
                break;
            case 'r': cout << "It was a tie!";
                break;
            case 's': cout << "You win!";
                break;
        }
    }
    else{
        switch(comp){
            case 'p': cout << "You win!";
                break;
            case 'r': cout << "You lose!";
                break;
            case 's': cout << "It was a draw!";
                break;
        }
    }
}*/

