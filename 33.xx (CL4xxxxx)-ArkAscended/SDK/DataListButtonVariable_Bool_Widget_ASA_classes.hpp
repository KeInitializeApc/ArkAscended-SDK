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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class FString                                TrueBoolString;                                    // 0x480(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                FalseBoolString;                                   // 0x490(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListButtonVariable_Bool_Widget_ASA_C* GetDefaultObj();

	bool SetupTextValue(class FText CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1);
	class FString ExtraSetupToggledButton(class FText CallFunc_Conv_StringToText_ReturnValue);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	bool ExecuteUbergraph_DataListButtonVariable_Bool_Widget_ASA();
};

}


