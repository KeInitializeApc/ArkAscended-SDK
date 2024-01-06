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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UImage*                                IconImage;                                         // 0x340(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x348(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class FString                                ItemSpawnString;                                   // 0x358(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UClass*                                BlueprintID;                                       // 0x368(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class UMaterialInterface*                    NewVar_0;                                          // 0x370(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, RepNotify)

	static class UClass* StaticClass();
	static class UCheatMenuItemButton_C* GetDefaultObj();

	class FString SetItem(class FText* CallFunc_Conv_StringToText_ReturnValue, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	TSoftClassPtr<class UPrimalItem> ExecuteUbergraph_CheatMenuItemButton(int32* EntryPoint, bool* Temp_bool_Variable, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* Temp_bool_Variable_1, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, class FString* K2Node_Select_Default, class FString* K2Node_Select_Default_1, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_2, class FString* CallFunc_Concat_StrStr_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_3, class FString* CallFunc_Concat_StrStr_ReturnValue_3, class FString* CallFunc_Concat_StrStr_ReturnValue_4, bool* CallFunc_NotEqual_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_5, class FString* CallFunc_Concat_StrStr_ReturnValue_6, class FString* CallFunc_Concat_StrStr_ReturnValue_7, float CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast);
};

}


