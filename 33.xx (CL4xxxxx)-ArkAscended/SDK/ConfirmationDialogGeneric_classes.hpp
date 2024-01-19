#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x810 - 0x7D0)
// WidgetBlueprintGeneratedClass ConfirmationDialogGeneric.ConfirmationDialogGeneric_C
class UConfirmationDialogGeneric_C : public UUI_GenericConfirmationDialog
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7D0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UImage*                                AcceptImage;                                       // 0x7D8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UBorder*                               BackgroundBorder;                                  // 0x7E0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UCustomButtonWidget*                   ButtonAccept;                                      // 0x7E8(0x8)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UCustomButtonWidget*                   ButtonDeny;                                        // 0x7F0(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UImage*                                DenyImage;                                         // 0x7F8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UTextBlock*                            DenyImageF;                                        // 0x800(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UTextBlock*                            Refresh;                                           // 0x808(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UConfirmationDialogGeneric_C* GetDefaultObj();

	void Construct();
	class FText OverrideCancelButtonText();
	class FText OverrideAcceptButtonText();
	bool ExecuteUbergraph_ConfirmationDialogGeneric(int32 EntryPoint, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue, bool* CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, int32* CallFunc_GetNumLocalPlayerControllers_ReturnValue, int32* CallFunc_GetSplitscreenLocalPlayerIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue_1, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue_1);
};

}


