# Gaming-Zone

## Introduction:

This Project allows the gaming zone in the region to maintain their systems like never before. The core concept of this project is to modernize the gaming zones according to the modern era. It will allow the Gaming zone Management to operate the system on the specified machine to digitalize the record which will also help the operators to successfully manage the record for the whole month & to the time limit accessible. The operator can also deal with the customers effectively in the rush hours.

The system will also keep track of the record of the available PCs & Consoles to the operator for full tracking purposes & to inform the customers about the availability of their required gaming PC or Console. This will also allow the Operator to keep track of the system that is going to be free nearby & which PC is being in use for which Customer for How long. The admin has the right to add or remove a user account & can also change the operator account password. The security level is maintained in that phase that the password for admin cannot be changed by anyone else


## Solution:

I designed different classes to perform batches of work on their own with their own internal functionalities, I'm gonna explain these main classes here:


#### Login and SignUp Functions:
Implemented signup and login classes that are the base of the program, by which you can add yourself to be a part of over gaming community, where you log in as a member. and for signup as a new user, we just ask for basic info that is being stored in a text file, and for securing your password we convert to static form.  by the help of getch() function in a loop. and there are 3 other choices, sign up as a new user, Search Your details, and Update data. 

#### Search Detail:
In search details, we just ask for Your name and that is compared with the sign-up file if your Name is Present, we just pop up your Basic details that are being asked at the start of the program. if your name is not stored as a member, we show a simple message that your name is not there, and for that, I also use a vector function that holds one string and one de-limiter that breaks your info according to de-limiter from the file and for holding return values or strings we need to create a dynamic memory and only vector support's dynamic memory. and I also use a template function that is being used for code reusability.

#### Play Game Class:
In Play Game class many functions relate to each other first you are given two options, 1. play game, and second, search players' info ;
in the play game function, you are asked about ID. it means whether You are a user or not if you are a user then game charges are at least 250, if you are not a user then first you  have to make your ID, by inputting your username, after that, you have two choices left that you want to play PC Game or Console Game if You select any game on backhand it goes to file that stores Your name, Game name, and charges there is a function like Pc_member(); Co_member() it means Console game member these both are in defined in disp_game_for_user(); and your all data is being stored in binary files, gameuser.dat file is storing a name and charges and game name that you selects while playing a game

#### Specification Class:
In this class, I work to fill the data Of New games as well as update the Data of old games with new rules, Features, options to play, and also prices. If we have to add a New game in the gaming zone we will Add that game by only asking for main Inputs for that which will be used In playing the game. I created Binary Files for these to protect and make Our data secure from others. I also add a delete function to delete Specific games with their details from Our file. Moreover, we also Have a function that shows specifications which will show The current data of the gaming zone to show The details of games that we need to know. Last, I created a specific menu for these features Means updating data, deleting data, adding new Games, and showing data.

#### Gaming Machine Class:
I created another class because If we have a gaming zone then we have to contain Good quality products in our gaming zone. so for that, we have a class with different functions to Manage these things. Gaming Machine class has Functions to store the data of Computers means (data Look like, CPU, mouse, keyboard, etc. In Cpu, We will ask to add the processor, graphic card, electricity Supplier, fan, memory storage, Model, Size of Display, and their prices as well as their Manufacturers.

#### PS4 Class:
The Functions of this class are the same as the gaming machine class. functions like deleting specific data, updating some products and their prices, and other features, functions to show the details of PS4 Features PS4 class has its model and type as well as colors and this is the thing which can be used by Players to play their desirable game with PS4 or by Game Machine (Computer).
