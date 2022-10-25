#ifndef VALVESTATES_H
#define VALVESTATES_H

// defines the possible valve states accross all valves

enum class ValveCommandState
{
    CloseCommanded,                     // 0
    OpenCommanded,                      // 1
    FireSequenceCloseCommanded,         // 3
    FireSequenceOpenCommanded,          // 4
    BangCloseCommanded,                 // 5
    BangOpenCommanded,                  // 6
    NullReturn,                         // 7
    ValveState_SIZE,                    // 8
};

enum class ValveState
{
    Closed,             // 0
    Open,               // 1
    CloseProcess,       // 2
    OpenProcess,        // 3
    FireSequenceClose,  // 4
    FireSequenceOpen,   // 5
    BangCloseProcess,   // 6
    BangOpenProcess,    // 7
    BangingClosed,      // 8
    BangingOpen,        // 9
    NullReturn,         // 10
    ValveState_SIZE,    // 11
};

//old combined all states version
/* enum class ValveState
{
    Closed,             // 0
    Open,               // 1
    FireCommanded,      // 2
    OpenCommanded,      // 3
    CloseCommanded,     // 4
    OpenProcess,        // 5
    CloseProcess,       // 6
    BangOpenCommanded,  // 7
    BangCloseCommanded, // 8
    BangOpenProcess,    // 9
    BangCloseProcess,   // 10
    BangingOpen,        // 11
    BangingClosed,      // 12
    NullReturn,         // 13
    ValveState_SIZE,    // 14
};
 */

// detected states based on measuring the ADC channel on ALARA HP outputs - Not using yet, unsure what states I want here
enum class ValveElectricalOutputState
{
    Off,
    On,
    NoContinuity,
};

#endif