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
	bool                                         bDiscardQualityDuringCook;                         // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableOverride;                                   // 0x1(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bForceFullyRough;                                  // 0x2(0x1)(Edit, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bForceNonMetal;                                    // 0x3(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bForceDisableLMDirectionality;                     // 0x4(0x1)(Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bForceDisablePreintegratedGF;                      // 0x5(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDisableMaterialNormalCalculation;                 // 0x6(0x1)(ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EMobileShadowQuality              MobileShadowQuality;                               // 0x7(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


