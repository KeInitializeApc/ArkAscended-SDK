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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class FString                                TrueBoolString;                                    // 0x480(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, InstancedReference, SubobjectReference)
	class FString                                FalseBoolString;                                   // 0x490(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListButtonVariable_Bool_Widget_ASA_C* GetDefaultObj();

	class FText SetupTextValue(class FText ReturnText, bool* CallFunc_EqualEqual_TextText_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue);
	bool ExtraSetupToggledButton(bool* CallFunc_EqualEqual_TextText_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue);
	void Construct();
	bool PreConstruct();
	bool ExecuteUbergraph_DataListButtonVariable_Bool_Widget_ASA(int32 EntryPoint);
};

}


