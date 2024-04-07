#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xF10 - 0xF00)
// BlueprintGeneratedClass PrimalItemArmor_SaddleCart.PrimalItemArmor_SaddleCart_C
class UPrimalItemArmor_SaddleCart_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF00(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	double                                       WeightReductionMulitpilier;                        // 0xF08(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_SaddleCart_C* GetDefaultObj();

	void BPShouldForceAllowSaddleBasing(bool ReturnValue);
	bool BlueprintEquipped(enum class ENetworkModeResult CallFunc_IsRunningOnServer_OutNetworkMode, bool* K2Node_SwitchEnum_CmpSuccess, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	class APrimalBuff_UnequipOnOwnerDeath_C* Set_Ref_On_Equipped_Buff(class UClass** K2Node_ClassDynamicCast_AsPrimal_Buff, bool* K2Node_ClassDynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, class APrimalBuff** CallFunc_GetBuff_ReturnValue, bool K2Node_DynamicCast_bSuccess_1);
	void BPGetSaddleWeightMultiplier(float ReturnValue, float* K2Node_FunctionResult_ReturnValue_ImplicitCast);
	void BPGetNumberOfDefaultSaddleStructures(int32 ReturnValue);
	class UPrimalItem* BPPreventEquip(bool ReturnValue, bool bResult, class AActor* CallFunc_GetOwner_ReturnValue, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	bool BlueprintPostEquipped();
	class APrimalStructure* ExecuteUbergraph_PrimalItemArmor_SaddleCart(int32* EntryPoint, class UActorComponent* CallFunc_GetAttachedComponent_ReturnValue, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsServer_ReturnValue);
};

}


