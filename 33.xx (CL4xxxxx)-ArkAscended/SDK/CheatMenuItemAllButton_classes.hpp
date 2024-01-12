#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x368 - 0x330)
// WidgetBlueprintGeneratedClass CheatMenuItemAllButton.CheatMenuItemAllButton_C
class UCheatMenuItemAllButton_C : public UUI_DebugSpawnMenuEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UImage*                                IconImage;                                         // 0x340(0x8)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x348(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x350(0x8)(Edit, ExportObject, EditFixedSize, Transient, EditConst, SubobjectReference)
	TArray<TSoftClassPtr<class UPrimalItem>>     ItemList;                                          // 0x358(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheatMenuItemAllButton_C* GetDefaultObj();

	void BndEvt__CheatMenuAllButton_SpawnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	class AShooterPlayerController* ExecuteUbergraph_CheatMenuItemAllButton(int32* CallFunc_Array_Length_ReturnValue, TSoftClassPtr<class UPrimalItem>* CallFunc_Array_Get_Item, bool CallFunc_IsValidSoftClassReference_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, double CallFunc_Conv_StringToDouble_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Conv_StringToInt_ReturnValue, float CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast);
};

}


