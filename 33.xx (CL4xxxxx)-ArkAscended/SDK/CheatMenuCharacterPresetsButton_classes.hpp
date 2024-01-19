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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x340(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<int32>                                Levels;                                            // 0x350(0x10)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         NewVar_2;                                          // 0x360(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_4711[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCheatMenuCharacterPresetItems        ItemIDs;                                           // 0x368(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheatMenuCharacterPresetsButton_C* GetDefaultObj();

	class FText SetValues(struct FCheatMenuCharacterLevelPreset* Levels, const struct FCheatMenuCharacterPresetItems& Items, const TArray<int32>& K2Node_MakeArray_Array);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	float ExecuteUbergraph_CheatMenuCharacterPresetsButton(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterHUD** CallFunc_GetShooterHUD_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, const struct FCheatMenuCheatItem& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
};

}


