/*

    Basic Anti-Debugging Script
        How does it work?
    
    1. Uses assembly (x86) to find the PEB (Process Enviorment Block)
    2. Then we find the value for the BeingDebugged value
    3. If true then we flag the program as being debugged and exit

    Pretty simple, though people can get around this quite easily,
    if they know what they're doing, it's a nice little script you can make to 
    learn more about the TEB/PEB since they are often used in Malware Development

*/

#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

extern BYTE IsBeingDebuggedQuestionMark(void);

int main() {

    // ------------------------------------------------------------------------------- //

    if (IsBeingDebuggedQuestionMark()) {
        printf("[-] Sorry blud you can't be debugging my mal- uh i mean my program");
        return -1;
    } 
    
    // ------------------------------------------------------------------------------- //

    printf("*hacks the mainframe*");
    return 0;
}
