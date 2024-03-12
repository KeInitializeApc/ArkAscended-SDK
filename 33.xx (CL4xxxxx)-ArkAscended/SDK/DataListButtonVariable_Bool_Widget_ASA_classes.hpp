#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x4A0 - 0x478)
// WidgetBlueprintGeneratedClass DataListButtonVariable_Bool_Widget_ASA.DataListButtonVariable_Bool_Widget_ASA_C
class UDataListButtonVariable_Bool_Widget_ASA_C : public UDataListButtonVariable_Widget_ASA_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class FString                                TrueBoolString;                                    // 0x480(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FString                                FalseBoolString;                                   // 0x490(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListButtonVariable_Bool_Widget_ASA_C* GetDefaultObj();

	class FText SetupTextValue(class FText* ReturnText, class FText CallFunc_MakeLiteralText_ReturnValue, bool* CallFunc_EqualEqual_TextText_ReturnValue);
	bool ExtraSetupToggledButton(bool* Toggle, class FText CallFunc_MakeLiteralText_ReturnValue, bool* CallFunc_EqualEqual_TextText_ReturnValue, class FString* CallFunc_Conv_BoolToString_ReturnValue);
	void Construct();
	bool PreConstruct();
	bool ExecuteUbergraph_DataListButtonVariable_Bool_Widget_ASA(int32* EntryPoint);
};

}


