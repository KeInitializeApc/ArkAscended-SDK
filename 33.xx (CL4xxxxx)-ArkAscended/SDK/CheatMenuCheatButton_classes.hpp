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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CheatString;                                       // 0x350(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ConfirmationRequired;                              // 0x360(0x1)(Edit, ExportObject, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         IsShowingConfirm;                                  // 0x361(0x1)(ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         AllowAdditionalString;                             // 0x362(0x1)(ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheatMenuCheatButton_C* GetDefaultObj();

	class FText CloseConfirmation();
	class FText ShowConfirmation(TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	class FString ExecuteUbergraph_CheatMenuCheatButton(int32* EntryPoint, bool Temp_bool_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& K2Node_Select_Default);
};

}


