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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7D0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UImage*                                AcceptImage;                                       // 0x7D8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	class UBorder*                               BackgroundBorder;                                  // 0x7E0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	class UCustomButtonWidget*                   ButtonAccept;                                      // 0x7E8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	class UCustomButtonWidget*                   ButtonDeny;                                        // 0x7F0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	class UImage*                                DenyImage;                                         // 0x7F8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	class UTextBlock*                            DenyImageF;                                        // 0x800(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	class UTextBlock*                            Refresh;                                           // 0x808(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UConfirmationDialogGeneric_C* GetDefaultObj();

	void Construct();
	void OverrideCancelButtonText(class FText CancelText);
	void OverrideAcceptButtonText(class FText AcceptText);
	bool ExecuteUbergraph_ConfirmationDialogGeneric(int32* EntryPoint, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class FText* K2Node_Event_CancelText, class FString* CallFunc_GetObjectName_ReturnValue, class FText* K2Node_Event_AcceptText, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, int32* CallFunc_GetNumLocalPlayerControllers_ReturnValue, int32* CallFunc_GetSplitscreenLocalPlayerIndex_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue_1, class FString* CallFunc_GetObjectName_ReturnValue_1, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue_1);
};

}


