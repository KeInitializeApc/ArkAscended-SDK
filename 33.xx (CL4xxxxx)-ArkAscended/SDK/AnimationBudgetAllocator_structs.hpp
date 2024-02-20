#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// ScriptStruct AnimationBudgetAllocator.AnimationBudgetAllocatorParameters
struct FAnimationBudgetAllocatorParameters
{
public:
	float                                        BudgetInMs;                                        // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinQuality;                                        // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxTickRate;                                       // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        WorkUnitSmoothingSpeed;                            // 0xC(0x4)(ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        AlwaysTickFalloffAggression;                       // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        InterpolationFalloffAggression;                    // 0x14(0x4)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        InterpolationMaxRate;                              // 0x18(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxInterpolatedComponents;                         // 0x1C(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        InterpolationTickMultiplier;                       // 0x20(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        InitialEstimatedWorkUnitTimeMs;                    // 0x24(0x4)(Edit, ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxTickedOffsreenComponents;                       // 0x28(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        StateChangeThrottleInFrames;                       // 0x2C(0x4)(Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        BudgetFactorBeforeReducedWork;                     // 0x30(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        BudgetFactorBeforeReducedWorkEpsilon;              // 0x34(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        BudgetPressureSmoothingSpeed;                      // 0x38(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ReducedWorkThrottleMinInFrames;                    // 0x3C(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ReducedWorkThrottleMaxInFrames;                    // 0x40(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        BudgetFactorBeforeAggressiveReducedWork;           // 0x44(0x4)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ReducedWorkThrottleMaxPerFrame;                    // 0x48(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        BudgetPressureBeforeEmergencyReducedWork;          // 0x4C(0x4)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        AutoCalculatedSignificanceMaxDistance;             // 0x50(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BA[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

}


