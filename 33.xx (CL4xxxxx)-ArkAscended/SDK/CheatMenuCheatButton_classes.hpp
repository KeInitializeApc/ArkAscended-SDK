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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x340(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class FString                                CheatString;                                       // 0x350(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         ConfirmationRequired;                              // 0x360(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         IsShowingConfirm;                                  // 0x361(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         AllowAdditionalString;                             // 0x362(0x1)(BlueprintVisible, ExportObject, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheatMenuCheatButton_C* GetDefaultObj();

	class FText CloseConfirmation();
	class FText ShowConfirmation(const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	class FString ExecuteUbergraph_CheatMenuCheatButton(int32 EntryPoint, bool Temp_bool_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& K2Node_Select_Default);
};

}


