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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1050(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UClass*                                BeltTorchBuff;                                     // 0x1058(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         bAllowPutOnBelt;                                   // 0x1060(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         bIsEquipped;                                       // 0x1061(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bBeingDestroyed;                                   // 0x1062(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	uint8                                        Pad_3335[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       NiagaraTime;                                       // 0x1068(0x8)(ExportObject, Net, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	double                                       TimeToExtinguish;                                  // 0x1070(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	double                                       TimeToRampUp;                                      // 0x1078(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	class UCurveFloat*                           RampUpCurve;                                       // 0x1080(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	class UCurveFloat*                           ExtinguishCurve;                                   // 0x1088(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference)
	bool                                         bShouldTickFire;                                   // 0x1090(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class AWeap_Torch_Base_C* GetDefaultObj();

	bool CanUseNiagaraFire(bool* bCanUse, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1);
	class UNiagaraComponent* GetFPVNiagaraFire();
	class UNiagaraComponent* GetTPVNiagaraFire();
	bool BPCanEquip(class AShooterCharacter* ByCharacter, bool* ReturnValue, class APrimalBuff** CallFunc_GetBuff_ReturnValue);
	void StartSecondaryActionEvent();
	void Server_AttemptPutOnBelt();
	void ReceiveBeginPlay();
	void StartUnequipEvent();
	void FireTick();
	void BPAppliedPrimalItemToWeapon();
	void OnInstigatorSleepingStateChanged();
	float ExecuteUbergraph_Weap_Torch_Base(int32 EntryPoint, int32* CallFunc_GetFlameColorIndex_Index, struct FVector* CallFunc_Conv_LinearColorToVector_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, bool* CallFunc_CanUseNiagaraFire_bCanUse, bool* CallFunc_CanUseNiagaraFire_bCanUse_1, bool* CallFunc_CanUseNiagaraFire_bCanUse_2, class APrimalBuff** CallFunc_GetBuff_ReturnValue, double* CallFunc_Add_DoubleFloat_ReturnValue, double* CallFunc_Add_DoubleFloat_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast_1, float* CallFunc_Add_DoubleFloat_B_ImplicitCast, float* CallFunc_Add_DoubleFloat_B_ImplicitCast_1);
};

}


