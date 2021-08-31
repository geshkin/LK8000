/*
 * LK8000 Tactical Flight Computer -  WWW.LK8000.IT
 * Released under GNU/GPL License v.2 or later
 * See CREDITS.TXT file for authors and copyrights
 *
 * File: devDigifly.h
 */

#ifndef DEVDIGIFLY_H
#define DEVDIGIFLY_H

#include "Devices/DeviceRegister.h"

void DigiflyInstall(PDeviceDescriptor_t d);

inline constexpr
DeviceRegister_t DigiflyRegister(void) {
  constexpr unsigned flags = (1l << dfGPS) | (1l << dfBaroAlt) | (1l << dfSpeed) | (1l << dfVario);
  return devRegister(_T("Digifly"), flags, DigiflyInstall);
}

#endif
