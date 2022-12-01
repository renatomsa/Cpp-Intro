# Cpp-Intro
Very First introduction to C++

### C++ Introduction
- C++ (pronounced "C plus plus") is a high-level general-purpose programming language created by Danish computer scientist Bjarne Stroustrup. It's a superset of C language;
- A compiler is needed in order to run C++ codes;
- The C++ compiler generally ignores whitespace, with a few minor exceptions (when processing text literals);
- It's a strongly typed language;

### C++ variables
- ```int``` : integers;
- ``` double ``` : floating-point numbers;
- ``` char ``` : individual characters;
- ``` string ``` : sequence of characters;
- ``` bool ``` : true/false;

### Initializing the app
- When we come across C/C++ languages we can observe a common initial function that means where the program starts.
```
int main()
 {

    // code
    // code

    return 0;
} 
```
- On the above code, we can see that the function ```main()``` is the starting point of our application. The ```return 0;``` statement is used to return a value to the operating system. The value 0 means that the program ran successfully.
- One of the most important things to know is that the ```main()``` function must return an integer value. If we don't return any value, the compiler will throw an error.
- The ```main()``` function can also return a value other than 0. For example, if we want to return 1, we can write ```return 1;```. This means that the program ran successfully but with some errors.
- To run the code, we need to compile it first. We can use the following command to compile the code:
```g++ main.cpp -o main```
- The ```-o``` flag is used to specify the name of the output file. In this case, the output file will be named ```main```.
- After compiling the code, we can run it by typing the following command:
```./main```
- The ```./``` is used to specify the current directory. If we don't use it, the operating system will search for the file in the system directories.
 
