// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "RobotContainer.h"
#include <frc2/command/button/JoystickButton.h>

#include "commands/RaiseRobot.h"
#include "commands/LowerRobot.h"

RobotContainer::RobotContainer() : m_autonomousCommand(&m_subsystem) {
  // Initialize all of your commands and subsystems here

  // Configure the button bindings
  ConfigureButtonBindings();
}

frc2::Command* RobotContainer::GetAutonomousCommand() {
  // An example command will be run in autonomous
  return &m_autonomousCommand;
}

void RobotContainer::ConfigureButtonBindings() {
  // Configure your button bindings here

  // NOTE: Using `new` here will leak these commands if they are ever no longer
  // needed. This is usually a non-issue as button-bindings tend to be permanent
  // - however, if you wish to avoid this, the commands should be
  // stack-allocated and declared as members of RobotContainer.

  // Grab the hatch when the 'A' button is pressed.
  frc2::JoystickButton(&m_driverController, 1)
      .WhenPressed(new LowerRobot(&m_jackingSubsystem));
  // Release the hatch when the 'B' button is pressed.
  frc2::JoystickButton(&m_driverController, 2)
      .WhenPressed(new RaiseRobot(&m_jackingSubsystem));
  // While holding the shoulder button, drive at half speed
  //frc2::JoystickButton(&m_driverController, 6)
   //   .WhenHeld(new HalveDriveSpeed(&m_drive));
}