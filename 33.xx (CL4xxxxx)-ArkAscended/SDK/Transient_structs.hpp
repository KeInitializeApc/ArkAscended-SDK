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

// 0x44 (0x44 - 0x0)
// ScriptStruct Transient.ChaosDestructionEvent_SWC
struct FChaosDestructionEvent_SWC
{
public:
	struct FVector3f                             Position;                                          // 0x0(0xC)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)
	struct FVector3f                             Normal;                                            // 0xC(0xC)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVector3f                             Velocity;                                          // 0x18(0xC)(Config, EditConst, GlobalConfig)
	struct FVector3f                             AngularVelocity;                                   // 0x24(0xC)(ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        ExtentMin;                                         // 0x30(0x4)(BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ExtentMax;                                         // 0x34(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ParticleID;                                        // 0x38(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Time;                                              // 0x3C(0x4)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        Type;                                              // 0x40(0x4)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
};

}


