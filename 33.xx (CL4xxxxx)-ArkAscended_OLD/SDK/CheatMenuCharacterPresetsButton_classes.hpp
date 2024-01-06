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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x340(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	TArray<int32>                                Levels;                                            // 0x350(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         NewVar_2;                                          // 0x360(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_560[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCheatMenuCharacterPresetItems        ItemIDs;                                           // 0x368(0x10)(ConstParm, BlueprintVisible, ExportObject, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheatMenuCharacterPresetsButton_C* GetDefaultObj();

	void SetValues(class FText Cheat_Name, const struct FCheatMenuCharacterLevelPreset& Levels, const struct FCheatMenuCharacterPresetItems& Items, TArray<int32>* K2Node_MakeArray_Array);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	bool ExecuteUbergraph_CheatMenuCharacterPresetsButton(int32* EntryPoint, int32* CallFunc_Add_IntInt_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterHUD** CallFunc_GetShooterHUD_ReturnValue, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_CloseActiveHub_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue, float CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast);
};

}


