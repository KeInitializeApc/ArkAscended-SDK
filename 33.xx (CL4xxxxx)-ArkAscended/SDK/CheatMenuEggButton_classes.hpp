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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UImage*                                ButtonImage;                                       // 0x338(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x340(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                ItemSpawnString;                                   // 0x358(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	TSoftClassPtr<class UPrimalItem>             BlueprintID;                                       // 0x368(0x30)(BlueprintVisible, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	TSoftClassPtr<class UPrimalItem>             FertBlueprintID;                                   // 0x398(0x30)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheatMenuEggButton_C* GetDefaultObj();

	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	int32 ExecuteUbergraph_CheatMenuEggButton(int32* EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, TSoftClassPtr<class UPrimalItem> K2Node_Select_Default, bool* CallFunc_IsValidSoftClassReference_ReturnValue, TSoftClassPtr<class UPrimalItem> K2Node_Select_Default_1, bool* CallFunc_IsValidSoftClassReference_ReturnValue_1);
};

}


