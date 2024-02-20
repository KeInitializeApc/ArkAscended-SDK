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
	struct FVector                               GazeOrigin;                                        // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               GazeDirection;                                     // 0x18(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               FixationPoint;                                     // 0x30(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ConfidenceValue;                                   // 0x48(0x4)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsLeftEyeBlink;                                   // 0x4C(0x1)(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsRightEyeBlink;                                  // 0x4D(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D27[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LeftPupilDiameter;                                 // 0x50(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RightPupilDiameter;                                // 0x54(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct EyeTracker.EyeTrackerStereoGazeData
struct FEyeTrackerStereoGazeData
{
public:
	struct FVector                               LeftEyeOrigin;                                     // 0x0(0x18)(ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               LeftEyeDirection;                                  // 0x18(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               RightEyeOrigin;                                    // 0x30(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               RightEyeDirection;                                 // 0x48(0x18)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               FixationPoint;                                     // 0x60(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ConfidenceValue;                                   // 0x78(0x4)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D2D[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

}


