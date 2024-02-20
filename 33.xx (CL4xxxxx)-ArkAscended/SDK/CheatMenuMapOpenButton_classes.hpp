#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x358 - 0x330)
// WidgetBlueprintGeneratedClass CheatMenuMapOpenButton.CheatMenuMapOpenButton_C
class UCheatMenuMapOpenButton_C : public UUI_DebugSpawnMenuEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x348(0x8)(EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  MapName;                                           // 0x350(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheatMenuMapOpenButton_C* GetDefaultObj();

	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	int32 ExecuteUbergraph_CheatMenuMapOpenButton();
};

}


