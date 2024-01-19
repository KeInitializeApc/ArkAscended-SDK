#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETouchIndex : uint8
{
	Touch1                         = 0,
	Touch2                         = 1,
	Touch3                         = 2,
	Touch4                         = 3,
	Touch5                         = 4,
	Touch6                         = 5,
	Touch7                         = 6,
	Touch8                         = 7,
	Touch9                         = 8,
	Touch10                        = 9,
	CursorPointerIndex             = 10,
	MAX_TOUCHES                    = 11,
	ETouchIndex_MAX                = 12,
};

enum class EControllerHand : uint8
{
	Left                           = 0,
	Right                          = 1,
	AnyHand                        = 2,
	Pad                            = 3,
	ExternalCamera                 = 4,
	Gun                            = 5,
	HMD                            = 6,
	Chest                          = 7,
	LeftShoulder                   = 8,
	RightShoulder                  = 9,
	LeftElbow                      = 10,
	RightElbow                     = 11,
	Waist                          = 12,
	LeftKnee                       = 13,
	RightKnee                      = 14,
	LeftFoot                       = 15,
	RightFoot                      = 16,
	Special                        = 17,
	ControllerHand_Count           = 18,
	EControllerHand_MAX            = 19,
};

enum class EConsoleForGamepadLabels : uint8
{
	None                           = 0,
	XBoxOne                        = 1,
	PS4                            = 2,
	EConsoleForGamepadLabels_MAX   = 3,
};

enum class ETouchType : uint8
{
	Began                          = 0,
	Moved                          = 1,
	Stationary                     = 2,
	ForceChanged                   = 3,
	FirstMove                      = 4,
	Ended                          = 5,
	NumTypes                       = 6,
	ETouchType_MAX                 = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct InputCore.Key
struct FKey
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2959[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

}


