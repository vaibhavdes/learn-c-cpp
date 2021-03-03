# learn-c-cpp

#Update (2020)
Learn to Code (Language & Framework) on Instagram
Follow Me : www.instagram.com/vaibhavkurkute


Learn C and C++ ( Basics to Advance )

Session Start Date : 20 / 01 / 2020

Recommended For CDAC-CCAT Preparation.


How to Execute C Program ?

Use Online Compiler : https://www.tutorialspoint.com/compile_c_online.php
1) On Linux


  #Command for to Create a File with Extension .c
  vi HelloWorld.c
  
  //Enter Your Code and Press escape key and type :wqa (with colon)
  
  #Command to Compile the Code
   gcc –o HelloWorld.out HelloWorld.c
   
  #Command to Run the Code
  ./HelloWorld.out
  
  
   OR (Try Below Series of Command to Know Complete Execution Process Also View the Files Generated at Each Step)

  #Command for Generating expanded source code
  gcc –E –o HelloWorld.i HelloWorld.c
  
  #Command for Generating assembly language code
  gcc –S HelloWorld.c
  
  #Command for Generating object code
  gcc –c HelloWorld.c

  #Command for Generating object code
  gcc –o HelloWorld.out HelloWorld.o

  #Command to Run the Code
  ./HelloWorld.out
  
