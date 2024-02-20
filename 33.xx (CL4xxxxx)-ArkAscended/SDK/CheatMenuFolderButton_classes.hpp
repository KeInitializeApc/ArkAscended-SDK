#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x374 - 0x330)
// WidgetBlueprintGeneratedClass CheatMenuFolderButton.CheatMenuFolderButton_C
class UCheatMenuFolderButton_C : public UUI_DebugSpawnMenuEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UImage*                                IconImage;                                         // 0x340(0x8)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x350(0x8)(EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                ItemSpawnString;                                   // 0x358(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UClass*                                BlueprintID;                                       // 0x368(0x8)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        MyScreen;                                          // 0x370(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheatMenuFolderButton_C* GetDefaultObj();

	class UTexture2D* SetFolder(class FText FolderName, int32* ScreenNumber, class FString* CallFunc_Conv_TextToString_ReturnValue);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	int32 ExecuteUbergraph_CheatMenuFolderButton();
};

}


