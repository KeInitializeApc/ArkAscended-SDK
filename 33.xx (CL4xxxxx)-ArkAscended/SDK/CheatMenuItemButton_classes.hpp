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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UImage*                                IconImage;                                         // 0x340(0x8)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x348(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x350(0x8)(Edit, ExportObject, EditFixedSize, Transient, EditConst, SubobjectReference)
	class FString                                ItemSpawnString;                                   // 0x358(0x10)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UClass*                                BlueprintID;                                       // 0x368(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class UMaterialInterface*                    NewVar_0;                                          // 0x370(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference, RepNotify)

	static class UClass* StaticClass();
	static class UCheatMenuItemButton_C* GetDefaultObj();

	class UMaterialInstanceDynamic* SetItem(class FText CallFunc_Conv_StringToText_ReturnValue, bool* K2Node_DynamicCast_bSuccess, class UPrimalItemDyeGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Dye_Generic, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_IsValid_ReturnValue, class FString* CallFunc_GetItemShortName_ReturnValue);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	bool ExecuteUbergraph_CheatMenuItemButton(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool Temp_bool_Variable, bool* K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, class FString* K2Node_Select_Default, class FString* K2Node_Select_Default_1, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, double CallFunc_Conv_StringToDouble_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, int32 CallFunc_Conv_StringToInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, TSoftClassPtr<class UPrimalItem>* CallFunc_Conv_ClassToSoftClassReference_ReturnValue, float CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast);
};

}


