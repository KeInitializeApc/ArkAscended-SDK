#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x878 - 0x838)
// WidgetBlueprintGeneratedClass ChatBoxUI.ChatBoxUI_C
class UChatBoxUI_C : public UUI_ChatBox
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x838(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UBorder*                               BorderSwitchPrompt;                                // 0x840(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               Button_42;                                         // 0x848(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, RepNotify, Interp, EditorOnly)
	class UScrollBox*                            ChatMessageScrollBox;                              // 0x850(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            DisplayPromptChatMode;                             // 0x858(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UEditableTextBox*                      EditTextBox;                                       // 0x860(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                Image_487;                                         // 0x868(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditorOnly, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable)
	class UImage*                                Image_488;                                         // 0x870(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, EditorOnly, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable)

	static class UClass* StaticClass();
	static class UChatBoxUI_C* GetDefaultObj();

	class UWidget* Switch_Chat_Mode();
	void BndEvt__ChatBoxUI_Button_42_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnGamepadActiveChangedBP(bool* bIsGamepadActive);
	void ExecuteUbergraph_ChatBoxUI(int32* EntryPoint, bool* K2Node_Event_bIsGamepadActive);
};

}


