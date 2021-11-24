// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/JackingSubsystem.h"
using namespace JackConstants;

JackingSubsystem::JackingSubsystem() : m_jackSolenoid{kJackSolenoidPorts[0], kJackSolenoidPorts[1]} {}

void JackingSubsystem::RaiseJack() {
  m_jackSolenoid.Set(frc::DoubleSolenoid::kForward);
}

void JackingSubsystem::LowerJack() {
  m_jackSolenoid.Set(frc::DoubleSolenoid::kReverse);
}
// This method will be called once per scheduler run
void JackingSubsystem::Periodic() {}
