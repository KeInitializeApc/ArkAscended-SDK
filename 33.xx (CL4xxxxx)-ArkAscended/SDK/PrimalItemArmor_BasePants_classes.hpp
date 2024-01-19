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
	class USoundBase*                            SoundOverrideProneStart;                           // 0xEB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class USoundBase*                            SoundOverrideProneEnd;                             // 0xEC0(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class USoundBase*                            SoundOverrideProneStep;                            // 0xEC8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class USoundBase*                            SoundOverrideCrouchStart;                          // 0xED0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class USoundBase*                            SoundOverrideCrouchEnd;                            // 0xED8(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_BasePants_C* GetDefaultObj();

	bool OverrideCrouchingSound(bool* bIsProne, class USoundBase* ReturnValue, class USoundBase* RetSound, bool Temp_bool_Variable, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select_Default_1, class USoundBase* K2Node_Select_Default_2);
};

}


