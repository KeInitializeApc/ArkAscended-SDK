#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x1091 - 0x1050)
// BlueprintGeneratedClass Weap_Torch_Base.Weap_Torch_Base_C
class AWeap_Torch_Base_C : public AShooterWeapon_Melee
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1050(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UClass*                                BeltTorchBuff;                                     // 0x1058(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bAllowPutOnBelt;                                   // 0x1060(0x1)(ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bIsEquipped;                                       // 0x1061(0x1)(ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bBeingDestroyed;                                   // 0x1062(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_3509[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       NiagaraTime;                                       // 0x1068(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       TimeToExtinguish;                                  // 0x1070(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       TimeToRampUp;                                      // 0x1078(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UCurveFloat*                           RampUpCurve;                                       // 0x1080(0x8)(OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UCurveFloat*                           ExtinguishCurve;                                   // 0x1088(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bShouldTickFire;                                   // 0x1090(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class AWeap_Torch_Base_C* GetDefaultObj();

	bool CanUseNiagaraFire(bool* bCanUse, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent, bool CallFunc_Not_PreBool_ReturnValue, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1);
	void GetFPVNiagaraFire(class UNiagaraComponent* FPVNiagaraComponent);
	void GetTPVNiagaraFire(class UNiagaraComponent** TPVNiagaraComponent);
	bool BPCanEquip(class AShooterCharacter* ByCharacter, bool* ReturnValue, bool* CallFunc_IsValidClass_ReturnValue, class APrimalBuff** CallFunc_GetBuff_ReturnValue);
	void StartSecondaryActionEvent();
	void Server_AttemptPutOnBelt();
	void ReceiveBeginPlay();
	void StartUnequipEvent();
	void FireTick();
	void BPAppliedPrimalItemToWeapon();
	void OnInstigatorSleepingStateChanged();
	bool ExecuteUbergraph_Weap_Torch_Base(int32* EntryPoint, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent, class UClass* CallFunc_GetObjectClass_ReturnValue, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue, bool* CallFunc_IsValidClass_ReturnValue, class UPrimalItem_WeaponTorch_C** K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_IsValidClass_ReturnValue_1, float* CallFunc_GetFloatValue_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, float* CallFunc_GetFloatValue_ReturnValue_1, bool* CallFunc_CanUseNiagaraFire_bCanUse, bool* CallFunc_CanUseNiagaraFire_bCanUse_1, bool* CallFunc_CanUseNiagaraFire_bCanUse_2, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_1, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_2, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_3, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3, class UNiagaraComponent* CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_4, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue_1, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, class APrimalBuff** CallFunc_GetBuff_ReturnValue, class ABuff_BeltTorch_C* K2Node_DynamicCast_AsBuff_Belt_Torch, double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue, double* CallFunc_Add_DoubleFloat_ReturnValue, double* CallFunc_Add_DoubleFloat_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue_1, bool CallFunc_K2_TimerExists_ReturnValue, bool CallFunc_K2_TimerExists_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTick_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* CallFunc_GetFloatValue_InTime_ImplicitCast, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast_1, float* CallFunc_GetFloatValue_InTime_ImplicitCast_1, float* CallFunc_Add_DoubleFloat_B_ImplicitCast, float* CallFunc_Add_DoubleFloat_B_ImplicitCast_1);
};

}


