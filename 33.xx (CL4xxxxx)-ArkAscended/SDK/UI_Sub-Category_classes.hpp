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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UButton*                               Button_Category;                                   // 0x338(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Fire;                                          // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Category;                                     // 0x348(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSubCategoryClicked;                              // 0x350(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSTRUCT_SubOptions                    CategoryInfo;                                      // 0x360(0x28)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_SubMinusCategory_C* GetDefaultObj();

	class UTexture2DDynamic* OnFail_B7C25CB3474DE2A4D0BC4DAA4F40DDC8();
	class UTexture2DDynamic* OnSuccess_B7C25CB3474DE2A4D0BC4DAA4F40DDC8();
	void BndEvt__SubMinusCategory1_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	struct FButtonStyle Event_Set_Button_Style();
	void Construct();
	FDelegateProperty_ ExecuteUbergraph_UI_SubMinusCategory(int32* EntryPoint, class UAsyncTaskDownloadImage** CallFunc_DownloadImage_ReturnValue, class UTexture2DDynamic** K2Node_CustomEvent_Texture_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture, class UTexture2DDynamic** Temp_object_Variable, struct FButtonStyle* K2Node_CustomEvent_InStyle);
	void OnSubCategoryClicked__DelegateSignature(const class FString& SubCategory, int64 SubCategoryID);
};

}


