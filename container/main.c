#include <stdio.h>
#include <string.h>

int main () {
   char command[50];

   strcpy( command, "cmd /k setup.cmd" );
   system(command);

   return(0);
}
