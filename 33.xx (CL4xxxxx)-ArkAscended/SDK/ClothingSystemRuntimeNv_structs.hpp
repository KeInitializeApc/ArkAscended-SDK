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
	float                                        Stiffness;                                         // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        StiffnessMultiplier;                               // 0x4(0x4)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        StretchLimit;                                      // 0x8(0x4)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CompressionLimit;                                  // 0xC(0x4)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


