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
	struct FVector3f                             Position;                                          // 0x0(0xC)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FVector3f                             Normal;                                            // 0xC(0xC)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	struct FVector3f                             Velocity;                                          // 0x18(0xC)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	struct FVector3f                             AngularVelocity;                                   // 0x24(0xC)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ExtentMin;                                         // 0x30(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ExtentMax;                                         // 0x34(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ParticleID;                                        // 0x38(0x4)(BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Time;                                              // 0x3C(0x4)(Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	int32                                        Type;                                              // 0x40(0x4)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
};

}


