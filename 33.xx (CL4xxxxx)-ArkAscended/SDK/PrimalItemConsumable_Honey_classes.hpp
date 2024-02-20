#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xED8 - 0xED0)
// BlueprintGeneratedClass PrimalItemConsumable_Honey.PrimalItemConsumable_Honey_C
class UPrimalItemConsumable_Honey_C : public UPrimalItemConsumableEatable_C
{
public:
	class UClass*                                WasThrownBuffToAdd;                                // 0xED0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemConsumable_Honey_C* GetDefaultObj();

	void BPNotifyDropped(class APrimalCharacter* FromCharacter, bool bWasThrown, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
};

}


