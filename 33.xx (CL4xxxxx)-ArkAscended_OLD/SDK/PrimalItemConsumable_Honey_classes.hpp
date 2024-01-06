#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xEB8 - 0xEB0)
// BlueprintGeneratedClass PrimalItemConsumable_Honey.PrimalItemConsumable_Honey_C
class UPrimalItemConsumable_Honey_C : public UPrimalItemConsumableEatable_C
{
public:
	class UClass*                                WasThrownBuffToAdd;                                // 0xEB0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemConsumable_Honey_C* GetDefaultObj();

	bool BPNotifyDropped(class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue);
};

}


