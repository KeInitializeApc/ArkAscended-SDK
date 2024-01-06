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
	double                                       PlayerGiveWaterAmount;                             // 0x210(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	double                                       PlayerGiveWaterSpeed;                              // 0x218(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	double                                       MorellatopsGiveWaterAmount;                        // 0x220(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UCactusHarvestComponent_C* GetDefaultObj();

	bool BPCustomHarvestResource(class UPrimalInventoryComponent* InvComp, int32 NumToGive, class AActor** ToActor, int32* ReturnValue, class ACamelsaurus_Character_Base_BP_C** K2Node_DynamicCast_AsCamelsaurus_Character_Base_BP, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, double* CallFunc_AddWater_NewWaterAmount, class UPrimalCharacterStatusComponent** CallFunc_GetCharacterStatusComponent_ReturnValue, float* CallFunc_AddStatusValueModifier_Speed_ImplicitCast, float* CallFunc_AddStatusValueModifier_Amount_ImplicitCast);
};

}


