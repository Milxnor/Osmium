#include "curl.h"
#include "framework.h"
#include "globals.h"
#include "native.h"
#include "World.h"

using namespace osmium;

using namespace SDK;

void WINAPI dllMain()
{
	Util::InitConsole();

	printf("LogOsmium: Init!\n");

	cURL* cURLHook = new cURL;

	while (true)
	{	
		if (isReady) Native::Init();
		
		// Run the thread at 30 frames a second.
		Sleep(1000 / 30);
	}
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
		CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(&dllMain), nullptr, 0, nullptr);

	else if (dwReason == DLL_PROCESS_DETACH) FreeLibraryAndExitThread(hModule, EXIT_SUCCESS);

	return TRUE;
}
