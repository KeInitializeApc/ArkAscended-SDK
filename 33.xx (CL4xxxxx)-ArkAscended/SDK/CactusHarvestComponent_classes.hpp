#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x228 - 0x210)
// BlueprintGeneratedClass CactusHarvestComponent.CactusHarvestComponent_C
class UCactusHarvestComponent_C : public UAttackHarvestComponent_Base_C
{
public:
	double                                       PlayerGiveWaterAmount;                             // 0x210(0x8)(Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       PlayerGiveWaterSpeed;                              // 0x218(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       MorellatopsGiveWaterAmount;                        // 0x220(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UCactusHarvestComponent_C* GetDefaultObj();

	bool BPCustomHarvestResource(class AActor** ToActor, int32 ReturnValue, double* CallFunc_AddWater_NewWaterAmount, class UPrimalCharacterStatusComponent** CallFunc_GetCharacterStatusComponent_ReturnValue, float* CallFunc_AddStatusValueModifier_Speed_ImplicitCast, float* CallFunc_AddStatusValueModifier_Amount_ImplicitCast);
};

}


