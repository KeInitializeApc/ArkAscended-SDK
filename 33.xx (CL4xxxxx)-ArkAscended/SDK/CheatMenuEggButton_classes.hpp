#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x3C8 - 0x330)
// WidgetBlueprintGeneratedClass CheatMenuEggButton.CheatMenuEggButton_C
class UCheatMenuEggButton_C : public UUI_DebugSpawnMenuEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UImage*                                ButtonImage;                                       // 0x338(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x340(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x348(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x350(0x8)(Edit, ExportObject, EditFixedSize, Transient, EditConst, SubobjectReference)
	class FString                                ItemSpawnString;                                   // 0x358(0x10)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, SubobjectReference)
	TSoftClassPtr<class UPrimalItem>             BlueprintID;                                       // 0x368(0x30)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	TSoftClassPtr<class UPrimalItem>             FertBlueprintID;                                   // 0x398(0x30)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheatMenuEggButton_C* GetDefaultObj();

	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	class AShooterPlayerController* ExecuteUbergraph_CheatMenuEggButton(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool* K2Node_DynamicCast_bSuccess, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsChecked_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, TSoftClassPtr<class UPrimalItem>* K2Node_Select_Default, bool CallFunc_IsValidSoftClassReference_ReturnValue, TSoftClassPtr<class UPrimalItem>* K2Node_Select_Default_1, bool CallFunc_IsValidSoftClassReference_ReturnValue_1);
};

}


