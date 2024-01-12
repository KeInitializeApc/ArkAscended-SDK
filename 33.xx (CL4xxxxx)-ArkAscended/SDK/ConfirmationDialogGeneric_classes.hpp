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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7D0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UImage*                                AcceptImage;                                       // 0x7D8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UBorder*                               BackgroundBorder;                                  // 0x7E0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UCustomButtonWidget*                   ButtonAccept;                                      // 0x7E8(0x8)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UCustomButtonWidget*                   ButtonDeny;                                        // 0x7F0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UImage*                                DenyImage;                                         // 0x7F8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            DenyImageF;                                        // 0x800(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            Refresh;                                           // 0x808(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UConfirmationDialogGeneric_C* GetDefaultObj();

	void Construct();
	class FText OverrideCancelButtonText();
	class FText OverrideAcceptButtonText();
	class UTexture2D* ExecuteUbergraph_ConfirmationDialogGeneric(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3);
};

}


