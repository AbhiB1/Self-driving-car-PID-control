#include "PID.h"

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {
  p_error = 0.0;
  i_error = 0.0;
  d_error = 0.0;
  cte_old = 0.0;
}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */

	Kp = Kp_;
	Ki = Ki_;
	Kd = Kd_;
}

void PID::UpdateError(double cte) {
  /**
   * TODO: Update PID errors based on cte.
   */
   d_error = Kd * cte - Kd * cte_old;
   p_error  = Kp * cte;
   i_error += (Ki * cte);
   cte_old = cte;
}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */
  return - p_error - i_error - d_error;  // TODO: Add your total error calc here!
}