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
	double                                       PlayerGiveWaterAmount;                             // 0x210(0x8)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       PlayerGiveWaterSpeed;                              // 0x218(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       MorellatopsGiveWaterAmount;                        // 0x220(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UCactusHarvestComponent_C* GetDefaultObj();

	float BPCustomHarvestResource(class UPrimalInventoryComponent** InvComp, int32* NumToGive, class UClass* DamageTypeClass, bool* K2Node_DynamicCast_bSuccess, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1);
};

}


