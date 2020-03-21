README

  This project is a free C++ learning tool addressed to complete beginners. 
  The purpose of this project is to give you a basic understanding of the main
  features of the C++ 11 language. By following this tutorial you will not
  suddenly become an expert programmer. You stiil need a lot of practice
  and reading about the finer details of the language.
  
  Talking about the code style, different programmers have different styles,
  sometimes creating huge conflicts when a new person joins a team. This project
  is written in my style. It is by no means better or worse than other styles,
  it is just my current style. You can choose to write your code however you want,
  the compiler doesn't care much about code styles. One thing I would ask you,
  whatever style you choose, be consistent. Have the same style everywhere, as 
  much as possible, and try to be practical, not just produce "beautiful code".
  
CONTACT
  If you have any problems, questions, ideas or suggestions please contact me
  at the following email address: fatal_brain_storm@yahoo.com

PREREQUIRES
  This project will require a some software installed in order to run properly.
  You will find all the necessare items in the installation section.
  
  Depending on your operating system the installation might differ, as well
  as the IDE (integrated development environment) if you choose to use one.
  
INSTALLATION
  1) terminal - is a text based window that will allow you to interract with
	your operation system by issuing text commands; it is a powerful tool
	for programmers and system administrators who want to descipher the 
	misteries of their computers;
	Luckly you don't need to install this tool. Your operating system already has it;
	
	In Windows press Start and type Command Prompt.
	In MacOS search your programs for Terminal.
	In Linux, same as MacOS or use the shortcut Ctrl + Alt + T
	
	It's a good idea to familiarise yourself with the basic commands in your terminal.
	
	In Windows use "cd dir_name" to navigate to your dir_name and "D:", "C:" to navigate disks.
	To make a directory in your current location, use the "mkdir name" command; more information
	on the internet;
	
	The Windows command prompt and MacOS / Linux terminal have slightly different commands,
	so be careful to check your terminal's documentation.
	
	Useful links:
	https://www.thomas-krenn.com/en/wiki/Cmd_commands_under_Windows
	https://www.ubuntupit.com/best-linux-commands-to-run-in-the-terminal/

  2) git - is a software sued for code versioning; we will use it to download
		and keep the project up to date;
	Download link: https://git-scm.com/downloads
  Google search for the latest version of git and follow the install instructions;
  To download the project open a terminat or command promt, navigate to an appropriate
  directory and use the command
  
  git clone https://github.com/ciprian1000/EDU.git EDU
  
  This will download all the files in a subdirectory called EDU.
  
  To update the project when there are changes, navigate inside EDU and use the
  following command:
  
  git pull
  
  git is a widely used software and you can find a lot of documentation and 
  examples if you get stuck. You can also install a visual git client in
  order to avoid using the terminal; if you wanto to go this way, my reccommandation
  would be SmartGit.
  
  3) An IDE is a very useful development tool; on Windows I reccommend Visual Studio
  latest version. There are free versions used for non commercial purpose on the 
  Microsoft website; installing one of these will also get you the latest compiler.
  
  or
  
  any modern C++ compiler; on Linux you might want to go hardcore and compiler
  everything from the terminal; In this case install the GCC or CLang compilers
  and have fun;
  
  Download link for Visual Studio: https://visualstudio.microsoft.com/downloads/
  
  4) cmake is a cross-platform build manager tool that can be used to create the project
  for your favorite IDE or make files to run make on this project.
  
  Download link: https://cmake.org/download/
  
  Google search for the latest cmake and install it on your computer;
  
  To verify that you have correctly installed the software, you can open a terminal
  and run the command:
  
  cmake --version
  
  This will throw an error if your software was not installed.
  
  In a terminal navigate to the EDU folder and create a new directory (a good practice
  when dealing with cmake). "mkdir solution" then "cd solution".
  Use cmake to generate a solution for your installed IDE:
  
  cmake -G "Visual Studio 15 2017" ..
  
  This example will generate a Visual Studio 2017 solution. There are many generators
  that you can use.
  
  cmake -G "Xcode" ..
  
  This one will generate an XCode project.
  For more information go to https://cmake.org/cmake/help/v3.17/manual/cmake-generators.7.html
  and check your exact IDE version.
  
  The sintax is:
  cmake -G "generator name" ..
  
  The .. is the location of the CMakeLists.txt file (that is the input for cmake) and it means
  one level before (outside the solution folder). All the CMake files will be provided in the git
  repository and you only need to run the cmake command once every project update. 
  
  This means that if you have project updates from git, you need to re-run the cmake command.
  This can be done either incrementally, or remove the contents of the solution folder and run again.
  When done incrementally (without removing solution) some IDE's will ask you to reload the solution
  (and you should say yes), while others won't and you will need to close the solution / project
  and open it again. Visual Studio is ok on this and you will have the option to reload 
  the solution whenthere are changes to it.
  
  After you open the project in the IDE, I suggest you follow the lessons in the right order
  (1, 2, 3...) and don't skip the exercises. In fact, I suggest that you play around with the lesson
  materials until you are confortable with it. Once a lesson is presented, we're going to come back
  to it only to add more details. So it's important to understand the base.
  
  The lessons are meant to be incremental, I will try not to use concepts that were not presented
  in a previous lesson; however there will be some times when this is not possible; these exceptions
  will be clearly marked with a comment.
  