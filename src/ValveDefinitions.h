#ifndef VALVEDEFINITIONS_H
#define VALVEDEFINITIONS_H

#include "ValveClass.h"
#include <array>
#include "ALARApinDefines.h"
#pragma once

// Default valve configs - to generally be overridden from nonvolatile config memory read but need as a base/backup setting
ValveConfig defaultValveConfig{NormalClosed, 25000, 256, 50};
ValveConfig loxVentNOValveConfig{NormalOpen, 100000, 256, 50};

// Valve definitions by propulsion system - set by build target when compiling

#ifdef PASABANG
// Define number of valves here
#define NUM_VALVES 7
// Declare all Valve Objects here using ValveClass, and add them to the valveArray
// On Pasafire Node
Valve HiPressVent{17, 8, 6, defaultValveConfig};
Valve LoxMV{24, 8, 8, defaultValveConfig};
Valve FuelMV{25, 8, 5, defaultValveConfig};
Valve LoxVent{18, 8, 1, defaultValveConfig};
Valve LoxBang{19, 8, 2, loxVentNOValveConfig};
Valve FuelVent{21, 8, 4, defaultValveConfig};
Valve FuelBang{22, 8, 3, defaultValveConfig};
// ADD VALVES TO THIS VALVE ARRAY IN THE FORM: &VALVE
std::array<Valve*, NUM_VALVES> valveArray{&HiPressVent, &LoxMV, &FuelMV, &LoxVent, &LoxBang, &FuelVent, &FuelBang};
#endif

#ifdef RENEGADESF
// Define number of valves here
#define NUM_VALVES 10
// Declare all Valve Objects here using ValveClass, and add them to the valveArray
// On Renegade SF Engine Node
Valve HiPress{16, 2, 1, defaultValveConfig};
Valve HiPressVent{17, 2, 2, defaultValveConfig};
Valve LoxMV{24, 2, 4, defaultValveConfig};
Valve FuelMV{25, 2, 3, defaultValveConfig};
// On Renegade SF Prop Node
Valve LoxVent{18, 3, 1, loxVentNOValveConfig};
Valve LoxDomeReg{19, 3, 3, defaultValveConfig};
Valve LoxDomeRegVent{20, 3, 4, defaultValveConfig};
Valve FuelVent{21, 3, 5, defaultValveConfig};
Valve FuelDomeReg{22, 3, 7, defaultValveConfig};
Valve FuelDomeRegVent{23, 3, 8, defaultValveConfig};
// ADD VALVES TO THIS VALVE ARRAY IN THE FORM: &VALVE
std::array<Valve*, NUM_VALVES> valveArray{&HiPress, &HiPressVent, &LoxMV, &FuelMV, &LoxVent, &LoxDomeReg, &LoxDomeRegVent, &FuelVent, &FuelDomeReg, &FuelDomeRegVent};
#endif

#endif