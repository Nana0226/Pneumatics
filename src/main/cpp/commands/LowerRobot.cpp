// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/LowerRobot.h"

LowerRobot::LowerRobot(JackingSubsystem* subsystem) : m_jack(subsystem){
  // Use addRequirements() here to declare subsystem dependencies.
AddRequirements({subsystem});
}

// Called when the command is initially scheduled.
void LowerRobot::Initialize() {
m_jack->LowerJack();
}



// Returns true when the command should end.
bool LowerRobot::IsFinished() {
  return true;
}
