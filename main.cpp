#include "AirHockeyHeader.h"

int main()
{
	VideoCapture cap(0);

	if (!cap.isOpened())
	{
		printf("Camera Not Active. Press Enter to terminate.\n");
		waitKey(0);
		return -1;
	}

	Mat frame;
	while (1)
	{
		if (!cap.read(frame))
		{
			printf("Cannot Read from the Camera. Press Enter to terminate.\n");
			waitKey(0);
			break;
		}

		imshow("Output", frame);
		waitKey(10);

		if (waitKey(10) == 27)
			break;
	}

	waitKey(0);
	return 1;
}