#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMobileShadowQuality : uint8
{
	NoFiltering                    = 0,
	PCF_1x1                        = 1,
	PCF_3x3                        = 2,
	PCF_5x5                        = 3,
	EMobileShadowQuality_MAX       = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
struct FMaterialQualityOverrides
{
public:
	bool                                         bDiscardQualityDuringCook;                         // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableOverride;                                   // 0x1(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bForceFullyRough;                                  // 0x2(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bForceNonMetal;                                    // 0x3(0x1)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bForceDisableLMDirectionality;                     // 0x4(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bForceDisablePreintegratedGF;                      // 0x5(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bDisableMaterialNormalCalculation;                 // 0x6(0x1)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	enum class EMobileShadowQuality              MobileShadowQuality;                               // 0x7(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

}


