#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EEyeTrackerStatus : uint8
{
	NotConnected                   = 0,
	NotTracking                    = 1,
	Tracking                       = 2,
	EEyeTrackerStatus_MAX          = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// ScriptStruct EyeTracker.EyeTrackerGazeData
struct FEyeTrackerGazeData
{
public:
	struct FVector                               GazeOrigin;                                        // 0x0(0x18)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FVector                               GazeDirection;                                     // 0x18(0x18)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FVector                               FixationPoint;                                     // 0x30(0x18)(Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        ConfidenceValue;                                   // 0x48(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bIsLeftEyeBlink;                                   // 0x4C(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bIsRightEyeBlink;                                  // 0x4D(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A15[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LeftPupilDiameter;                                 // 0x50(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        RightPupilDiameter;                                // 0x54(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct EyeTracker.EyeTrackerStereoGazeData
struct FEyeTrackerStereoGazeData
{
public:
	struct FVector                               LeftEyeOrigin;                                     // 0x0(0x18)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FVector                               LeftEyeDirection;                                  // 0x18(0x18)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FVector                               RightEyeOrigin;                                    // 0x30(0x18)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FVector                               RightEyeDirection;                                 // 0x48(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FVector                               FixationPoint;                                     // 0x60(0x18)(Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        ConfidenceValue;                                   // 0x78(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A16[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

}


