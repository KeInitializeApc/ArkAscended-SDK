#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x10B9 - 0x1078)
// BlueprintGeneratedClass Weap_Torch_Base.Weap_Torch_Base_C
class AWeap_Torch_Base_C : public AShooterWeapon_Melee
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1078(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                BeltTorchBuff;                                     // 0x1080(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         bAllowPutOnBelt;                                   // 0x1088(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         bIsEquipped;                                       // 0x1089(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	bool                                         bBeingDestroyed;                                   // 0x108A(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_3336[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       NiagaraTime;                                       // 0x1090(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       TimeToExtinguish;                                  // 0x1098(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       TimeToRampUp;                                      // 0x10A0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class UCurveFloat*                           RampUpCurve;                                       // 0x10A8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class UCurveFloat*                           ExtinguishCurve;                                   // 0x10B0(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         bShouldTickFire;                                   // 0x10B8(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)

	static class UClass* StaticClass();
	static class AWeap_Torch_Base_C* GetDefaultObj();

	bool CanUseNiagaraFire(class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent, bool* CallFunc_IsValid_ReturnValue, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent, bool* CallFunc_IsValid_ReturnValue_1);
	void GetFPVNiagaraFire(class UNiagaraComponent** FPVNiagaraComponent);
	void GetTPVNiagaraFire(class UNiagaraComponent** TPVNiagaraComponent);
	bool BPCanEquip(bool ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class APrimalBuff* CallFunc_GetBuff_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2);
	void StartSecondaryActionEvent();
	void Server_AttemptPutOnBelt();
	void ReceiveBeginPlay();
	void StartUnequipEvent();
	void FireTick();
	void BPAppliedPrimalItemToWeapon();
	void OnInstigatorSleepingStateChanged();
	float ExecuteUbergraph_Weap_Torch_Base(class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent, class UClass* CallFunc_GetObjectClass_ReturnValue, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UPrimalItem_WeaponTorch_C** K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, const struct FLinearColor& CallFunc_GetItemCustomColor_outColor, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, bool CallFunc_CanUseNiagaraFire_bCanUse, bool CallFunc_CanUseNiagaraFire_bCanUse_1, bool CallFunc_CanUseNiagaraFire_bCanUse_2, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_1, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_2, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_3, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_4, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue_1, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, class APrimalBuff* CallFunc_GetBuff_ReturnValue, class ABuff_BeltTorch_C** K2Node_DynamicCast_AsBuff_Belt_Torch, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue_1, bool CallFunc_K2_TimerExists_ReturnValue, bool CallFunc_K2_TimerExists_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue_2, class UNiagaraComponent* CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_Divide_DoubleFloat_B_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_1);
};

}


