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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UImage*                                IconImage;                                         // 0x340(0x8)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x350(0x8)(EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	TArray<TSoftClassPtr<class UPrimalItem>>     ItemList;                                          // 0x358(0x10)(Edit, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheatMenuItemAllButton_C* GetDefaultObj();

	void BndEvt__CheatMenuAllButton_SpawnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	bool ExecuteUbergraph_CheatMenuItemAllButton(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, class FText CallFunc_GetText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, double* CallFunc_Conv_StringToDouble_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Conv_StringToInt_ReturnValue, float* CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast);
};

}


