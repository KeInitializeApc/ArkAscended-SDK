#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3498 - 0x3488)
// BlueprintGeneratedClass camelsaurus_Character_Base_BP.camelsaurus_Character_Base_BP_C
class ACamelsaurus_Character_Base_BP_C : public ADino_Character_BP_C
{
public:
	double                                       WaterAmount;                                       // 0x3488(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       MaxWaterAmount;                                    // 0x3490(0x8)(OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ACamelsaurus_Character_Base_BP_C* GetDefaultObj();

	double AddWater(double* Amount, double CallFunc_Add_DoubleDouble_ReturnValue, double* CallFunc_FClamp_ReturnValue);
};

}


