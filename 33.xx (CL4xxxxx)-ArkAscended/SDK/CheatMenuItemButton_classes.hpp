#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x378 - 0x330)
// WidgetBlueprintGeneratedClass CheatMenuItemButton.CheatMenuItemButton_C
class UCheatMenuItemButton_C : public UUI_DebugSpawnMenuEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UImage*                                IconImage;                                         // 0x340(0x8)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x350(0x8)(EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                ItemSpawnString;                                   // 0x358(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UClass*                                BlueprintID;                                       // 0x368(0x8)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UMaterialInterface*                    NewVar_0;                                          // 0x370(0x8)(BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify)

	static class UClass* StaticClass();
	static class UCheatMenuItemButton_C* GetDefaultObj();

	class FString SetItem(class UClass** ItemClass, class FText* CallFunc_Conv_StringToText_ReturnValue, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	TSoftClassPtr<class UPrimalItem> ExecuteUbergraph_CheatMenuItemButton(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool* Temp_bool_Variable, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool* Temp_bool_Variable_1, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, class FString* K2Node_Select_Default, class FString* K2Node_Select_Default_1, class FText CallFunc_GetText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, double* CallFunc_Conv_StringToDouble_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_2, int32 CallFunc_Conv_StringToInt_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_3, float* CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast);
};

}


