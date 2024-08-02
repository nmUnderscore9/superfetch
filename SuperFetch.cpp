#include<iostream> //Enables support for you to be able to display and recieve input
#include<stdlib.h> //Enables support of enviorment variable support programatically
#include<fstream> //Enables support of reading & writing files
/*
 Feel free to customise anything you like but please credit me if you decide to make any changes to this in fact as long as you credit me I will not require you to publish the source code of your potential finished product that hypothetically uses code of "Superfetch"
 */
int main(){
	const char* CREDITS[] = {"nm_9",NULL};
	bool ALLOW_CREDITS = false;
	const char* ASCII_FILE_LOCATION = "ascii"; //Please specify another directory if you don't plan on running Superfetch from the same directory each time
	bool CLEAR_SCREEN_ON_STARTUP = false; //Wipes all content from screen
	bool HAS_EMOJIS = false; //If you have emojis in your terminal then I strongly recommend you enabling this and if you have emoji support and it doesn't work then simply install the SF-Mono font
	const char* DISTRO_COLOR = "cyan"; //Pretty obvious it allows you to change the color code of the ascii
	bool ALLOW_BOLD_TEXT = true; //If set to false it will create more boring text
	const char* RUN_BASH_SCRIPT_ON_STARTUP = NULL; //Simply define a bash script you want to be executed upon program execution
	if(RUN_BASH_SCRIPT_ON_STARTUP != NULL){
		system(RUN_BASH_SCRIPT_ON_STARTUP);
	}
	if(CLEAR_SCREEN_ON_STARTUP == true){
		std::cout << "\033c"; //Clears screen if you had the 'CLEAR_SCREEN_ON_STARTUP' option enabled
	}
	if(ALLOW_BOLD_TEXT){
	std::cout << "\033[1m"; //Enables bold text
	}
	std::cout << "\n"; //Defines newline on startup of program
	std::string ascii_content; //Defines variable of where the ascii value will be stored
		
       	std::ifstream file1 (ASCII_FILE_LOCATION); //Opens ascii in the specified file location mentioned in the variable "ASCII_FILE_LOCATION"
	while(getline(file1,ascii_content)){
		if(DISTRO_COLOR == "cyan"){
			std::cout << "\033[36m"; //Sets distro color to cyan
			std::cout << ascii_content << "\n"; //Displays ascii
			
		}
		if(DISTRO_COLOR == "red"){
			std::cout << "\033[31m"; //Sets distro color to red
			std::cout << ascii_content << "\n"; //Displays ascii
		}
		if(DISTRO_COLOR == "yellow"){
			std::cout << "\033[33m"; //Sets distro color to yellow
			std::cout << ascii_content << "\n"; //Displays ascii
		}
		if(DISTRO_COLOR == "blue"){
			std::cout << "\033[34m"; //Sets distro color to blue
			std::cout << ascii_content << "\n";
		}
		if(DISTRO_COLOR == "purple"){
			std::cout << "\033[35m"; //Sets distro color to purple
			std::cout << ascii_content << "\n";
		}
		if(DISTRO_COLOR == "green"){
			std::cout << "\033[33m"; //Sets distro color to green
			std::cout << ascii_content << "\n";
		}
	}
	std::string power_status_content; //Defines the variable where the battery percentage value will be stored
	std::string operating_system; //Defines the variable where the operating system value will be stored
	const char* seperator = ": "; //Defines seperator character
	const char* term = getenv("TERM"); //Maps 'term' to '$TERM' enviorment variable
	const char* username = getenv("USER"); //Maps 'username' to '$USER' enviorment variable
	const char* shell = getenv("SHELL"); //Maps 'shell' to '$SHELL' enviorment variable
	const char* lang = getenv("LANG"); //Maps 'lang' to '$LANG' enviorment variable
	std::ifstream file2("/proc/version"); //Searches for file containing battery percentage and opens it if avaliable
	while(getline(file2,operating_system)){
		if(HAS_EMOJIS == false){
		std::cout << "\n\033[36mOS\033[39m" << seperator << operating_system[14] << operating_system[15] << operating_system[16] << operating_system[17] << operating_system[18] << operating_system[19] << operating_system[20] << operating_system[21] << operating_system[22] << operating_system[23] << operating_system[24] << operating_system[25] << operating_system[26] << operating_system[27]  << "\n"; //Couldn't find an easier way to do it but it grabs part of the operating_system string because the full one is quite long!

}

else{
		std::cout << "\n\033[36mOS\033[39m" << seperator << operating_system[14] << operating_system[15] << operating_system[16] << operating_system[17] << operating_system[18] << operating_system[19] << operating_system[20] << operating_system[21] << operating_system[22] << operating_system[23] << operating_system[24] << operating_system[25] << operating_system[26] << operating_system[27]  << "\n"; //Couldn't find an easier way to do it but it grabs part of the operating_system string because the full one is quite long!


}
			}
		if(HAS_EMOJIS == true){

		std::cout << "\033[36mUser\033[39m" << seperator << username << "\n"; //Displays the contents of the username variable 
		std::cout << "\033[36mTerminal\033[39m" << seperator << term << "\n"; //Displays the contents of the term variable
		std::cout << "\033[36mShell\033[39m" << seperator << shell << "\n"; //Displays the contents of the shell variable
		std::cout << "\033[36mLanguage\033[39m" << seperator << lang << "\n"; //Displays the contents of the lang variable
		std::ifstream file3("/sys/class/power_supply/BAT0/capacity"); //Searches for file containing battery percentage and opens it if avaliable
	while(getline(file3,power_status_content)){
			std::cout << "\033[36m󰁹Battery\033[39m" << seperator << power_status_content << "%\n"; //Displays battery percentage from the file
	}
			
			std::cout << "\033[0m"; //Sets color back to default
			file1.close(); //Frees file from memory
			file2.close(); //Frees file from memory
			file3.close(); //Frees file from memory
			if(ALLOW_CREDITS == true){
				if(CREDITS[1] == NULL){
					std::cout << "Love from nm_9 <3\n";
					return 0; //Returns exit code of 0
				}
				std::cout << "Love from " << CREDITS[0] << " & " << CREDITS[1] << " <3\n";
			}
			return 0; //Returns exit code of 0
		}
		std::cout << "\033[36mUser\033[39m" << seperator << username << "\n"; //Displays the contents of the username variable 
		std::cout << "\033[36mTerminal\033[39m" << seperator << term << "\n"; //Displays the contents of the term variable
		std::cout << "\033[36mShell\033[39m" << seperator << shell << "\n"; //Displays the contents of the shell variable
		std::cout << "\033[36mLanguage\033[39m" << seperator << lang << "\n"; //Displays the contents of the lang variable
		std::ifstream file3("/sys/class/power_supply/BAT0/capacity"); //Searches for file containing battery percentage and opens it if avaliable
	while(getline(file3,power_status_content)){
			std::cout << "\033[36mBattery\033[39m" << seperator << power_status_content << "%\n"; //Displays battery percentage from the file

	} 
			
		
	std::cout << "\033[0m"; //Sets text color to default
	file1.close(); //Frees file from memory
	file2.close(); //Frees file from memory				
	file3.close(); //Frees file from memory
	if(ALLOW_CREDITS == true){
		if(CREDITS[1] == NULL){
			std::cout << "Love from nm_9 <3\n";
			return 0; //Returns exit code of 0
		}
		std::cout << "Love from  " << CREDITS[0] << " & " << CREDITS[1] << " <3\n";
	}
	return 0; //Returns exit code of 0																																	      
	
	

	
	
}
