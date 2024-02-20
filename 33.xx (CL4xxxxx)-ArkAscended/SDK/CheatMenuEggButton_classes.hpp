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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UImage*                                ButtonImage;                                       // 0x338(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x340(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x350(0x8)(EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                ItemSpawnString;                                   // 0x358(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	TSoftClassPtr<class UPrimalItem>             BlueprintID;                                       // 0x368(0x30)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	TSoftClassPtr<class UPrimalItem>             FertBlueprintID;                                   // 0x398(0x30)(Edit, BlueprintVisible, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheatMenuEggButton_C* GetDefaultObj();

	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	bool ExecuteUbergraph_CheatMenuEggButton(bool* Temp_bool_Variable, bool* Temp_bool_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, class FText CallFunc_GetText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsChecked_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, TSoftClassPtr<class UPrimalItem>* K2Node_Select_Default, TSoftClassPtr<class UPrimalItem>* K2Node_Select_Default_1);
};

}


