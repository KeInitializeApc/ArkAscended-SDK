#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EClothingWindMethodNv : uint8
{
	Legacy                         = 0,
	Accurate                       = 1,
	EClothingWindMethodNv_MAX      = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct ClothingSystemRuntimeNv.ClothConstraintSetupNv
struct FClothConstraintSetupNv
{
public:
	float                                        Stiffness;                                         // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	float                                        StiffnessMultiplier;                               // 0x4(0x4)(ConstParm, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        StretchLimit;                                      // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        CompressionLimit;                                  // 0xC(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

}


