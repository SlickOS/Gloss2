#pragma once

#include <stdint.h>

namespace Device {
    class Keyboard {
    public:
        enum class KeyCode {
            Null =              0x000,

            Down_LShift =       0x001,
            Down_RShift =       0x002,
            Down_LCtrl =        0x003,
            Down_RCtrl =        0x004,
            Down_LAlt =         0x005,
            Down_RAlt =         0x006,
            Down_LMeta =        0x007,
            Down_RMeta =        0x008,
            Down_LSuper =       0x009,
            Down_RSuper =       0x00A,
            Down_LHyper =       0x00B,
            Down_RHyper =       0x00C,
            Down_CapsLock =     0x00D,
            Down_Tab =          0x00E,
            Down_Backspace =    0x00F,
            Down_Enter =        0x010,
            Down_Delete =       0x011,
            Down_Home =         0x012,
            Down_End =          0x013,
            Down_PageUp =       0x014,
            Down_PageDown =     0x015,
            Down_Insert =       0x016,
            Down_PrintScreen =  0x017,
            Down_Pause =        0x018,
            Down_Power =        0x019,
            Down_Sleep =        0x01A,
            Down_Wake =         0x01B,
            Down_F1 =           0x01C,
            Down_F2 =           0x01D,
            Down_F3 =           0x01E,
            Down_F4 =           0x01F,
            Down_F5 =           0x020,
            Down_F6 =           0x021,
            Down_F7 =           0x022,
            Down_F8 =           0x023,
            Down_F9 =           0x024,
            Down_F10 =          0x025,
            Down_F11 =          0x026,
            Down_F12 =          0x027,
            Down_F13 =          0x028,
            Down_F14 =          0x029,
            Down_F15 =          0x02A,
            Down_F16 =          0x02B,
            Down_F17 =          0x02C,
            Down_F18 =          0x02D,
            Down_F19 =          0x02E,
            Down_F20 =          0x02F,
            Down_NumLock =      0x030,
            Down_NumEnter =     0x031,
            Down_NumPlus =      0x032,
            Down_NumMinus =     0x033,
            Down_NumTimes =     0x034,
            Down_NumDivide =    0x035,
            Down_NumPeriod =    0x036,
            Down_Num0 =         0x037,
            Down_Num1 =         0x038,
            Down_Num2 =         0x039,
            Down_Num3 =         0x03A,
            Down_Num4 =         0x03B,
            Down_Num5 =         0x03C,
            Down_Num6 =         0x03D,
            Down_Num7 =         0x03E,
            Down_Num8 =         0x03F,
            Down_Num9 =         0x040,
            Down_Mute =         0x041,
            Down_VolumeDown =   0x042,
            Down_VolumeUp =     0x043,
            Down_LightDown =    0x044,
            Down_LightUp =      0x045,
            Down_BackTick =     0x046,
            Down_1 =            0x047,
            Down_2 =            0x048,
            Down_3 =            0x049,
            Down_4 =            0x04A,
            Down_5 =            0x04B,
            Down_6 =            0x04C,
            Down_7 =            0x04D,
            Down_8 =            0x04E,
            Down_9 =            0x04F,
            Down_0 =            0x050,
            Down_Dash =         0x051,
            Down_Equals =       0x052,
            Down_ArrowUp =      0x053,
            Down_ArrowDown =    0x054,
            Down_ArrowLeft =    0x055,
            Down_ArrowRight =   0x056,
            Down_A =            0x057,
            Down_B =            0x058,
            Down_C =            0x059,
            Down_D =            0x05A,
            Down_E =            0x05B,
            Down_F =            0x05C,
            Down_G =            0x05D,
            Down_H =            0x05E,
            Down_I =            0x05F,
            Down_J =            0x060,
            Down_K =            0x061,
            Down_L =            0x062,
            Down_M =            0x063,
            Down_N =            0x064,
            Down_O =            0x065,
            Down_P =            0x066,
            Down_Q =            0x067,
            Down_R =            0x068,
            Down_S =            0x069,
            Down_T =            0x06A,
            Down_U =            0x06B,
            Down_V =            0x06C,
            Down_W =            0x06D,
            Down_X =            0x06E,
            Down_Y =            0x06F,
            Down_Z =            0x070,
            Down_Escape =       0x071,
            Down_Menu =         0x072,
            Down_Function =     0x073,
            Down_LBracket =     0x074,
            Down_RBracket =     0x075,
            Down_Backslash =    0x076,
            Down_Forwardslash = 0x077,
            Down_Quote =        0x078,
            Down_Semicolon =    0x079,
            Down_Period =       0x07A,
            Down_Comma =        0x07B,
            Down_AltGr =        0x07C,
            Down_Space =        0x07D,
            Down_ScrollLock =   0x07E,
            Down_Extended =     0x0FF,

            Up_LShift =         0x101,
            Up_RShift =         0x102,
            Up_LCtrl =          0x103,
            Up_RCtrl =          0x104,
            Up_LAlt =           0x105,
            Up_RAlt =           0x106,
            Up_LMeta =          0x107,
            Up_RMeta =          0x108,
            Up_LSuper =         0x109,
            Up_RSuper =         0x10A,
            Up_LHyper =         0x10B,
            Up_RHyper =         0x10C,
            Up_CapsLock =       0x10D,
            Up_Tab =            0x10E,
            Up_Backspace =      0x10F,
            Up_Enter =          0x110,
            Up_Delete =         0x111,
            Up_Home =           0x112,
            Up_End =            0x113,
            Up_PageUp =         0x114,
            Up_PageDown =       0x115,
            Up_Insert =         0x116,
            Up_PrintScreen =    0x117,
            Up_Pause =          0x118,
            Up_Power =          0x119,
            Up_Sleep =          0x11A,
            Up_Wake =           0x11B,
            Up_F1 =             0x11C,
            Up_F2 =             0x11D,
            Up_F3 =             0x11E,
            Up_F4 =             0x11F,
            Up_F5 =             0x120,
            Up_F6 =             0x121,
            Up_F7 =             0x122,
            Up_F8 =             0x123,
            Up_F9 =             0x124,
            Up_F10 =            0x125,
            Up_F11 =            0x126,
            Up_F12 =            0x127,
            Up_F13 =            0x128,
            Up_F14 =            0x129,
            Up_F15 =            0x12A,
            Up_F16 =            0x12B,
            Up_F17 =            0x12C,
            Up_F18 =            0x12D,
            Up_F19 =            0x12E,
            Up_F20 =            0x12F,
            Up_NumLock =        0x130,
            Up_NumEnter =       0x131,
            Up_NumPlus =        0x132,
            Up_NumMinus =       0x133,
            Up_NumTimes =       0x134,
            Up_NumDivide =      0x135,
            Up_NumPeriod =      0x136,
            Up_Num0 =           0x137,
            Up_Num1 =           0x138,
            Up_Num2 =           0x139,
            Up_Num3 =           0x13A,
            Up_Num4 =           0x13B,
            Up_Num5 =           0x13C,
            Up_Num6 =           0x13D,
            Up_Num7 =           0x13E,
            Up_Num8 =           0x13F,
            Up_Num9 =           0x140,
            Up_Mute =           0x141,
            Up_VolumeDown =     0x142,
            Up_VolumeUp =       0x143,
            Up_LightDown =      0x144,
            Up_LightUp =        0x145,
            Up_BackTick =       0x146,
            Up_1 =              0x147,
            Up_2 =              0x148,
            Up_3 =              0x149,
            Up_4 =              0x14A,
            Up_5 =              0x14B,
            Up_6 =              0x14C,
            Up_7 =              0x14D,
            Up_8 =              0x14E,
            Up_9 =              0x14F,
            Up_0 =              0x150,
            Up_Dash =           0x151,
            Up_Equals =         0x152,
            Up_ArrowUp =        0x153,
            Up_ArrowDown =      0x154,
            Up_ArrowLeft =      0x155,
            Up_ArrowRight =     0x156,
            Up_A =              0x157,
            Up_B =              0x158,
            Up_C =              0x159,
            Up_D =              0x15A,
            Up_E =              0x15B,
            Up_F =              0x15C,
            Up_G =              0x15D,
            Up_H =              0x15E,
            Up_I =              0x15F,
            Up_J =              0x160,
            Up_K =              0x161,
            Up_L =              0x162,
            Up_M =              0x163,
            Up_N =              0x164,
            Up_O =              0x165,
            Up_P =              0x166,
            Up_Q =              0x167,
            Up_R =              0x168,
            Up_S =              0x169,
            Up_T =              0x16A,
            Up_U =              0x16B,
            Up_V =              0x16C,
            Up_W =              0x16D,
            Up_X =              0x16E,
            Up_Y =              0x16F,
            Up_Z =              0x170,
            Up_Escape =         0x171,
            Up_Menu =           0x172,
            Up_Function =       0x173,
            Up_LBracket =       0x174,
            Up_RBracket =       0x175,
            Up_Backslash =      0x176,
            Up_Forwardslash =   0x177,
            Up_Quote =          0x178,
            Up_Semicolon =      0x179,
            Up_Period =         0x17A,
            Up_Comma =          0x17B,
            Up_AltGr =          0x17C,
            Up_Space =          0x17D,
            Up_ScrollLock =     0x17E,
            Up_Extended =       0x1FF
        };

        static constexpr const KeyCode ScancodeSet1[256] = {
            KeyCode::Null,                  // 0x00
            KeyCode::Down_Escape,           // 0x01
            KeyCode::Down_1,                // 0x02
            KeyCode::Down_2,                // 0x03
            KeyCode::Down_3,                // 0x04
            KeyCode::Down_4,                // 0x05
            KeyCode::Down_5,                // 0x06
            KeyCode::Down_6,                // 0x07
            KeyCode::Down_7,                // 0x08
            KeyCode::Down_8,                // 0x09
            KeyCode::Down_9,                // 0x0A
            KeyCode::Down_0,                // 0x0B
            KeyCode::Down_Dash,             // 0x0C
            KeyCode::Down_Equals,           // 0x0D
            KeyCode::Down_Backspace,        // 0x0E
            KeyCode::Down_Tab,              // 0x0F
            KeyCode::Down_Q,                // 0x10
            KeyCode::Down_W,                // 0x11
            KeyCode::Down_E,                // 0x12
            KeyCode::Down_R,                // 0x13
            KeyCode::Down_T,                // 0x14
            KeyCode::Down_Y,                // 0x15
            KeyCode::Down_U,                // 0x16
            KeyCode::Down_I,                // 0x17
            KeyCode::Down_O,                // 0x18
            KeyCode::Down_P,                // 0x19
            KeyCode::Down_LBracket,         // 0x1A
            KeyCode::Down_RBracket,         // 0x1B
            KeyCode::Down_Enter,            // 0x1C
            KeyCode::Down_LCtrl,            // 0x1D
            KeyCode::Down_A,                // 0x1E
            KeyCode::Down_S,                // 0x1F
            KeyCode::Down_D,                // 0x20
            KeyCode::Down_F,                // 0x21
            KeyCode::Down_G,                // 0x22,
            KeyCode::Down_H,                // 0x23,
            KeyCode::Down_J,                // 0x24,
            KeyCode::Down_K,                // 0x25,
            KeyCode::Down_L,                // 0x26,
            KeyCode::Down_Semicolon,        // 0x27,
            KeyCode::Down_Quote,            // 0x28,
            KeyCode::Down_BackTick,         // 0x29
            KeyCode::Down_LShift,           // 0x2A
            KeyCode::Down_Backslash,        // 0x2B
            KeyCode::Down_Z,                // 0x2C
            KeyCode::Down_X,                // 0x2D
            KeyCode::Down_C,                // 0x2E
            KeyCode::Down_V,                // 0x2F
            KeyCode::Down_B,                // 0x30
            KeyCode::Down_N,                // 0x31
            KeyCode::Down_M,                // 0x32
            KeyCode::Down_Comma,            // 0x33
            KeyCode::Down_Period,           // 0x34
            KeyCode::Down_Forwardslash,     // 0x35
            KeyCode::Down_RShift,           // 0x36
            KeyCode::Down_NumTimes,         // 0x37
            KeyCode::Down_LAlt,             // 0x38
            KeyCode::Down_Space,            // 0x39
            KeyCode::Down_CapsLock,         // 0x3A
            KeyCode::Down_F1,               // 0x3B
            KeyCode::Down_F2,               // 0x3C
            KeyCode::Down_F3,               // 0x3D
            KeyCode::Down_F4,               // 0x3E
            KeyCode::Down_F5,               // 0x3F
            KeyCode::Down_F6,               // 0x40
            KeyCode::Down_F7,               // 0x41
            KeyCode::Down_F8,               // 0x42
            KeyCode::Down_F9,               // 0x43
            KeyCode::Down_F10,              // 0x44
            KeyCode::Down_NumLock,          // 0x45
            KeyCode::Down_ScrollLock,       // 0x46
            KeyCode::Down_Num7,             // 0x47
            KeyCode::Down_Num8,             // 0x48
            KeyCode::Down_Num9,             // 0x49
            KeyCode::Down_NumMinus,         // 0x4A
            KeyCode::Down_Num4,             // 0x4B
            KeyCode::Down_Num5,             // 0x4C
            KeyCode::Down_Num6,             // 0x4D
            KeyCode::Down_NumPlus,          // 0x4E
            KeyCode::Down_Num1,             // 0x4F
            KeyCode::Down_Num2,             // 0x50
            KeyCode::Down_Num3,             // 0x51
            KeyCode::Down_Num0,             // 0x52
            KeyCode::Down_NumPeriod,        // 0x53
            KeyCode::Null,                  // 0x54
            KeyCode::Null,                  // 0x55
            KeyCode::Null,                  // 0x56
            KeyCode::Down_F11,              // 0x57
            KeyCode::Down_F12,              // 0x58
            KeyCode::Null,                  // 0x59
            KeyCode::Null,                  // 0x5A
            KeyCode::Null,                  // 0x5B
            KeyCode::Null,                  // 0x5C
            KeyCode::Null,                  // 0x5D
            KeyCode::Null,                  // 0x5E
            KeyCode::Null,                  // 0x5F
            KeyCode::Null,                  // 0x60
            KeyCode::Null,                  // 0x61
            KeyCode::Null,                  // 0x62
            KeyCode::Null,                  // 0x63
            KeyCode::Null,                  // 0x64
            KeyCode::Null,                  // 0x65
            KeyCode::Null,                  // 0x66
            KeyCode::Null,                  // 0x67
            KeyCode::Null,                  // 0x68
            KeyCode::Null,                  // 0x69
            KeyCode::Null,                  // 0x6A
            KeyCode::Null,                  // 0x6B
            KeyCode::Null,                  // 0x6C
            KeyCode::Null,                  // 0x6D
            KeyCode::Null,                  // 0x6E
            KeyCode::Null,                  // 0x6F
            KeyCode::Null,                  // 0x70
            KeyCode::Null,                  // 0x71
            KeyCode::Null,                  // 0x72
            KeyCode::Null,                  // 0x73
            KeyCode::Null,                  // 0x74
            KeyCode::Null,                  // 0x75
            KeyCode::Null,                  // 0x76
            KeyCode::Null,                  // 0x77
            KeyCode::Null,                  // 0x78
            KeyCode::Null,                  // 0x79
            KeyCode::Null,                  // 0x7A
            KeyCode::Null,                  // 0x7B
            KeyCode::Null,                  // 0x7C
            KeyCode::Null,                  // 0x7D
            KeyCode::Null,                  // 0x7E
            KeyCode::Null,                  // 0x7F
            KeyCode::Null,                  // 0x80
            KeyCode::Up_Escape,             // 0x81
            KeyCode::Up_1,                  // 0x82
            KeyCode::Up_2,                  // 0x83
            KeyCode::Up_3,                  // 0x84
            KeyCode::Up_4,                  // 0x85
            KeyCode::Up_5,                  // 0x86
            KeyCode::Up_6,                  // 0x87
            KeyCode::Up_7,                  // 0x88
            KeyCode::Up_8,                  // 0x89
            KeyCode::Up_9,                  // 0x8A
            KeyCode::Up_0,                  // 0x8B
            KeyCode::Up_Dash,               // 0x8C
            KeyCode::Up_Equals,             // 0x8D
            KeyCode::Up_Backspace,          // 0x8E
            KeyCode::Up_Tab,                // 0x8F
            KeyCode::Up_Q,                  // 0x90
            KeyCode::Up_W,                  // 0x91
            KeyCode::Up_E,                  // 0x92
            KeyCode::Up_R,                  // 0x93
            KeyCode::Up_T,                  // 0x94
            KeyCode::Up_Y,                  // 0x95
            KeyCode::Up_U,                  // 0x96
            KeyCode::Up_I,                  // 0x97
            KeyCode::Up_O,                  // 0x98
            KeyCode::Up_P,                  // 0x99
            KeyCode::Up_LBracket,           // 0x9A
            KeyCode::Up_RBracket,           // 0x9B
            KeyCode::Up_Enter,              // 0x9C
            KeyCode::Up_LCtrl,              // 0x9D
            KeyCode::Up_A,                  // 0x9E
            KeyCode::Up_S,                  // 0x9F
            KeyCode::Up_D,                  // 0xA0
            KeyCode::Up_F,                  // 0xA1
            KeyCode::Up_G,                  // 0xA2,
            KeyCode::Up_H,                  // 0xA3,
            KeyCode::Up_J,                  // 0xA4,
            KeyCode::Up_K,                  // 0xA5,
            KeyCode::Up_L,                  // 0xA6,
            KeyCode::Up_Semicolon,          // 0xA7,
            KeyCode::Up_Quote,              // 0xA8,
            KeyCode::Up_BackTick,           // 0xA9
            KeyCode::Up_LShift,             // 0xAA
            KeyCode::Up_Backslash,          // 0xAB
            KeyCode::Up_Z,                  // 0xAC
            KeyCode::Up_X,                  // 0xAD
            KeyCode::Up_C,                  // 0xAE
            KeyCode::Up_V,                  // 0xAF
            KeyCode::Up_B,                  // 0xB0
            KeyCode::Up_N,                  // 0xB1
            KeyCode::Up_M,                  // 0xB2
            KeyCode::Up_Comma,              // 0xB3
            KeyCode::Up_Period,             // 0xB4
            KeyCode::Up_Forwardslash,       // 0xB5
            KeyCode::Up_RShift,             // 0xB6
            KeyCode::Up_NumTimes,           // 0xB7
            KeyCode::Up_LAlt,               // 0xB8
            KeyCode::Up_Space,              // 0xB9
            KeyCode::Up_CapsLock,           // 0xBA
            KeyCode::Up_F1,                 // 0xBB
            KeyCode::Up_F2,                 // 0xBC
            KeyCode::Up_F3,                 // 0xBD
            KeyCode::Up_F4,                 // 0xBE
            KeyCode::Up_F5,                 // 0xBF
            KeyCode::Up_F6,                 // 0xC0
            KeyCode::Up_F7,                 // 0xC1
            KeyCode::Up_F8,                 // 0xC2
            KeyCode::Up_F9,                 // 0xC3
            KeyCode::Up_F10,                // 0xC4
            KeyCode::Up_NumLock,            // 0xC5
            KeyCode::Up_ScrollLock,         // 0xC6
            KeyCode::Up_Num7,               // 0xC7
            KeyCode::Up_Num8,               // 0xC8
            KeyCode::Up_Num9,               // 0xC9
            KeyCode::Up_NumMinus,           // 0xCA
            KeyCode::Up_Num4,               // 0xCB
            KeyCode::Up_Num5,               // 0xCC
            KeyCode::Up_Num6,               // 0xCD
            KeyCode::Up_NumPlus,            // 0xCE
            KeyCode::Up_Num1,               // 0xCF
            KeyCode::Up_Num2,               // 0xD0
            KeyCode::Up_Num3,               // 0xD1
            KeyCode::Up_Num0,               // 0xD2
            KeyCode::Up_NumPeriod,          // 0xD3
            KeyCode::Null,                  // 0xD4
            KeyCode::Null,                  // 0xD5
            KeyCode::Null,                  // 0xD6
            KeyCode::Up_F11,                // 0xD7
            KeyCode::Up_F12,                // 0xD8
            KeyCode::Null,                  // 0xD9
            KeyCode::Null,                  // 0xDA
            KeyCode::Null,                  // 0xDB
            KeyCode::Null,                  // 0xDC
            KeyCode::Null,                  // 0xDD
            KeyCode::Null,                  // 0xDE
            KeyCode::Null,                  // 0xDF
            KeyCode::Null,                  // 0xE0
            KeyCode::Null,                  // 0xE1
            KeyCode::Null,                  // 0xE2
            KeyCode::Null,                  // 0xE3
            KeyCode::Null,                  // 0xE4
            KeyCode::Null,                  // 0xE5
            KeyCode::Null,                  // 0xE6
            KeyCode::Null,                  // 0xE7
            KeyCode::Null,                  // 0xE8
            KeyCode::Null,                  // 0xE9
            KeyCode::Null,                  // 0xEA
            KeyCode::Null,                  // 0xEB
            KeyCode::Null,                  // 0xEC
            KeyCode::Null,                  // 0xED
            KeyCode::Null,                  // 0xEE
            KeyCode::Null,                  // 0xEF
            KeyCode::Null,                  // 0xF0
            KeyCode::Null,                  // 0xF1
            KeyCode::Null,                  // 0xF2
            KeyCode::Null,                  // 0xF3
            KeyCode::Null,                  // 0xF4
            KeyCode::Null,                  // 0xF5
            KeyCode::Null,                  // 0xF6
            KeyCode::Null,                  // 0xF7
            KeyCode::Null,                  // 0xF8
            KeyCode::Null,                  // 0xF9
            KeyCode::Null,                  // 0xFA
            KeyCode::Null,                  // 0xFB
            KeyCode::Null,                  // 0xFC
            KeyCode::Null,                  // 0xFD
            KeyCode::Null,                  // 0xFE
            KeyCode::Null,                  // 0xFF
        };

        static bool Init(void);
        static void Handler(uint64_t Error, uint64_t Vector);

        static KeyCode GetKeycode(void);
        static uint8_t GetCharASCII(void);
        static uint8_t GetScancodeSet(void);
    private:
        static bool ShiftDown_;

        static KeyCode *Buffer_;
        static uint64_t Count_;
        static uint64_t Index_;

        static KeyCode KeyCode_;
    };
}