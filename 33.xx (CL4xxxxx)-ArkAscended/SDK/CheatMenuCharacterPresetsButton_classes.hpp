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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x348(0x8)(EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	TArray<int32>                                Levels;                                            // 0x350(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         NewVar_2;                                          // 0x360(0x1)(BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_1FB8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCheatMenuCharacterPresetItems        ItemIDs;                                           // 0x368(0x10)(EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheatMenuCharacterPresetsButton_C* GetDefaultObj();

	TArray<int32> SetValues(class FText Cheat_Name, struct FCheatMenuCharacterPresetItems* Items);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	bool ExecuteUbergraph_CheatMenuCharacterPresetsButton(bool* CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_CloseActiveHub_ReturnValue, float* CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast);
};

}


