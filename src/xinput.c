#include "lr35902.h"
#include "Xinput.h"
#include <stdio.h>

void thread_xinput()
{
	XINPUT_KEYSTROKE xbox_keystroke;
	uint16_t xbox_key;

	XInputEnable(true);

	while (true)
	{
		xbox_key = 0;

		XInputGetKeystroke(0, 0, &xbox_keystroke);

		if (xbox_keystroke.Flags & XINPUT_KEYSTROKE_KEYDOWN)
		{
			xbox_key = xbox_keystroke.VirtualKey;

			switch (xbox_key)
			{
			case VK_PAD_A:
				printf("A\n");
				break;
			case VK_PAD_B:
				printf("B\n");
				break;
			case VK_PAD_LTHUMB_UP:
				printf("UP\n");
				break;
			case VK_PAD_LTHUMB_DOWN:
				printf("DOWN\n");
				break;
			case VK_PAD_LTHUMB_LEFT:
				printf("LEFT\n");
				break;
			case VK_PAD_LTHUMB_RIGHT:
				printf("RIGHT\n");
				break;
			case VK_PAD_START:
				printf("START\n");
				break;
			case VK_PAD_BACK:
				printf("SELECT\n");
				break;
			}
		}
	}
}