#include<iostream>
#include<windows.h>
static bool running = true;   // check if window tab is running
bool platform_create_window(int width, int height, char* title); // platform functions


#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#define NOMINNMAX
#endif


using namespace std;

 //Platform implementation
 bool platform_create_windows(int width, int height, char* title) {
	HINSTANCE isntance = getModuleA(0);`	
 }


int main() {
	platform_create_window(1200, 720, "Window tab test");

	while(running){
		// update window tab
	}

	return  0;
}
