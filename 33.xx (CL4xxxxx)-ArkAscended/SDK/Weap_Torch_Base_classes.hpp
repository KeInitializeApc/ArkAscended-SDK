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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1050(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UClass*                                BeltTorchBuff;                                     // 0x1058(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         bAllowPutOnBelt;                                   // 0x1060(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsEquipped;                                       // 0x1061(0x1)(Edit, ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bBeingDestroyed;                                   // 0x1062(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_47EB[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       NiagaraTime;                                       // 0x1068(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       TimeToExtinguish;                                  // 0x1070(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       TimeToRampUp;                                      // 0x1078(0x8)(ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UCurveFloat*                           RampUpCurve;                                       // 0x1080(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UCurveFloat*                           ExtinguishCurve;                                   // 0x1088(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         bShouldTickFire;                                   // 0x1090(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class AWeap_Torch_Base_C* GetDefaultObj();

	bool CanUseNiagaraFire(bool bCanUse, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	class UNiagaraComponent* GetFPVNiagaraFire();
	class UNiagaraComponent* GetTPVNiagaraFire();
	bool BPCanEquip(class AShooterCharacter** ByCharacter, bool ReturnValue, class APrimalBuff** CallFunc_GetBuff_ReturnValue, bool* CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void StartSecondaryActionEvent();
	void Server_AttemptPutOnBelt();
	void ReceiveBeginPlay();
	void StartUnequipEvent();
	void FireTick();
	void BPAppliedPrimalItemToWeapon();
	void OnInstigatorSleepingStateChanged();
	bool ExecuteUbergraph_Weap_Torch_Base(int32 EntryPoint, class UClass** CallFunc_GetObjectClass_ReturnValue, class AShooterCharacter** CallFunc_GetPawnOwner_ReturnValue, int32* CallFunc_GetFlameColorIndex_Index, struct FLinearColor* CallFunc_GetItemCustomColor_outColor, bool* CallFunc_GetItemCustomColor_ReturnValue, struct FVector* CallFunc_Conv_LinearColorToVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double* CallFunc_Divide_DoubleFloat_ReturnValue, float* CallFunc_GetFloatValue_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double* CallFunc_Divide_DoubleFloat_ReturnValue_1, float* CallFunc_GetFloatValue_ReturnValue_1, bool CallFunc_CanUseNiagaraFire_bCanUse, bool CallFunc_CanUseNiagaraFire_bCanUse_1, bool CallFunc_CanUseNiagaraFire_bCanUse_2, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3, class AShooterCharacter** CallFunc_GetPawnOwner_ReturnValue_1, class APrimalBuff** CallFunc_GetBuff_ReturnValue, double CallFunc_Add_DoubleFloat_ReturnValue, double CallFunc_Add_DoubleFloat_ReturnValue_1, class UNiagaraComponent** CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* CallFunc_GetFloatValue_InTime_ImplicitCast, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast_1, float* CallFunc_GetFloatValue_InTime_ImplicitCast_1, float CallFunc_Add_DoubleFloat_B_ImplicitCast, float CallFunc_Add_DoubleFloat_B_ImplicitCast_1);
};

}


