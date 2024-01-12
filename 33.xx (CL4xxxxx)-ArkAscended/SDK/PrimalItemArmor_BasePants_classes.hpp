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
	class USoundBase*                            SoundOverrideProneStart;                           // 0xEB8(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            SoundOverrideProneEnd;                             // 0xEC0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            SoundOverrideProneStep;                            // 0xEC8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            SoundOverrideCrouchStart;                          // 0xED0(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            SoundOverrideCrouchEnd;                            // 0xED8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_BasePants_C* GetDefaultObj();

	class USoundBase* OverrideCrouchingSound(class USoundBase* InSound, int32 SoundState, class USoundBase** RetSound, bool Temp_bool_Variable, int32* Temp_int_Variable, int32* Temp_int_Variable_1, class USoundBase** K2Node_Select_Default, class USoundBase** K2Node_Select_Default_1, bool* CallFunc_IsValid_ReturnValue, class USoundBase** K2Node_Select_Default_2);
};

}


