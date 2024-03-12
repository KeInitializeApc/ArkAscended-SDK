#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xF10 - 0xEE8)
// BlueprintGeneratedClass PrimalItemArmor_BasePants.PrimalItemArmor_BasePants_C
class UPrimalItemArmor_BasePants_C : public UPrimalItemArmorGeneric_C
{
public:
	class USoundBase*                            SoundOverrideProneStart;                           // 0xEE8(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class USoundBase*                            SoundOverrideProneEnd;                             // 0xEF0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class USoundBase*                            SoundOverrideProneStep;                            // 0xEF8(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class USoundBase*                            SoundOverrideCrouchStart;                          // 0xF00(0x8)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class USoundBase*                            SoundOverrideCrouchEnd;                            // 0xF08(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_BasePants_C* GetDefaultObj();

	bool OverrideCrouchingSound(bool Temp_bool_Variable, int32* Temp_int_Variable, int32* Temp_int_Variable_1, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select_Default_1, class USoundBase* K2Node_Select_Default_2);
};

}


