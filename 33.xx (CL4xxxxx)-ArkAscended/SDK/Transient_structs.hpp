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
	struct FVector3f                             Position;                                          // 0x0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FVector3f                             Normal;                                            // 0xC(0xC)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVector3f                             Velocity;                                          // 0x18(0xC)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector3f                             AngularVelocity;                                   // 0x24(0xC)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, Config, GlobalConfig, SubobjectReference)
	float                                        ExtentMin;                                         // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ExtentMax;                                         // 0x34(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ParticleID;                                        // 0x38(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Time;                                              // 0x3C(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        Type;                                              // 0x40(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
};

}


