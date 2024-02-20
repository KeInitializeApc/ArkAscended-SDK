#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x388 - 0x330)
// WidgetBlueprintGeneratedClass UI_Sub-Category.UI_Sub-Category_C
class UUI_SubMinusCategory_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UButton*                               Button_Category;                                   // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Fire;                                          // 0x340(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Category;                                     // 0x348(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSubCategoryClicked;                              // 0x350(0x10)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSTRUCT_SubOptions                    CategoryInfo;                                      // 0x360(0x28)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_SubMinusCategory_C* GetDefaultObj();

	void OnFail_B7C25CB3474DE2A4D0BC4DAA4F40DDC8(class UTexture2DDynamic** Texture);
	void OnSuccess_B7C25CB3474DE2A4D0BC4DAA4F40DDC8(class UTexture2DDynamic** Texture);
	void BndEvt__SubMinusCategory1_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	struct FButtonStyle Event_Set_Button_Style();
	void Construct();
	FDelegateProperty_ ExecuteUbergraph_UI_SubMinusCategory(class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, bool* CallFunc_IsValid_ReturnValue, class UTexture2DDynamic* K2Node_CustomEvent_Texture, class UTexture2DDynamic* Temp_object_Variable, struct FButtonStyle* K2Node_CustomEvent_InStyle);
	int64 OnSubCategoryClicked__DelegateSignature();
};

}


