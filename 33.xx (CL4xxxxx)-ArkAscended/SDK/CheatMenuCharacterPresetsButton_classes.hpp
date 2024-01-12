#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x378 - 0x330)
// WidgetBlueprintGeneratedClass CheatMenuCharacterPresetsButton.CheatMenuCharacterPresetsButton_C
class UCheatMenuCharacterPresetsButton_C : public UUI_DebugSpawnMenuEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x340(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x348(0x8)(Edit, ExportObject, EditFixedSize, Transient, EditConst, SubobjectReference)
	TArray<int32>                                Levels;                                            // 0x350(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         NewVar_2;                                          // 0x360(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3C8A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCheatMenuCharacterPresetItems        ItemIDs;                                           // 0x368(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheatMenuCharacterPresetsButton_C* GetDefaultObj();

	TArray<int32> SetValues(class FText Cheat_Name);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	double ExecuteUbergraph_CheatMenuCharacterPresetsButton(bool* CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool* K2Node_DynamicCast_bSuccess, class AShooterHUD** CallFunc_GetShooterHUD_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_CloseActiveHub_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, struct FCheatMenuCheatItem* CallFunc_Array_Get_Item, bool CallFunc_IsValidSoftClassReference_ReturnValue, float CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast);
};

}


