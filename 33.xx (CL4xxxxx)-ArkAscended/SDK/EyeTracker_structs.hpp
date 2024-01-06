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
	struct FVector                               GazeOrigin;                                        // 0x0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               GazeDirection;                                     // 0x18(0x18)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               FixationPoint;                                     // 0x30(0x18)(Edit, ConstParm, ExportObject, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ConfidenceValue;                                   // 0x48(0x4)(ConstParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsLeftEyeBlink;                                   // 0x4C(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsRightEyeBlink;                                  // 0x4D(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2253[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LeftPupilDiameter;                                 // 0x50(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        RightPupilDiameter;                                // 0x54(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct EyeTracker.EyeTrackerStereoGazeData
struct FEyeTrackerStereoGazeData
{
public:
	struct FVector                               LeftEyeOrigin;                                     // 0x0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               LeftEyeDirection;                                  // 0x18(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               RightEyeOrigin;                                    // 0x30(0x18)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               RightEyeDirection;                                 // 0x48(0x18)(Edit, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               FixationPoint;                                     // 0x60(0x18)(Edit, ConstParm, ExportObject, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ConfidenceValue;                                   // 0x78(0x4)(ConstParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2255[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

}


