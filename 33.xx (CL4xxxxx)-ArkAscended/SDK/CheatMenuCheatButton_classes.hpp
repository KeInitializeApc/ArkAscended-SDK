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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x340(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x348(0x8)(Edit, ExportObject, EditFixedSize, Transient, EditConst, SubobjectReference)
	class FString                                CheatString;                                       // 0x350(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         ConfirmationRequired;                              // 0x360(0x1)(Edit, BlueprintVisible, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         IsShowingConfirm;                                  // 0x361(0x1)(BlueprintVisible, ExportObject, Net, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         AllowAdditionalString;                             // 0x362(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheatMenuCheatButton_C* GetDefaultObj();

	void CloseConfirmation(class FText CallFunc_Conv_StringToText_ReturnValue);
	TArray<struct FFormatArgumentData> ShowConfirmation(class FText CallFunc_Format_ReturnValue);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	int32 ExecuteUbergraph_CheatMenuCheatButton(bool Temp_bool_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FString* K2Node_Select_Default);
};

}


