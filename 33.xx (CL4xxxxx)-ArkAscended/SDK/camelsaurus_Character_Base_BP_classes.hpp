#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x34A8 - 0x3498)
// BlueprintGeneratedClass camelsaurus_Character_Base_BP.camelsaurus_Character_Base_BP_C
class ACamelsaurus_Character_Base_BP_C : public ADino_Character_BP_C
{
public:
	double                                       WaterAmount;                                       // 0x3498(0x8)(BlueprintVisible, Net, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	double                                       MaxWaterAmount;                                    // 0x34A0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ACamelsaurus_Character_Base_BP_C* GetDefaultObj();

	double AddWater(double* NewWaterAmount, double* OldWaterAmount, double* CallFunc_Add_DoubleDouble_ReturnValue, double* CallFunc_FClamp_ReturnValue);
};

}


