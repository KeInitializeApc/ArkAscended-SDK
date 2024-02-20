#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xF00 - 0xED8)
// BlueprintGeneratedClass PrimalItemArmor_BasePants.PrimalItemArmor_BasePants_C
class UPrimalItemArmor_BasePants_C : public UPrimalItemArmorGeneric_C
{
public:
	class USoundBase*                            SoundOverrideProneStart;                           // 0xED8(0x8)(Edit, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	class USoundBase*                            SoundOverrideProneEnd;                             // 0xEE0(0x8)(Edit, BlueprintVisible, Net, ReturnParm, Config, SubobjectReference)
	class USoundBase*                            SoundOverrideProneStep;                            // 0xEE8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	class USoundBase*                            SoundOverrideCrouchStart;                          // 0xEF0(0x8)(ExportObject, BlueprintReadOnly, ReturnParm, Config, SubobjectReference)
	class USoundBase*                            SoundOverrideCrouchEnd;                            // 0xEF8(0x8)(BlueprintVisible, ExportObject, ReturnParm, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_BasePants_C* GetDefaultObj();

	int32 OverrideCrouchingSound(class USoundBase* ReturnValue, bool* Temp_bool_Variable, class USoundBase** K2Node_Select_Default, class USoundBase** K2Node_Select_Default_1, bool* CallFunc_IsValid_ReturnValue, class USoundBase** K2Node_Select_Default_2);
};

}


