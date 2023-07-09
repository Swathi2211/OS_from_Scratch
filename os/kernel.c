#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
void kmain()
{
       clearScreen();
       print("Hey, This is Swathi And Maha's first kernel!\n\nWelcome to New OS\n\nPlease enter a command\n\n\nEnter the Password\n");
       while (1)
       {
                print("\nNIDOS> ");
                
                string ch = readStr();
                
                if(strEql(ch,"student"))
                {
                	print("\n\n\nWelcome STUDENT...\n\n\n\n");
                	
                        
                }
       
                else
                {
                        print("\n\n\nOh No.. Incorrect Password!\n\n\n");
                }
                
                print("\n");        
       }
        
}
