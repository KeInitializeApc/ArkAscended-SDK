#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xEE0 - 0xEB8)
// BlueprintGeneratedClass PrimalItemArmor_BasePants.PrimalItemArmor_BasePants_C
class UPrimalItemArmor_BasePants_C : public UPrimalItemArmorGeneric_C
{
public:
	class USoundBase*                            SoundOverrideProneStart;                           // 0xEB8(0x8)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            SoundOverrideProneEnd;                             // 0xEC0(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            SoundOverrideProneStep;                            // 0xEC8(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            SoundOverrideCrouchStart;                          // 0xED0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            SoundOverrideCrouchEnd;                            // 0xED8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_BasePants_C* GetDefaultObj();

	bool OverrideCrouchingSound(bool* bIsProne, class USoundBase** ReturnValue, bool* Temp_bool_Variable, class USoundBase** K2Node_Select_Default, class USoundBase** K2Node_Select_Default_1, class USoundBase** K2Node_Select_Default_2);
};

}


