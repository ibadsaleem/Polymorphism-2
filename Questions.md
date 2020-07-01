Exercises:
(Programming in the General) How is it that polymorphism enables you to program “in the general” rather than “in the specific”? Discuss the key advantages of programming “in the general.”
(Polymorphism vs. switch logic) Discuss the problems of programming with switch logic. Explain why polymorphism can be an effective alternative to using switch logic.

1. Create a Message class with a constructor that takes a single string with a default value.
Create a private member string, and in the constructor simply assign the argument string to your internal string.
Create two overloaded member functions called print( ): one that takes no arguments and simply prints the message stored in the object,
and one that takes a string argument, which it prints in addition to the internal message.

2. Write a program to find the area of a rectangle by passing length and breadth as arguments after creating member
function in both derived and base class with the same name by technique of function overriding.

3. Create a base class area of shape having two parameters (a,b) which can be overloaded in
derived class in rectangle and square. Create a class to print the area of a square and a rectangle.
The class has two methods with the same name but different number of parameters. The method for printing area of rectangle
has two parameters which are length and breadth respectively while the other method for printing area of square has one parameter
which is side of square.

4. A boy has his money deposited $1000, $1500 and $2000 in banks-Bank A, Bank B and Bank C respectively.
We have to print the money deposited by bank. Create a class 'Bank' with a method 'getBalance' which returns 0. 
Make its three subclasses named 'BankA', 'BankB' and 'BankC' with a method with the same name 'getBalance' which 
returns the amount deposited in that particular bank. Call the method 'getBalance' by the object of each of the three banks.
