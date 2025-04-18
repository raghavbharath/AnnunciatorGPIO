﻿# AnnunciatorGPIO

A maple syrup factory in Vermont has a problem. They have a holding tank that stores their
product that overflows from time-to-time. When this happens, an operator in a remote monitoring room
is sent to clean up the mess. They have asked you group to implement an “Annunciator” system to
monitor the holding tank and report its status to the operator in the monitoring room. The system has
two objectives, to notify the operator when the tank is near full (so they can manually turn off the fill
valve), then to notify the operator when the tank has over flown (so they can be sent to clean it up).

There are 4 input to the system. There are two level switches in the tank, full level alarm (FLA)
and overflow level alarm (OLA). On the Annunciator box in the control room, there are two momentary
push buttons, acknowledge (ACK) and test (TST).

On the Annunciator box, there are 3 outputs from the system, a green ok indicator, a yellow full
indicator and a red overflow indicator. The system has 6 states as shown in Figure 7.







![Image](https://github.com/user-attachments/assets/ca6055ba-b89a-4e10-a26f-e9fcc4186f9e)

![Image](https://github.com/user-attachments/assets/263f97a4-9f27-4aa0-a500-c3b57ccd9a0f)



