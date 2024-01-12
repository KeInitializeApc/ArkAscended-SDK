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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UImage*                                IconImage;                                         // 0x340(0x8)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x348(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x350(0x8)(Edit, ExportObject, EditFixedSize, Transient, EditConst, SubobjectReference)
	class FString                                ItemSpawnString;                                   // 0x358(0x10)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UClass*                                BlueprintID;                                       // 0x368(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	int32                                        MyScreen;                                          // 0x370(0x4)(ConstParm, Net, ZeroConstructor, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheatMenuFolderButton_C* GetDefaultObj();

	class FText SetFolder(int32 ScreenNumber, class UTexture2D** Image, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	int32 ExecuteUbergraph_CheatMenuFolderButton();
};

}


