#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3F (0xF88 - 0xF49)
// BlueprintGeneratedClass PrimalItemArmor_TekPants.PrimalItemArmor_TekPants_C
class UPrimalItemArmor_TekPants_C : public UPrimalItemArmor_Base_Tek_C
{
public:
	uint8                                        Pad_5350[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class USoundBase*                            SoundOverrideProneStart;                           // 0xF50(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class USoundBase*                            SoundOverrideProneEnd;                             // 0xF58(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class USoundBase*                            SoundOverrideProneStep;                            // 0xF60(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class USoundBase*                            SoundOverrideCrouchStart;                          // 0xF68(0x8)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class USoundBase*                            SoundOverrideCrouchEnd;                            // 0xF70(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                Cannot_Use_Ability_Description_addMinuson;         // 0xF78(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_TekPants_C* GetDefaultObj();

	bool OverrideCrouchingSound(bool Temp_bool_Variable, int32* Temp_int_Variable, int32* Temp_int_Variable_1, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select_Default_1, class USoundBase* K2Node_Select_Default_2);
};

}


