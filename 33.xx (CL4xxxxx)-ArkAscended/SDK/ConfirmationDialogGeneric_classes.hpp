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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7D0(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UImage*                                AcceptImage;                                       // 0x7D8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	class UBorder*                               BackgroundBorder;                                  // 0x7E0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	class UCustomButtonWidget*                   ButtonAccept;                                      // 0x7E8(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	class UCustomButtonWidget*                   ButtonDeny;                                        // 0x7F0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	class UImage*                                DenyImage;                                         // 0x7F8(0x8)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, Config, SubobjectReference)
	class UTextBlock*                            DenyImageF;                                        // 0x800(0x8)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, Config, SubobjectReference)
	class UTextBlock*                            Refresh;                                           // 0x808(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UConfirmationDialogGeneric_C* GetDefaultObj();

	void Construct();
	class FText OverrideCancelButtonText();
	class FText OverrideAcceptButtonText();
	class FString ExecuteUbergraph_ConfirmationDialogGeneric(bool* CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, int32* CallFunc_GetNumLocalPlayerControllers_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_3);
};

}


