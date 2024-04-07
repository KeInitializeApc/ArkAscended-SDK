#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xB80 - 0xB70)
// BlueprintGeneratedClass PrimalBuff_UnequipOnOwnerDeath.PrimalBuff_UnequipOnOwnerDeath_C
class APrimalBuff_UnequipOnOwnerDeath_C : public APrimalBuff
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB70(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FItemNetID                            SavedIItemNetID;                                   // 0xB78(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class APrimalBuff_UnequipOnOwnerDeath_C* GetDefaultObj();

	void BPInstigatorDied();
	bool ExecuteUbergraph_PrimalBuff_UnequipOnOwnerDeath(int32* EntryPoint, enum class ENetworkModeResult CallFunc_IsRunningOnServer_OutNetworkMode, class APawn* CallFunc_GetInstigator_ReturnValue, bool* K2Node_SwitchEnum_CmpSuccess, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
};

}


