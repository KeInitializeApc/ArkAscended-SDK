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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class FString                                TrueBoolString;                                    // 0x480(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                FalseBoolString;                                   // 0x490(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListButtonVariable_Bool_Widget_ASA_C* GetDefaultObj();

	class FString SetupTextValue(class FText* ReturnText, class FText* CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1);
	bool ExtraSetupToggledButton(bool Toggle, class FText* CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue);
	void Construct();
	bool PreConstruct();
	bool ExecuteUbergraph_DataListButtonVariable_Bool_Widget_ASA(int32 EntryPoint);
};

}

