#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x10E9 - 0x10A8)
// BlueprintGeneratedClass Weap_Torch_Base.Weap_Torch_Base_C
class AWeap_Torch_Base_C : public AShooterWeapon_Melee
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10A8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UClass*                                BeltTorchBuff;                                     // 0x10B0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bAllowPutOnBelt;                                   // 0x10B8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsEquipped;                                       // 0x10B9(0x1)(ExportObject, Net, Config, GlobalConfig, SubobjectReference)
	bool                                         bBeingDestroyed;                                   // 0x10BA(0x1)(ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4824[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       NiagaraTime;                                       // 0x10C0(0x8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       TimeToExtinguish;                                  // 0x10C8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       TimeToRampUp;                                      // 0x10D0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UCurveFloat*                           RampUpCurve;                                       // 0x10D8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UCurveFloat*                           ExtinguishCurve;                                   // 0x10E0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bShouldTickFire;                                   // 0x10E8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class AWeap_Torch_Base_C* GetDefaultObj();

	bool CanUseNiagaraFire();
	class UNiagaraComponent* GetFPVNiagaraFire();
	class UNiagaraComponent* GetTPVNiagaraFire();
	bool BPCanEquip(class AShooterCharacter** ByCharacter);
	void StartSecondaryActionEvent();
	void Server_AttemptPutOnBelt();
	void ReceiveBeginPlay();
	void StartUnequipEvent();
	void FireTick();
	void BPAppliedPrimalItemToWeapon();
	void OnInstigatorSleepingStateChanged();
	float ExecuteUbergraph_Weap_Torch_Base(int32* EntryPoint, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_2);
};

}


