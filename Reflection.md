PID Control
PID control stands for proportional (P), integral (I) and derivative (D).  
When trying to achieve a set goal and the perceived values are away from the set goal, the system needs a way to correct.  And a PID controller helps us achieve this.
The simple loop of doing this is shown in the image below in the PID_Image in the file system. The image is taken from https://www.csimn.com/CSI_pages/PIDforDummies.html.

 

In the context of autonomous driving, P and I helps steer.  P helps steer proportional to the crosstrack error and I helps if the error is sustained error due to systematic bias.  D helps to counter the steer to avoid overshooting.
The ranges of P, I and D are (.001, 0.5), (0, 0.2) and (0, 5.0) respectively.

As can be seen from the ranges, P needs to be used in all situations, combinations of PI or PID can sometimes be avoided.  The current value used in the project were arrived at by trial and error.  Although, there were other values that also gave successful outcome, the current values were used for completing the project because they seem to give the most qualitative outcome.
