// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/RaiseRobot.h"

RaiseRobot::RaiseRobot(JackingSubsystem* subsystem) : m_jack(subsystem) {
  AddRequirements({subsystem});
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
void RaiseRobot::Initialize() {
  m_jack ->RaiseJack();
}

// Returns true when the command should end.
bool RaiseRobot::IsFinished() {
  return true;
}
