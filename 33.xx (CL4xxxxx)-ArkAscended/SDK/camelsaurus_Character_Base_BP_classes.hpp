#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3508 - 0x34F8)
// BlueprintGeneratedClass camelsaurus_Character_Base_BP.camelsaurus_Character_Base_BP_C
class ACamelsaurus_Character_Base_BP_C : public ADino_Character_BP_C
{
public:
	double                                       WaterAmount;                                       // 0x34F8(0x8)(ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       MaxWaterAmount;                                    // 0x3500(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ACamelsaurus_Character_Base_BP_C* GetDefaultObj();

	double AddWater(double* Amount, double* CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue);
};

}


