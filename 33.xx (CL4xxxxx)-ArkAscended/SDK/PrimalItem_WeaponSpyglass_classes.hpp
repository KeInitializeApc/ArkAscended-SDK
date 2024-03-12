#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12 (0xEF2 - 0xEE0)
// BlueprintGeneratedClass PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C
class UPrimalItem_WeaponSpyglass_C : public UPrimalItemWeaponGenericNoStats_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEE0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class AShooterPlayerController*              For_PC;                                            // 0xEE8(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         UsedWeapon;                                        // 0xEF0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         ShouldTrack;                                       // 0xEF1(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItem_WeaponSpyglass_C* GetDefaultObj();

	bool CanUseItemPing(bool CallFunc_IsSOTF_ReturnValue, bool* CallFunc_IsBroken_ReturnValue);
	bool BPPreventWeaponEquip(bool CallFunc_IsSOTF_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	int32 TimerDoubleTap(struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams);
	class AShooterHUD* TimerUsePingWheel();
	void LocalUseStartHoldBP(class AShooterPlayerController** ForPC);
	void LocalUseItemReleaseBP(class AShooterPlayerController** ForPC);
	void LocalUseAfterHoldBP(class AShooterPlayerController** ForPC);
	void BPServerHandleItemNetExecCommand(class AShooterPlayerController** ForPC, class FName* CommandName, struct FBPNetExecParams* ExecParams);
	bool ExecuteUbergraph_PrimalItem_WeaponSpyglass(int32* EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1);
};

}


