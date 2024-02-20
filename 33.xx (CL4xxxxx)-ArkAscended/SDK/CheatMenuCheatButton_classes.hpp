#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x33 (0x363 - 0x330)
// WidgetBlueprintGeneratedClass CheatMenuCheatButton.CheatMenuCheatButton_C
class UCheatMenuCheatButton_C : public UUI_DebugSpawnMenuEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x348(0x8)(EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CheatString;                                       // 0x350(0x10)(ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ConfirmationRequired;                              // 0x360(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         IsShowingConfirm;                                  // 0x361(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         AllowAdditionalString;                             // 0x362(0x1)(ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheatMenuCheatButton_C* GetDefaultObj();

	void CloseConfirmation(class FText* CallFunc_Conv_StringToText_ReturnValue);
	TArray<struct FFormatArgumentData> ShowConfirmation(class FText* CallFunc_Format_ReturnValue);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	class FString ExecuteUbergraph_CheatMenuCheatButton(bool* Temp_bool_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText CallFunc_GetText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* K2Node_Select_Default);
};

}


